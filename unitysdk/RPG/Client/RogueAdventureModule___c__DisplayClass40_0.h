#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_611;

#define RPG_CLIENT_ROGUEADVENTUREMODULE___C__DISPLAYCLASS40_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB01DE80)
#define RPG_CLIENT_ROGUEADVENTUREMODULE___C__DISPLAYCLASS40_0__REMOVETRIGGEREDACTIONID_B__0_OFFSET UNITYSDK_OFFSET(0xB021600)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueAdventureModule___c__DisplayClass40_0_TypeDefinitionIndex = 62066;

	class RogueAdventureModule___c__DisplayClass40_0 : public ::System::Object
	{
	public:
		::System::UInt32 actionID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE___C__DISPLAYCLASS40_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _RemoveTriggeredActionID_b__0(::Class_0_16E4307DCC419505_611* a)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_611*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE___C__DISPLAYCLASS40_0__REMOVETRIGGEREDACTIONID_B__0_OFFSET))(this, a);
		}
	};
}
