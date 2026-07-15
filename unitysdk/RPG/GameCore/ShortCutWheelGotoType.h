#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShortCutWheelGotoType_TypeDefinitionIndex = 10157;

	enum class ShortCutWheelGotoType : ::System::Int32
	{
		Unknown = 0,
		Message = 1,
		TeamBuff = 2,
		RogueBuff = 3,
		Tutorial = 4,
		FriendChat = 5,
		SpiritAtlas = 6,
		SpiritTeamEdit = 7,
		SpiritDetail = 8,
		RogueDLCBuff = 9,
		RogueDLCDimension = 10,
		StoryLine = 11,
		RogueMagicInventory = 13,
		RogueTournBuildRef = 14,
		Shop = 15,
		Map = 16,
		FateSupportPreview = 17,
		FiveDimSkillDetail = 18,
		RogueTournGodMode = 19,
		OnlinePlayRoomManagement = 4200,
		CakeCatchAtlas = 4201,
	};
}
