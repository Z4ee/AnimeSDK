#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Transform; }

#define MOLEMOLE_MONOUIGYRO_MANIPULATEDTRANSFORM__CTOR_OFFSET UNITYSDK_OFFSET(0x10E48150)

namespace MoleMole
{
	inline static constexpr unsigned int MonoUIGyro_ManipulatedTransform_TypeDefinitionIndex = 64179;

	class MonoUIGyro_ManipulatedTransform : public ::System::Object
	{
	public:
		::UnityEngine::Transform* trans; // 0x10
		::System::Single rangeRatio; // 0x18
		::UnityEngine::Vector3 velocity; // 0x1C
		::System::Single speedRatio; // 0x28
		::UnityEngine::Vector3 startPos; // 0x2C

		::System::Void _ctor(::UnityEngine::Transform* trans, ::System::Single rangeRatio, ::System::Single speedRatio)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIGYRO_MANIPULATEDTRANSFORM__CTOR_OFFSET))(this, trans, rangeRatio, speedRatio);
		}
	};
}
