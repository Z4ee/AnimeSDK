#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HedgehogTeam/EasyTouch/QuickBase.h"
#include "unitysdk/HedgehogTeam/EasyTouch/QuickTap_ActionTriggering.h"

namespace HedgehogTeam::EasyTouch { class Gesture; }
namespace HedgehogTeam::EasyTouch { class QuickTap_OnTap; }

#define HEDGEHOGTEAM_EASYTOUCH_QUICKTAP_DOACTION_OFFSET UNITYSDK_OFFSET(0x1652F9F0)
#define HEDGEHOGTEAM_EASYTOUCH_QUICKTAP_UPDATE_OFFSET UNITYSDK_OFFSET(0x1652F900)
#define HEDGEHOGTEAM_EASYTOUCH_QUICKTAP__CTOR_OFFSET UNITYSDK_OFFSET(0x1652F870)

namespace HedgehogTeam::EasyTouch
{
	inline static constexpr unsigned int QuickTap_TypeDefinitionIndex = 38976;

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

		::System::Void DoAction(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_QUICKTAP_DOACTION_OFFSET))(this, a1);
		}
	};
}
