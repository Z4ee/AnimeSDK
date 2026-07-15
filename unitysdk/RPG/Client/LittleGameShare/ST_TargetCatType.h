#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGameShare
{
	inline static constexpr unsigned int ST_TargetCatType_TypeDefinitionIndex = 10006;

	enum class ST_TargetCatType : ::System::Int32
	{
		SupportCat = 0,
		RankCat = 1,
		BeforeSupportCat = 2,
	};
}
