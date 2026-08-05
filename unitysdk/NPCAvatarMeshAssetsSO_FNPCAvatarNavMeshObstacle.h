#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

inline static constexpr unsigned int NPCAvatarMeshAssetsSO_FNPCAvatarNavMeshObstacle_TypeDefinitionIndex = 55903;

struct alignas(4) NPCAvatarMeshAssetsSO_FNPCAvatarNavMeshObstacle
{
	::UnityEngine::Vector3 center; // 0x10
	::System::Single radius; // 0x1C
	::System::Single height; // 0x20
	::System::Single carvingMoveThreshold; // 0x24
	::System::Single carvingTimeToStationary; // 0x28
	::System::Boolean carveOnlyStationary; // 0x2C
	::System::Boolean overrideArea; // 0x2D
};
