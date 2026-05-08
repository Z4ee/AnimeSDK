#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIFashionStore3DModelController_CameraInfo_TypeDefinitionIndex = 74009;

	struct alignas(4) UIFashionStore3DModelController_CameraInfo
	{
		::UnityEngine::Vector3 LocalPos; // 0x10
		::UnityEngine::Quaternion LocalRot; // 0x1C
		::System::Single Fov; // 0x2C
		::System::Single NearClipPlane; // 0x30
		::System::Single FarClipPlane; // 0x34
	};
}
