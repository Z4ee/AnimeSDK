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

#define ROOTMOTION_FINALIK_GROUNDINGTHREAD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x85E4450)
#define ROOTMOTION_FINALIK_GROUNDINGTHREAD_FLATTEN_OFFSET UNITYSDK_OFFSET(0x85E6960)
#define ROOTMOTION_FINALIK_GROUNDINGTHREAD_GETROOTHIT_OFFSET UNITYSDK_OFFSET(0x85E4490)
#define ROOTMOTION_FINALIK_GROUNDINGTHREAD_GETVERTICALOFFSET_OFFSET UNITYSDK_OFFSET(0x85E6BF0)
#define ROOTMOTION_FINALIK_GROUNDINGTHREAD_GET_ROOTGROUNDED_OFFSET UNITYSDK_OFFSET(0x85E4430)
#define ROOTMOTION_FINALIK_GROUNDINGTHREAD_GET_UP_OFFSET UNITYSDK_OFFSET(0x85E4870)
#define ROOTMOTION_FINALIK_GROUNDINGTHREAD_GET_USEROOTROTATION_OFFSET UNITYSDK_OFFSET(0x85E65E0)
#define ROOTMOTION_FINALIK_GROUNDINGTHREAD_UPDATE_OFFSET UNITYSDK_OFFSET(0x85DBD20)
#define ROOTMOTION_FINALIK_GROUNDINGTHREAD__CTOR_OFFSET UNITYSDK_OFFSET(0x85D68B0)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int GroundingThread_TypeDefinitionIndex = 35188;

	class GroundingThread : public ::System::Object
	{
	public:
		::Il2CppArray<::RootMotion::FinalIK::GroundingThread_Leg>* legs; // 0x10
		::RootMotion::IKJob::IKTransformRef root; // 0x18
		::RootMotion::FinalIK::GroundingThread_Pelvis pelvis; // 0x28
		::System::Single heightOffset; // 0x58
		::UnityEngine::Vector3 lastRootPosition; // 0x5C
		::RootMotion::FinalIK::GroundRaycastHit rootHit; // 0x68
		::System::Boolean stayOriginIfNoGround; // 0x8C
		::System::Boolean useToeBone; // 0x8D
		::System::Boolean isGrounded; // 0x8E
		::System::Boolean IsRootMove; // 0x8F
		::System::Single IKRotationWeight; // 0x90
		::System::Single maxFootRotationAngle; // 0x94
		::UnityEngine::Quaternion deltaRootRotation; // 0x98
		::System::Single IKPositionWeight; // 0xA8
		::System::Single footSpeed; // 0xAC
		::UnityEngine::Quaternion lastRootRotation; // 0xB0
		::System::Single rootSphereCastRadius; // 0xC0
		::System::Single footRotationSpeed; // 0xC4
		::System::Single footRadius; // 0xC8
		::System::Single prediction; // 0xCC
		::UnityEngine::LayerMask layers; // 0xD0
		::System::Single pelvisDamper; // 0xD4
		::System::Single lowerPelvisWeight; // 0xD8
		::RootMotion::NativeCurve maxFootUpperRotateRatioCurve; // 0xE0
		::System::Boolean rotateSolver; // 0xF8
		::System::Boolean bUseStepUp; // 0xF9
		::System::Single maxStep; // 0xFC
		::System::Single liftPelvisWeight; // 0x100
		::System::Single pelvisSpeed; // 0x104
		::UnityEngine::Vector3 deltaRootPosition; // 0x108
		::System::Single maxFootRotationRollAngle; // 0x114

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
