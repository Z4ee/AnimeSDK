#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::BAT
{
	inline static constexpr unsigned int BATRendererBehavior_CullingMode_TypeDefinitionIndex = 70267;

	enum class BATRendererBehavior_CullingMode : ::System::Int32
	{
		None = 0,
		FrustumCulling = 1,
		FrustumHizCulling = 2,
	};
}
