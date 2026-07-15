#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int BillboardShowType_TypeDefinitionIndex = 57776;

	enum class BillboardShowType : ::System::Int32
	{
		AllClose = 0,
		Text = 1,
		Warning = 2,
		Icon = 4,
		Bubble = 8,
		InwardBubbleTalk = 16,
		FloatingText = 32,
		Title = 64,
		HeartDial = 128,
		WayPoint = 256,
		SimpleName = 512,
		Emoji = 1024,
		FiveDimSidePuzzle = 2048,
		DiceCombat = 4096,
		CatGodBubble = 8192,
		OnlinePlayerName = 16384,
		CakeBubble = 32768,
		AllOpen = 65487,
		PhotoGraph = 2,
		PhotoGraphShowBubble = 10,
		Dreamland = 48,
	};
}
