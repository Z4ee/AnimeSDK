#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace EnviromentSystem
{
	inline static constexpr unsigned int WindTriggerBufferData_TypeDefinitionIndex = 47775;

	struct alignas(4) WindTriggerBufferData
	{
		::UnityEngine::Matrix4x4 WorldToLocalMatrix; // 0x10
		::System::Single Intensity; // 0x50
		::System::Single RadiusSoftness; // 0x54
		::System::Single RangeSofness; // 0x58
		::UnityEngine::Vector3 ForwardVec; // 0x5C
	};
}
