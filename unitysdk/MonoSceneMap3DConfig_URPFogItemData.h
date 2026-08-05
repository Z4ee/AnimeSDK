#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

inline static constexpr unsigned int MonoSceneMap3DConfig_URPFogItemData_TypeDefinitionIndex = 50692;

struct alignas(4) MonoSceneMap3DConfig_URPFogItemData
{
	::UnityEngine::Vector3 Center; // 0x10
	::UnityEngine::Vector3 Extension; // 0x1C
	::System::Single Intensity; // 0x28
};
