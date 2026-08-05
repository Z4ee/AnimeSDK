#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int AbilityTargetting_TypeDefinitionIndex = 45925;

	enum class AbilityTargetting : ::System::Int32
	{
		BuddyAllied = 20,
		TeamAvatarsAll = 31,
		QTETarget = 12,
		SelfAttackTarget = 4,
		Camera = 14,
		Level = 18,
		NodePoint = 16,
		TargetAlliedNoNeedEnterBattle = 29,
		LocalControlZenkovYokai = 35,
		Buddy_Fight = 22,
		LastSelfAttackTarget = 21,
		LocalAvatarAttackTarget = 17,
		TeamEntity = 13,
		AimTarget = 24,
		Buddy_Partner = 27,
		Self = 0,
		TeamAvatars = 10,
		EnemyAllied = 7,
		Other = 9,
		TargetAllied = 6,
		ZenkovPyrois = 37,
		EnemyAlliedNoNeedEnterBattle = 30,
		All = 8,
		Caster = 1,
		LastLocalAvatarAttackTarget = 19,
		CoopTeamAvatarsAllExceptSelf = 33,
		CasterAlliedNoNeedEnterBattle = 28,
		Target = 2,
		Buddy_Support = 23,
		CasterAllied = 5,
		Buddy = 11,
		TeamAllied = 25,
		RecordEntityKey = 34,
		None = 90,
		SavePoint = 15,
		CoopTeamAvatarsExceptSelf = 32,
		LocalAvatar = 3,
		Custom = 99,
		PartnerAvatars = 26,
		ZenkovYokais = 36,
	};
}
