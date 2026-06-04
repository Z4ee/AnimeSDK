#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class TimeSpaceCrisscrossGroupBehavior; }

#define RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR___C__DISPLAYCLASS0_0__CTOR_OFFSET UNITYSDK_OFFSET(0xCA56D20)
#define RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR___C__DISPLAYCLASS0_0___ASYNCINITIRIRENDERER_B__0_OFFSET UNITYSDK_OFFSET(0xCA600E0)

namespace RPG::Client
{
	inline static constexpr unsigned int TimeSpaceCrisscrossGroupBehavior___c__DisplayClass0_0_TypeDefinitionIndex = 65644;

	class TimeSpaceCrisscrossGroupBehavior___c__DisplayClass0_0 : public ::System::Object
	{
	public:
		::RPG::Client::TimeSpaceCrisscrossGroupBehavior* __4__this; // 0x10
		::System::Int32 workID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR___C__DISPLAYCLASS0_0__CTOR_OFFSET))(this);
		}

		::System::Void __AsyncInitIRIRenderer_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR___C__DISPLAYCLASS0_0___ASYNCINITIRIRENDERER_B__0_OFFSET))(this);
		}
	};
}
