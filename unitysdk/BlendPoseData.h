#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

inline static constexpr unsigned int BlendPoseData_TypeDefinitionIndex = 51698;

struct alignas(8) BlendPoseData
{
	::UnityEngine::Quaternion MasterBoneRot; // 0x10
	::Il2CppArray<::UnityEngine::Vector3>* DrivenBonePos; // 0x20
	::Il2CppArray<::UnityEngine::Quaternion>* DrivenBoneRot; // 0x28
	::Il2CppArray<::UnityEngine::Vector3>* DrivenBoneScale; // 0x30
};
