#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace RPG::Client
{
	inline static constexpr unsigned int LinearModuleRendererBehavior_ItemData_TypeDefinitionIndex = 67714;

	struct alignas(4) LinearModuleRendererBehavior_ItemData
	{
		::System::Int32 GroupID; // 0x10
		::UnityEngine::Vector3 Pos; // 0x14
		::UnityEngine::Quaternion Rotation; // 0x20
		::UnityEngine::Vector3 Scale; // 0x30
		::UnityEngine::Vector4 CustomData; // 0x3C
	};
}
