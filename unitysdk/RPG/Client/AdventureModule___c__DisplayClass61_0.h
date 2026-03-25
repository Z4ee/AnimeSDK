#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_9D5608F598A30CAC_18;

#define RPG_CLIENT_ADVENTUREMODULE___C__DISPLAYCLASS61_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9034700)
#define RPG_CLIENT_ADVENTUREMODULE___C__DISPLAYCLASS61_0___ONGRIDFIGHTENTERBATTLESTAGESCRSP_B__0_OFFSET UNITYSDK_OFFSET(0x9047160)

namespace RPG::Client
{
	inline static constexpr unsigned int AdventureModule___c__DisplayClass61_0_TypeDefinitionIndex = 50347;

	class AdventureModule___c__DisplayClass61_0 : public ::System::Object
	{
	public:
		::Class_1_9D5608F598A30CAC_18* rsp; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREMODULE___C__DISPLAYCLASS61_0__CTOR_OFFSET))(this);
		}

		::System::Void __OnGridFightEnterBattleStageScRsp_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREMODULE___C__DISPLAYCLASS61_0___ONGRIDFIGHTENTERBATTLESTAGESCRSP_B__0_OFFSET))(this);
		}
	};
}
