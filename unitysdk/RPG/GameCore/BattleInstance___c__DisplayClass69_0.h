#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class LineUpCharacter; }

#define RPG_GAMECORE_BATTLEINSTANCE___C__DISPLAYCLASS69_0__CTOR_OFFSET UNITYSDK_OFFSET(0xCD334E0)
#define RPG_GAMECORE_BATTLEINSTANCE___C__DISPLAYCLASS69_0___GETNEWLINEUPINDEX_B__0_OFFSET UNITYSDK_OFFSET(0xCD336B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleInstance___c__DisplayClass69_0_TypeDefinitionIndex = 52310;

	class BattleInstance___c__DisplayClass69_0 : public ::System::Object
	{
	public:
		::System::UInt32 characterID; // 0x10
		::System::UInt32 enhancedID; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEINSTANCE___C__DISPLAYCLASS69_0__CTOR_OFFSET))(this);
		}

		::System::Boolean __GetNewLineupIndex_b__0(::RPG::GameCore::LineUpCharacter* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::LineUpCharacter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEINSTANCE___C__DISPLAYCLASS69_0___GETNEWLINEUPINDEX_B__0_OFFSET))(this, a1);
		}
	};
}
