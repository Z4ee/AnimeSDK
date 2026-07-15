#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoAnimatorDefaultValueConfigure_EDefaultValueFlag.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Transform; }

namespace RPG::Client
{
	inline static constexpr unsigned int MonoAnimatorDefaultValueConfigure_DefaultValueConfigure_TypeDefinitionIndex = 65466;

	struct alignas(8) MonoAnimatorDefaultValueConfigure_DefaultValueConfigure
	{
		::UnityEngine::Transform* transform; // 0x10
		::RPG::Client::MonoAnimatorDefaultValueConfigure_EDefaultValueFlag flags; // 0x18
		::UnityEngine::Vector3 localPosition; // 0x1C
		::UnityEngine::Quaternion localRotation; // 0x28
		::UnityEngine::Vector3 localScale; // 0x38
	};
}
