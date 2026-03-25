#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChimeraDuelMasterData; }
namespace RPG::Client::Prop { class ChimeraDuelMainPuzzleBattleView; }

#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBATTLEVIEW___C__DISPLAYCLASS24_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA04CBB0)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBATTLEVIEW___C__DISPLAYCLASS24_0__LOADMASTERGROUP_B__0_OFFSET UNITYSDK_OFFSET(0xA04D850)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraDuelMainPuzzleBattleView___c__DisplayClass24_0_TypeDefinitionIndex = 63823;

	class ChimeraDuelMainPuzzleBattleView___c__DisplayClass24_0 : public ::System::Object
	{
	public:
		::RPG::Client::ChimeraDuelMasterData* enemyMasterData; // 0x10
		::RPG::Client::Prop::ChimeraDuelMainPuzzleBattleView* __4__this; // 0x18
		::RPG::Client::ChimeraDuelMasterData* allyMasterData; // 0x20
		::System::UInt32 groupID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBATTLEVIEW___C__DISPLAYCLASS24_0__CTOR_OFFSET))(this);
		}

		::System::Void _LoadMasterGroup_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBATTLEVIEW___C__DISPLAYCLASS24_0__LOADMASTERGROUP_B__0_OFFSET))(this);
		}
	};
}
