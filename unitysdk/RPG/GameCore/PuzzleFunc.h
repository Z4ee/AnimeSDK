#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int PuzzleFunc_TypeDefinitionIndex = 10216;

	enum class PuzzleFunc : ::System::Int32
	{
		Probe = 0,
		Info = 1,
		SpecialVision = 2,
		RemoteControlRelease = 3,
		Unknown = 4,
		TriggerCustomString = 5,
		Identify = 6,
		Match7thGuessTheSilhouette = 7,
		SpecialVisionFindSneakMonster = 8,
		SpecialVisionFindDreamlandNPC = 9,
		PutMapPoseSwitcher = 10,
		Drones = 11,
		IsometricView = 12,
		WolfBro = 13,
		QTECatchGhost = 14,
	};
}
