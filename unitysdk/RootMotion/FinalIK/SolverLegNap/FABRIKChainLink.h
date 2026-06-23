#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RootMotion::FinalIK::SolverLegNap
{
	inline static constexpr unsigned int FABRIKChainLink_TypeDefinitionIndex = 38261;

	struct alignas(4) FABRIKChainLink
	{
		::System::Single length; // 0x10
		::UnityEngine::Vector3 position; // 0x14
	};
}
