#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int LocalVerifyAccuracyStatusCode_TypeDefinitionIndex = 61325;

	enum class LocalVerifyAccuracyStatusCode : ::System::Int32
	{
		eSuccess = 0,
		eErrorAssetInPak = 1,
		eErrorAssetDownload = 2,
	};
}
