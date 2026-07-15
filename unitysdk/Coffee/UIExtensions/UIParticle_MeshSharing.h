#pragma once
#include "unitysdk/unitysdk.h"

namespace Coffee::UIExtensions
{
	inline static constexpr unsigned int UIParticle_MeshSharing_TypeDefinitionIndex = 42349;

	enum class UIParticle_MeshSharing : ::System::Int32
	{
		None = 0,
		Auto = 1,
		Primary = 2,
		PrimarySimulator = 3,
		Replica = 4,
	};
}
