#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Transform; }

#define MOLEMOLE_MONOUIGYRO_MANIPULATEDTRANSFORM__CTOR_OFFSET UNITYSDK_OFFSET(0x1916FA90)

namespace MoleMole
{
	inline static constexpr unsigned int MonoUIGyro_ManipulatedTransform_TypeDefinitionIndex = 68992;

	class MonoUIGyro_ManipulatedTransform : public ::System::Object
	{
	public:
		::UnityEngine::Transform* trans; // 0x10
		::UnityEngine::Vector3 startPos; // 0x18
		::UnityEngine::Vector3 velocity; // 0x24
		::System::Single rangeRatio; // 0x30
		::System::Single speedRatio; // 0x34

		::System::Void _ctor(::UnityEngine::Transform* trans, ::System::Single rangeRatio, ::System::Single speedRatio)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIGYRO_MANIPULATEDTRANSFORM__CTOR_OFFSET))(this, trans, rangeRatio, speedRatio);
		}
	};
}
