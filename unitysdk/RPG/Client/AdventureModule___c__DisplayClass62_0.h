#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7BF8FDF00F218876_21;

#define RPG_CLIENT_ADVENTUREMODULE___C__DISPLAYCLASS62_0__CTOR_OFFSET UNITYSDK_OFFSET(0xC5F0250)
#define RPG_CLIENT_ADVENTUREMODULE___C__DISPLAYCLASS62_0___ONGRIDFIGHTENTERBATTLESTAGESCRSP_B__0_OFFSET UNITYSDK_OFFSET(0xC5F0260)

namespace RPG::Client
{
	inline static constexpr unsigned int AdventureModule___c__DisplayClass62_0_TypeDefinitionIndex = 62013;

	class AdventureModule___c__DisplayClass62_0 : public ::System::Object
	{
	public:
		::Class_1_7BF8FDF00F218876_21* rsp; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREMODULE___C__DISPLAYCLASS62_0__CTOR_OFFSET))(this);
		}

		::System::Void __OnGridFightEnterBattleStageScRsp_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREMODULE___C__DISPLAYCLASS62_0___ONGRIDFIGHTENTERBATTLESTAGESCRSP_B__0_OFFSET))(this);
		}
	};
}
