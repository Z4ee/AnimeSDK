#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int AbilityTargetting_TypeDefinitionIndex = 60107;

	enum class AbilityTargetting : ::System::Int32
	{
		LastLocalAvatarAttackTarget = 19,
		Self = 0,
		All = 8,
		CasterAllied = 5,
		TeamAvatarsAll = 31,
		NodePoint = 16,
		RecordEntityKey = 34,
		EnemyAllied = 7,
		PartnerAvatars = 26,
		Target = 2,
		LastSelfAttackTarget = 21,
		Level = 18,
		Buddy = 11,
		Caster = 1,
		Buddy_Support = 23,
		SelfAttackTarget = 4,
		EnemyAlliedNoNeedEnterBattle = 30,
		AimTarget = 24,
		TargetAlliedNoNeedEnterBattle = 29,
		Buddy_Partner = 27,
		LocalAvatarAttackTarget = 17,
		CoopTeamAvatarsAllExceptSelf = 33,
		Other = 9,
		TeamAllied = 25,
		CoopTeamAvatarsExceptSelf = 32,
		QTETarget = 12,
		TeamAvatars = 10,
		Camera = 14,
		None = 90,
		SavePoint = 15,
		LocalAvatar = 3,
		Buddy_Fight = 22,
		TeamEntity = 13,
		TargetAllied = 6,
		CasterAlliedNoNeedEnterBattle = 28,
		BuddyAllied = 20,
		Custom = 99,
	};
}
