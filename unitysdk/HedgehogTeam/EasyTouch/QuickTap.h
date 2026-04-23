#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HedgehogTeam/EasyTouch/QuickBase.h"
#include "unitysdk/HedgehogTeam/EasyTouch/QuickTap_ActionTriggering.h"

namespace HedgehogTeam::EasyTouch { class Gesture; }
namespace HedgehogTeam::EasyTouch { class QuickTap_OnTap; }

#define HEDGEHOGTEAM_EASYTOUCH_QUICKTAP_DOACTION_OFFSET UNITYSDK_OFFSET(0x12C4E430)
#define HEDGEHOGTEAM_EASYTOUCH_QUICKTAP_UPDATE_OFFSET UNITYSDK_OFFSET(0x12C4E350)
#define HEDGEHOGTEAM_EASYTOUCH_QUICKTAP__CTOR_OFFSET UNITYSDK_OFFSET(0x12C4E2C0)

namespace HedgehogTeam::EasyTouch
{
	inline static constexpr unsigned int QuickTap_TypeDefinitionIndex = 37009;

	class QuickTap : public ::HedgehogTeam::EasyTouch::QuickBase
	{
	public:
		::HedgehogTeam::EasyTouch::QuickTap_OnTap* onTap; // 0x70
		::HedgehogTeam::EasyTouch::QuickTap_ActionTriggering actionTriggering; // 0x78
		::HedgehogTeam::EasyTouch::Gesture* currentGesture; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_QUICKTAP__CTOR_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_QUICKTAP_UPDATE_OFFSET))(this);
		}

		::System::Void DoAction(::HedgehogTeam::EasyTouch::Gesture* gesture)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_QUICKTAP_DOACTION_OFFSET))(this, gesture);
		}
	};
}
