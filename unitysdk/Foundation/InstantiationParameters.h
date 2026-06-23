#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Transform; }

#define FOUNDATION_INSTANTIATIONPARAMETERS__CTOR_1_OFFSET UNITYSDK_OFFSET(0xA462A0)
#define FOUNDATION_INSTANTIATIONPARAMETERS__CTOR_OFFSET UNITYSDK_OFFSET(0xA46270)

namespace Foundation
{
	inline static constexpr unsigned int InstantiationParameters_TypeDefinitionIndex = 7810;

	struct alignas(8) InstantiationParameters
	{
		::UnityEngine::Vector3 Position; // 0x10
		::UnityEngine::Quaternion Rotation; // 0x1C
		::UnityEngine::Transform* Parent; // 0x30
		::System::Boolean InstantiateInWorldPosition; // 0x38
		::System::Boolean SetPositionRotation; // 0x39
		::System::Boolean ForbiddenPool; // 0x3A

		::System::Void _ctor(::UnityEngine::Transform* parent, ::System::Boolean instantiateInWorldSpace, ::System::Boolean forbiddenPool)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_INSTANTIATIONPARAMETERS__CTOR_OFFSET))(this, parent, instantiateInWorldSpace, forbiddenPool);
		}

		::System::Void _ctor_1(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::UnityEngine::Transform* parent, ::System::Boolean forbiddenPool)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_INSTANTIATIONPARAMETERS__CTOR_1_OFFSET))(this, position, rotation, parent, forbiddenPool);
		}
	};
}
