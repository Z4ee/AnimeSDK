#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Transform; }

namespace RPG::Client
{
	inline static constexpr unsigned int MonoBodyControlIK_LimbData_TypeDefinitionIndex = 65483;

	struct alignas(8) MonoBodyControlIK_LimbData
	{
		::UnityEngine::Transform* Upper; // 0x10
		::UnityEngine::Transform* Middle; // 0x18
		::UnityEngine::Transform* End; // 0x20
		::UnityEngine::Vector3 SavedEndPosition; // 0x28
		::UnityEngine::Quaternion SavedEndRotation; // 0x34
	};
}
