#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector2.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ACTIONBARSTYLESIZESETTING_METHOD_2_0864A1CB29B85CAD_OFFSET UNITYSDK_OFFSET(0x185F8D30)
#define RPG_GAMECORE_ACTIONBARSTYLESIZESETTING__CTOR_OFFSET UNITYSDK_OFFSET(0x185F97C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActionBarStyleSizeSetting_TypeDefinitionIndex = 16249;

	class ActionBarStyleSizeSetting : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::MVector2 Unknown; // 0x10
		::RPG::MVector2 AppendTeammateNormal; // 0x18
		::RPG::MVector2 AppendEnemyNormal; // 0x20
		::RPG::MVector2 AppendNeutralNormal; // 0x28
		::RPG::MVector2 CurrentEnemyNormal; // 0x30
		::RPG::MVector2 CurrentTeammateNormal; // 0x38
		::RPG::MVector2 CurrentNeutralNormal; // 0x40
		::RPG::MVector2 CurrentTeammateUltraSkill; // 0x48
		::RPG::MVector2 CurrentTeammateBeingInserted; // 0x50
		::RPG::MVector2 CurrentEnemyBeingInserted; // 0x58
		::RPG::MVector2 CurrentTeammateInsertAbility; // 0x60
		::RPG::MVector2 PreviewNormal; // 0x68
		::RPG::MVector2 PreviewTarget; // 0x70
		::RPG::MVector2 BattleEventNormal; // 0x78
		::RPG::MVector2 BattleEventWarning; // 0x80
		::RPG::MVector2 BattleEventStatus; // 0x88
		::RPG::MVector2 AbyssBattleEventNormal; // 0x90
		::RPG::MVector2 AbyssBattleEventWarning; // 0x98
		::RPG::MVector2 AbyssBattleEventAction; // 0xA0
		::RPG::MVector2 BattleEventCountDownWarning; // 0xA8
		::RPG::MVector2 BattleEventCountDownEvolveBuild; // 0xB0
		::RPG::MVector2 BattleEventCountDownRogueMagic; // 0xB8
		::RPG::MVector2 BattleEventRogueTournTitanDayNight; // 0xC0
		::RPG::MVector2 BattleEventCountDownBattleVersusBar; // 0xC8
		::RPG::MVector2 BattleEventElationGiftBox; // 0xD0
		::RPG::MVector2 BattleEventElationGiftBoxAction; // 0xD8
		::RPG::MVector2 BattleEventElationGiftBoxActionDelta; // 0xE0
		::RPG::MVector2 BattleEventElation; // 0xE8
		::RPG::MVector2 BattleEventElationWithoutCharacter; // 0xF0
		::RPG::MVector2 BattleEventElationAction; // 0xF8
		::RPG::MVector2 BattleEventElationActionDelta; // 0x100
		::RPG::MVector2 AppendEnemyMultiAction; // 0x108
		::RPG::MVector2 AppendEnemyMultiActionSpacing; // 0x110
		::RPG::MVector2 CurrentEnemyMultiAction; // 0x118
		::RPG::MVector2 CurrentEnemyMultiActionSpacing; // 0x120
		::RPG::MVector2 BattleEventCountDownGridFight; // 0x128

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONBARSTYLESIZESETTING__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_0864A1CB29B85CAD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ActionBarStyleSizeSetting*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActionBarStyleSizeSetting*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONBARSTYLESIZESETTING_METHOD_2_0864A1CB29B85CAD_OFFSET))(a1, a2);
		}
	};
}
