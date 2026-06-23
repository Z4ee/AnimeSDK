#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int AbilityTargetting_TypeDefinitionIndex = 81408;

	enum class AbilityTargetting : ::System::Int32
	{
		Other = 9,
		SavePoint = 15,
		LocalAvatarAttackTarget = 17,
		CasterAllied = 5,
		CasterAlliedNoNeedEnterBattle = 28,
		Buddy_Support = 23,
		TeamAvatarsAll = 31,
		NodePoint = 16,
		LastSelfAttackTarget = 21,
		LastLocalAvatarAttackTarget = 19,
		Custom = 99,
		Buddy_Partner = 27,
		Buddy_Fight = 22,
		TeamAllied = 25,
		TeamAvatars = 10,
		TargetAllied = 6,
		Camera = 14,
		AimTarget = 24,
		Caster = 1,
		TeamEntity = 13,
		BuddyAllied = 20,
		SelfAttackTarget = 4,
		Target = 2,
		RecordEntityKey = 34,
		QTETarget = 12,
		Buddy = 11,
		PartnerAvatars = 26,
		Self = 0,
		EnemyAlliedNoNeedEnterBattle = 30,
		TargetAlliedNoNeedEnterBattle = 29,
		Level = 18,
		CoopTeamAvatarsExceptSelf = 32,
		None = 90,
		CoopTeamAvatarsAllExceptSelf = 33,
		All = 8,
		EnemyAllied = 7,
		LocalAvatar = 3,
	};
}
