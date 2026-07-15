#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGameShare
{
	inline static constexpr unsigned int MsgRetcode_TypeDefinitionIndex = 35405;

	enum class MsgRetcode : ::System::Int32
	{
		Ok = 0,
		Failed = 100000,
		RoomNotExist = 100001,
		InvalidMsgType = 100002,
		NoRspFromCoreInstance = 100003,
		PlayerNotExist = 100004,
		PlayerIsRobot = 100005,
		PlayerNotOnline = 100006,
		ConfigError = 100007,
		RoomWaitClean = 100008,
		CakeRaceLevelStateMismatch = 100101,
		CakeRaceBetAlready = 100102,
		CakeRaceBetWrongCoin = 100103,
		CakeRaceBetWrongCat = 100104,
		CakeRaceVoteConfirmedAlready = 100105,
		CakeRaceVoteNotConfirmedYet = 100106,
		CakeRaceVoteWrongEffect = 100107,
		CakeRaceSkillCd = 100108,
		CakeRaceAbilityErr = 100109,
		CakeRaceTargetNotExist = 100110,
		CakeRaceItemNotExist = 100111,
		CakeRaceSendChatCd = 100112,
		CakeRaceChatInvalid = 100113,
	};
}
