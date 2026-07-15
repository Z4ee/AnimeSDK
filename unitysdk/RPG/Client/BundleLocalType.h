#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int BundleLocalType_TypeDefinitionIndex = 39217;

	enum class BundleLocalType : ::System::Int32
	{
		eAsset = 0,
		eAudio = 1,
		eVideo = 2,
		eDesignData = 3,
		eLua = 4,
	};
}
