#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

inline static constexpr unsigned int BlendPoseDeltaData_TypeDefinitionIndex = 90849;

struct alignas(8) BlendPoseDeltaData
{
	::UnityEngine::Quaternion MasterBoneRotDelta; // 0x10
	::Il2CppArray<::UnityEngine::Vector3>* DrivenBonePosDelta; // 0x20
	::Il2CppArray<::UnityEngine::Quaternion>* DrivenBoneRotDelta; // 0x28
	::Il2CppArray<::UnityEngine::Vector3>* DrivenBoneScaleDelta; // 0x30
};
