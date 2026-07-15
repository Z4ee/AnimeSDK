#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGameShare::CakeRaceCore
{
	inline static constexpr unsigned int CakeRaceMsgId_TypeDefinitionIndex = 35670;

	enum class CakeRaceMsgId : ::System::Int32
	{
		None = 0,
		GetAllDataReq = 1,
		GetAllDataRsp = 2,
		BetReq = 3,
		BetRsp = 4,
		VoteReq = 5,
		VoteRsp = 6,
		VoteConfirmReq = 7,
		VoteConfirmRsp = 8,
		CastSkillReq = 9,
		CastSkillRsp = 10,
		PlayerReadyReq = 11,
		PlayerReadyRsp = 12,
		SendChatReq = 13,
		SendChatRsp = 14,
		SyncNtf = 99,
		SyncSnapShot = 101,
		SyncActiveData = 102,
		SyncSectionData = 103,
		SyncGameEnd = 104,
		SyncVoteResult = 105,
		SyncUseAbility = 106,
		SyncNewOverrideGrids = 107,
		SyncPickupItemChanges = 108,
		SyncTargetLockChanges = 109,
		SyncSkillItemData = 110,
		SyncAoeData = 111,
		SyncChat = 112,
		SyncDynamicBornCat = 113,
		SyncSkillItemEffect = 114,
	};
}
