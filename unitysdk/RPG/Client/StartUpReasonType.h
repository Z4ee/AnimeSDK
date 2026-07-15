#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int StartUpReasonType_TypeDefinitionIndex = 66369;

	enum class StartUpReasonType : ::System::Int32
	{
		eInit = 0,
		eReloadStartUpAsset = 1,
	};
}
