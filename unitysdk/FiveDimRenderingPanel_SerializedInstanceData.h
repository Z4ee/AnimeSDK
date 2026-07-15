#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

inline static constexpr unsigned int FiveDimRenderingPanel_SerializedInstanceData_TypeDefinitionIndex = 45343;

struct alignas(4) FiveDimRenderingPanel_SerializedInstanceData
{
	::System::Int32 prototypeIndex; // 0x10
	::UnityEngine::Vector3 localPosition; // 0x14
	::UnityEngine::Quaternion localRotation; // 0x20
	::UnityEngine::Vector3 localScale; // 0x30
};
