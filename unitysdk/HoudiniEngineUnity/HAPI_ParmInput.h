#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class GameObject; }

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HAPI_ParmInput_TypeDefinitionIndex = 43593;

	struct alignas(8) HAPI_ParmInput
	{
		::System::Boolean isAsset; // 0x10
		::UnityEngine::GameObject* inputObject; // 0x18
		::UnityEngine::GameObject* newInputObject; // 0x20
		::System::Int32 inputNodeId; // 0x28
		::System::Int32 inputNodeUniqueId; // 0x2C
	};
}
