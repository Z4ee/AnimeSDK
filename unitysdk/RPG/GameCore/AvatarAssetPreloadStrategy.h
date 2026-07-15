#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarAssetPreloadStrategy_TypeDefinitionIndex = 15822;

	enum class AvatarAssetPreloadStrategy : ::System::UInt16
	{
		None = 0x0,
		SilenceLoad = 0x1,
		PreloadOnEnterMaze = 0x2,
		UnloadOnExitMaze = 0x4,
		PreloadOnEnterBattle = 0x8,
		UnloadOnExitBattle = 0x10,
		PreloadBeforeUse = 0x20,
		UnloadAfterUse = 0x40,
		UnloadOnPlayVideoInMaze = 0x80,
		UnloadOnPlayVideoInBattle = 0x100,
		PreloadOnEnterBattleByConfig = 0x200,
		OnlyEffectOnTeamLeader = 0x400,
	};
}
