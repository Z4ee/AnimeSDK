#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

inline static constexpr unsigned int AMLegIK_FootLockInfo_TypeDefinitionIndex = 60610;

struct alignas(4) AMLegIK_FootLockInfo
{
	::UnityEngine::Vector3 LockGoal; // 0x10
	::UnityEngine::Vector3 LocalPos; // 0x1C
	::UnityEngine::Vector3 LocalDiff; // 0x28
	::UnityEngine::Vector3 WorldPos; // 0x34
	::UnityEngine::Vector3 LastFrameOriginW; // 0x40
	::System::Boolean LockState; // 0x4C
	::System::Boolean IsSetLockGoal; // 0x4D
};
