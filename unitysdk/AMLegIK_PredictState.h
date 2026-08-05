#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

inline static constexpr unsigned int AMLegIK_PredictState_TypeDefinitionIndex = 72587;

struct alignas(4) AMLegIK_PredictState
{
	::UnityEngine::Vector3 currentFootprint; // 0x10
	::UnityEngine::Vector3 nextFootprint; // 0x1C
	::UnityEngine::Vector3 currentFootnormal; // 0x28
	::UnityEngine::Vector3 nextFootnormal; // 0x34
	::System::Single lastFrameCurrentFootHeight; // 0x40
	::System::Single lastFrameNextFootHeight; // 0x44
	::UnityEngine::Vector3 CompSpaceFootGroundPt; // 0x48
	::UnityEngine::Vector3 CompSpaceFootAirPt; // 0x54
	::System::Single distFraction; // 0x60
	::System::Boolean enablePIK; // 0x64
	::System::Boolean isMoving; // 0x65
	::System::Boolean enterGroundedZone; // 0x66
	::System::Boolean leaveGroundedZone; // 0x67
	::System::Boolean isBreakToGround; // 0x68
	::System::Boolean isLocking; // 0x69
	::System::Boolean enterLockZone; // 0x6A
	::System::Boolean leaveLockZone; // 0x6B
	::System::Boolean lastFrameState; // 0x6C
	::System::Single time; // 0x70
	::System::Single remainTime; // 0x74
	::System::Boolean kneeState; // 0x78
	::System::Boolean needRaycast; // 0x79
};
