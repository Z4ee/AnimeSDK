#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int BattleAssetPreload_RecorderState_TypeDefinitionIndex = 57016;

	enum class BattleAssetPreload_RecorderState : ::System::Int32
	{
		None = 0,
		PreRecordGroup = 1,
		PreRecordItem = 2,
		Loading = 3,
		Record = 4,
		Unload = 5,
		PostRecordItem = 6,
		PostRecordGroup = 7,
		Finish = 8,
	};
}
