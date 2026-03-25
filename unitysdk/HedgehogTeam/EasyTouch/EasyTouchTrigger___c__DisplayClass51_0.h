#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HedgehogTeam/EasyTouch/EasyTouch_EvtType.h"
#include "unitysdk/System/Object.h"

namespace HedgehogTeam::EasyTouch { class EasyTouchTrigger_EasyTouchReceiver; }

#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER___C__DISPLAYCLASS51_0__CTOR_OFFSET UNITYSDK_OFFSET(0x11A7A010)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER___C__DISPLAYCLASS51_0__ISRECEVIER4_B__0_OFFSET UNITYSDK_OFFSET(0x11A7A080)

namespace HedgehogTeam::EasyTouch
{
	inline static constexpr unsigned int EasyTouchTrigger___c__DisplayClass51_0_TypeDefinitionIndex = 31264;

	class EasyTouchTrigger___c__DisplayClass51_0 : public ::System::Object
	{
	public:
		::HedgehogTeam::EasyTouch::EasyTouch_EvtType evnt; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER___C__DISPLAYCLASS51_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _IsRecevier4_b__0(::HedgehogTeam::EasyTouch::EasyTouchTrigger_EasyTouchReceiver* e)
		{
			return ((::System::Boolean(*)(::PVOID, ::HedgehogTeam::EasyTouch::EasyTouchTrigger_EasyTouchReceiver*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER___C__DISPLAYCLASS51_0__ISRECEVIER4_B__0_OFFSET))(this, e);
		}
	};
}
