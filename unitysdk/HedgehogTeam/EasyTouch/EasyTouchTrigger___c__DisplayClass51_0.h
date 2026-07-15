#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HedgehogTeam/EasyTouch/EasyTouch_EvtType.h"
#include "unitysdk/System/Object.h"

namespace HedgehogTeam::EasyTouch { class EasyTouchTrigger_EasyTouchReceiver; }

#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER___C__DISPLAYCLASS51_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4F33C0)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER___C__DISPLAYCLASS51_0__ISRECEVIER4_B__0_OFFSET UNITYSDK_OFFSET(0x1B4F3430)

namespace HedgehogTeam::EasyTouch
{
	inline static constexpr unsigned int EasyTouchTrigger___c__DisplayClass51_0_TypeDefinitionIndex = 38092;

	class EasyTouchTrigger___c__DisplayClass51_0 : public ::System::Object
	{
	public:
		::HedgehogTeam::EasyTouch::EasyTouch_EvtType evnt; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER___C__DISPLAYCLASS51_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _IsRecevier4_b__0(::HedgehogTeam::EasyTouch::EasyTouchTrigger_EasyTouchReceiver* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HedgehogTeam::EasyTouch::EasyTouchTrigger_EasyTouchReceiver*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER___C__DISPLAYCLASS51_0__ISRECEVIER4_B__0_OFFSET))(this, a1);
		}
	};
}
