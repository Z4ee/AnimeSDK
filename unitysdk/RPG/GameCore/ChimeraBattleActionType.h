#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraBattleActionType_TypeDefinitionIndex = 15218;

	enum class ChimeraBattleActionType : ::System::Int32
	{
		None = 0,
		AfterAttack = 1,
		AfterSpeAttack = 2,
		AfterStatusRaise = 3,
		AfterInjured = 4,
		BeforeChimeraDead = 5,
		AfterWorkFinish = 6,
		NotRequired = 7,
		BeforeAttack = 8,
		AfterValueRaiseAbility = 9,
		ChangeSelfAttribute = 10,
		OnGameStart = 11,
		OnCauseDamageGreater = 12,
		OnAfterActionAndCanTerminateWork = 13,
	};
}
