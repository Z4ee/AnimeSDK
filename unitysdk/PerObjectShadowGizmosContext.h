#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

inline static constexpr unsigned int PerObjectShadowGizmosContext_TypeDefinitionIndex = 27382;

struct alignas(4) PerObjectShadowGizmosContext
{
	::UnityEngine::Vector3 extentWS; // 0x10
	::UnityEngine::Vector3 centerWS; // 0x1C
	::UnityEngine::Vector3 xAxis; // 0x28
	::UnityEngine::Vector3 yAxis; // 0x34
	::UnityEngine::Vector3 zAxis; // 0x40
	::UnityEngine::Vector3 sizeLS; // 0x4C
	::UnityEngine::Matrix4x4 localToWorldMatrix; // 0x58
	::UnityEngine::Matrix4x4 worldToUvMatrix; // 0x98
	::UnityEngine::Vector4 cullingSphere; // 0xD8
};
