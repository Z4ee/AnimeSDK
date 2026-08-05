#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Transform; }

inline static constexpr unsigned int OneBoneLayerRuntimeData_TypeDefinitionIndex = 86684;

struct alignas(8) OneBoneLayerRuntimeData
{
	::UnityEngine::Transform* MasterBoneRoot; // 0x10
	::UnityEngine::Transform* MasterBone; // 0x18
	::UnityEngine::Transform* MasterForwardBone; // 0x20
	::UnityEngine::Quaternion MasterBoneAnimposeLocalRot; // 0x28
	::UnityEngine::Vector3 MasterForwardBoneBindPos; // 0x38
	::Il2CppArray<::UnityEngine::Transform*>* DrivenBones; // 0x48
	::Il2CppArray<::UnityEngine::Vector3>* DirVec; // 0x50
};
