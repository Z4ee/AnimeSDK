#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define RPG_CLIENT_ACTIVITYHIPPLENUTILS___C__DISPLAYCLASS31_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19D11E30)
#define RPG_CLIENT_ACTIVITYHIPPLENUTILS___C__DISPLAYCLASS31_0__OPENHIPPLENMAINPAGE_B__0_OFFSET UNITYSDK_OFFSET(0x19D12030)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityHipplenUtils___c__DisplayClass31_0_TypeDefinitionIndex = 58792;

	class ActivityHipplenUtils___c__DisplayClass31_0 : public ::System::Object
	{
	public:
		::System::Action* onEnter; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLENUTILS___C__DISPLAYCLASS31_0__CTOR_OFFSET))(this);
		}

		::System::Void _OpenHipplenMainPage_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLENUTILS___C__DISPLAYCLASS31_0__OPENHIPPLENMAINPAGE_B__0_OFFSET))(this);
		}
	};
}
