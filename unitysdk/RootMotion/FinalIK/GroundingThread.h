#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RootMotion/FinalIK/GroundRaycastHit.h"
#include "unitysdk/RootMotion/FinalIK/GroundingThread_Leg.h"
#include "unitysdk/RootMotion/FinalIK/GroundingThread_Pelvis.h"
#include "unitysdk/RootMotion/IKJob/IKTransformRef.h"
#include "unitysdk/RootMotion/NativeCurve.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define ROOTMOTION_FINALIK_GROUNDINGTHREAD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8E199F0)
#define ROOTMOTION_FINALIK_GROUNDINGTHREAD_FLATTEN_OFFSET UNITYSDK_OFFSET(0x8E1B9E0)
#define ROOTMOTION_FINALIK_GROUNDINGTHREAD_GETROOTHIT_OFFSET UNITYSDK_OFFSET(0x8E19A30)
#define ROOTMOTION_FINALIK_GROUNDINGTHREAD_GETVERTICALOFFSET_OFFSET UNITYSDK_OFFSET(0x8E1BB60)
#define ROOTMOTION_FINALIK_GROUNDINGTHREAD_GET_ROOTGROUNDED_OFFSET UNITYSDK_OFFSET(0x8E199D0)
#define ROOTMOTION_FINALIK_GROUNDINGTHREAD_GET_UP_OFFSET UNITYSDK_OFFSET(0x8E19F30)
#define ROOTMOTION_FINALIK_GROUNDINGTHREAD_GET_USEROOTROTATION_OFFSET UNITYSDK_OFFSET(0x8E1B950)
#define ROOTMOTION_FINALIK_GROUNDINGTHREAD_UPDATE_OFFSET UNITYSDK_OFFSET(0x8E11BB0)
#define ROOTMOTION_FINALIK_GROUNDINGTHREAD__CTOR_OFFSET UNITYSDK_OFFSET(0x8E0CA00)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int GroundingThread_TypeDefinitionIndex = 41014;

	class GroundingThread : public ::System::Object
	{
	public:
		::RootMotion::FinalIK::GroundingThread_Pelvis pelvis; // 0x10
		::RootMotion::IKJob::IKTransformRef root; // 0x40
		::Il2CppArray<::RootMotion::FinalIK::GroundingThread_Leg>* legs; // 0x50
		::System::Single rootSphereCastRadius; // 0x58
		::System::Single liftPelvisWeight; // 0x5C
		::UnityEngine::Vector3 deltaRootPosition; // 0x60
		::UnityEngine::Quaternion lastRootRotation; // 0x6C
		::System::Single IKRotationWeight; // 0x7C
		::System::Single footRadius; // 0x80
		::System::Single pelvisDamper; // 0x84
		::System::Single lowerPelvisWeight; // 0x88
		::System::Single footSpeed; // 0x8C
		::System::Boolean rotateSolver; // 0x90
		::System::Boolean bUseStepUp; // 0x91
		::UnityEngine::Vector3 lastRootPosition; // 0x94
		::System::Single pelvisSpeed; // 0xA0
		::System::Single maxFootRotationAngle; // 0xA4
		::System::Single maxStep; // 0xA8
		::UnityEngine::Quaternion deltaRootRotation; // 0xAC
		::System::Single prediction; // 0xBC
		::RootMotion::FinalIK::GroundRaycastHit rootHit; // 0xC0
		::System::Single footRotationSpeed; // 0xE4
		::System::Single maxFootRotationRollAngle; // 0xE8
		::System::Boolean useToeBone; // 0xEC
		::System::Boolean IsRootMove; // 0xED
		::System::Boolean isGrounded; // 0xEE
		::System::Boolean stayOriginIfNoGround; // 0xEF
		::System::Single heightOffset; // 0xF0
		::RootMotion::NativeCurve maxFootUpperRotateRatioCurve; // 0xF8
		::UnityEngine::LayerMask layers; // 0x110
		::System::Single IKPositionWeight; // 0x114

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDINGTHREAD__CTOR_OFFSET))(this);
		}

		::System::Boolean get_rootGrounded()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDINGTHREAD_GET_ROOTGROUNDED_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDINGTHREAD_DISPOSE_OFFSET))(this);
		}

		::RootMotion::FinalIK::GroundRaycastHit GetRootHit(::System::Single maxDistanceMlp)
		{
			return ((::RootMotion::FinalIK::GroundRaycastHit(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDINGTHREAD_GETROOTHIT_OFFSET))(this, maxDistanceMlp);
		}

		::System::Void Update(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDINGTHREAD_UPDATE_OFFSET))(this, deltaTime);
		}

		::UnityEngine::Vector3 get_up()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDINGTHREAD_GET_UP_OFFSET))(this);
		}

		::UnityEngine::Vector3 Flatten(::UnityEngine::Vector3 v)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDINGTHREAD_FLATTEN_OFFSET))(this, v);
		}

		::System::Single GetVerticalOffset(::UnityEngine::Vector3 p1, ::UnityEngine::Vector3 p2)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDINGTHREAD_GETVERTICALOFFSET_OFFSET))(this, p1, p2);
		}

		::System::Boolean get_useRootRotation()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDINGTHREAD_GET_USEROOTROTATION_OFFSET))(this);
		}
	};
}
