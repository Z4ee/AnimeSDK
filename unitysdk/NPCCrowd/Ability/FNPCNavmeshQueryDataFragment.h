#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Experimental/AI/PathQueryStatus.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int FNPCNavmeshQueryDataFragment_TypeDefinitionIndex = 65558;

	struct alignas(4) FNPCNavmeshQueryDataFragment
	{
		::UnityEngine::Vector3 start; // 0x10
		::UnityEngine::Vector3 end; // 0x1C
		::UnityEngine::Vector3 endExtent; // 0x28
		::UnityEngine::Experimental::AI::PathQueryStatus status; // 0x34
		::System::Int32 polySize; // 0x38
	};
}
