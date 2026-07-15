#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightPlayerPropertyType_TypeDefinitionIndex = 61636;

	enum class GridFightPlayerPropertyType : ::System::Int32
	{
		HP = 0,
		MaxHP = 1,
		Level = 2,
		Exp = 3,
		Gold = 4,
		RoleMaxNum = 5,
		BuyExpCost = 6,
		LockType = 7,
		TrackTraits = 8,
		KeepWinCnt = 9,
		MaxBackRoleNum = 10,
		MaxBenchRoleNum = 11,
		MaxInterestNum = 12,
		TrackEquips = 13,
		PlayerLevelLimit = 14,
		BuyExpHpCost = 15,
	};
}
