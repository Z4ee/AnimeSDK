#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HedgehogTeam/EasyTouch/QuickBase.h"
#include "unitysdk/HedgehogTeam/EasyTouch/QuickLongTap_ActionTriggering.h"

namespace HedgehogTeam::EasyTouch { class Gesture; }
namespace HedgehogTeam::EasyTouch { class QuickLongTap_OnLongTap; }

#define HEDGEHOGTEAM_EASYTOUCH_QUICKLONGTAP_DOACTION_OFFSET UNITYSDK_OFFSET(0x1652DF70)
#define HEDGEHOGTEAM_EASYTOUCH_QUICKLONGTAP_ISOVERME_OFFSET UNITYSDK_OFFSET(0x1652DDF0)
#define HEDGEHOGTEAM_EASYTOUCH_QUICKLONGTAP_UPDATE_OFFSET UNITYSDK_OFFSET(0x1652DA30)
#define HEDGEHOGTEAM_EASYTOUCH_QUICKLONGTAP__CTOR_OFFSET UNITYSDK_OFFSET(0x1652D9A0)

namespace HedgehogTeam::EasyTouch
{
	inline static constexpr unsigned int QuickLongTap_TypeDefinitionIndex = 38965;

	class QuickLongTap : public ::HedgehogTeam::EasyTouch::QuickBase
	{
	public:
		::HedgehogTeam::EasyTouch::QuickLongTap_OnLongTap* onLongTap; // 0x70
		::HedgehogTeam::EasyTouch::QuickLongTap_ActionTriggering actionTriggering; // 0x78
		::HedgehogTeam::EasyTouch::Gesture* currentGesture; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_QUICKLONGTAP__CTOR_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_QUICKLONGTAP_UPDATE_OFFSET))(this);
		}

		::System::Void DoAction(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_QUICKLONGTAP_DOACTION_OFFSET))(this, a1);
		}

		::System::Boolean IsOverMe(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_QUICKLONGTAP_ISOVERME_OFFSET))(this, a1);
		}
	};
}
