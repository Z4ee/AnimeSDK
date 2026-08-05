#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Coffee::UIExtensions
{
	inline static constexpr unsigned int UIParticleRenderer_JobTransformSnapshot_TypeDefinitionIndex = 34868;

	struct alignas(4) UIParticleRenderer_JobTransformSnapshot
	{
		::UnityEngine::Vector3 position; // 0x10
		::UnityEngine::Quaternion rotation; // 0x1C
		::UnityEngine::Vector3 localScale; // 0x2C
		::UnityEngine::Matrix4x4 localToWorldMatrix; // 0x38
		::UnityEngine::Matrix4x4 worldToLocalMatrix; // 0x78
	};
}
