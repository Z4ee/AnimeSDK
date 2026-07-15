#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int ActionBarItemUIStyle_TypeDefinitionIndex = 68011;

	enum class ActionBarItemUIStyle : ::System::Int32
	{
		Unknown = 0,
		Append_Teammate_Normal = 1,
		Append_Enemy_Normal = 2,
		Append_Neutral_Normal = 3,
		Current_Enemy_Normal = 4,
		Current_Teammate_Normal = 5,
		Current_Neutral_Normal = 6,
		Current_Teammate_UltraSkill = 7,
		Current_Teammate_BeingInserted = 8,
		Current_Enemy_BeingInserted = 9,
		Current_Teammate_InsertAbility = 10,
		Preview_Normal = 11,
		Preview_Target = 12,
		BattleEvent_Normal = 13,
		BattleEvent_Warning = 14,
		BattleEvent_Status = 15,
		AbyssBattleEvent_Normal = 16,
		AbyssBattleEvent_Warning = 17,
		AbyssBattleEvent_Action = 18,
		BattleEvent_CountDownWarning = 19,
		BattleEvent_CountDownEvolveBuild = 20,
		BattleEvent_CountDownRogueMagic = 21,
		BattleEvent_CountDownGridFight = 22,
		Current_GridFightTraitAssist = 23,
		Current_GridFightTraitAssist_InsertAbility = 24,
		Append_GridFightTraitAssist = 25,
		BattleEvent_RogueTournTitanDayNight = 26,
		BattleEvent_CountDownBattleVersusBar = 27,
		BattleEvent_ElationGiftBox = 28,
		BattleEvent_ElationGiftBox_Insert = 29,
		BattleEvent_ElationGiftBox_Action = 30,
		BattleEvent_Elation = 31,
		BattleEvent_Elation_WithoutCharacter = 32,
		Current_Elation_Insert_Head = 33,
		Current_Elation_Action_Head = 34,
		Current_Elation_Insert_Tail = 35,
		Current_Elation_Action_Tail = 36,
		Current_Elation_UnExpand = 37,
		Current_Elation_Action_UnExpand = 38,
		Current_Elation_Dummy = 39,
		Current_SilverWolf999_Normal = 40,
		Current_SilverWolf999_UltraSkill = 41,
		Current_SilverWolf999_BeingInserted = 42,
		Append_SilverWolf999_Normal = 43,
		Count = 44,
	};
}
