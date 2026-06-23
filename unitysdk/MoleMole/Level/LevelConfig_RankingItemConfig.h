#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Level/LevelConfig_RankingItemConfigShowType.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace MoleMole::Level
{
	inline static constexpr unsigned int LevelConfig_RankingItemConfig_TypeDefinitionIndex = 47022;

	struct alignas(8) LevelConfig_RankingItemConfig
	{
		::MoleMole::Level::LevelConfig_RankingItemConfigShowType showType; // 0x10
		::Il2CppArray<::System::Int32>* applyType; // 0x18
		::System::String* textID1; // 0x20
		::System::String* textID2; // 0x28
	};
}
