#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::ChenLing
{
	inline static constexpr unsigned int CirticalTrackType_TypeDefinitionIndex = 73872;

	enum class CirticalTrackType : ::System::Int32
	{
		NoCirtical = 0,
		ChanceCritical = 1,
		CertainCritical = 2,
	};
}
