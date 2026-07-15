#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int MazeBuffPoolType_TypeDefinitionIndex = 13508;

	enum class MazeBuffPoolType : ::System::Int32
	{
		None = 0,
		CharAtk = 1,
		CharDef = 2,
		CharSpe = 3,
		CharPassive = 4,
		CharGlobal = 5,
		ItemAtk = 11,
		ItemDef = 12,
		ItemSpe = 13,
		WorldBuff = 31,
		MonsterDebuff = 21,
	};
}
