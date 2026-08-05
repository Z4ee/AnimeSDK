#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RBDDestruction
{
	inline static constexpr unsigned int RBDManager_FragmentTransform_TypeDefinitionIndex = 27074;

	struct alignas(4) RBDManager_FragmentTransform
	{
		::UnityEngine::Vector3 fragPivot; // 0x10
		::UnityEngine::Quaternion quat; // 0x1C
		::System::Single scale; // 0x2C
	};
}
