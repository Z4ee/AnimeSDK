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

#define ROOTMOTION_FINALIK_GROUNDINGTHREAD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA267F00)
#define ROOTMOTION_FINALIK_GROUNDINGTHREAD_FLATTEN_OFFSET UNITYSDK_OFFSET(0xA26A5A0)
#define ROOTMOTION_FINALIK_GROUNDINGTHREAD_GETROOTHIT_OFFSET UNITYSDK_OFFSET(0xA267F70)
#define ROOTMOTION_FINALIK_GROUNDINGTHREAD_GETVERTICALOFFSET_OFFSET UNITYSDK_OFFSET(0xA26A830)
#define ROOTMOTION_FINALIK_GROUNDINGTHREAD_GET_ROOTGROUNDED_OFFSET UNITYSDK_OFFSET(0xA267EE0)
#define ROOTMOTION_FINALIK_GROUNDINGTHREAD_GET_UP_OFFSET UNITYSDK_OFFSET(0xA268340)
#define ROOTMOTION_FINALIK_GROUNDINGTHREAD_GET_USEROOTROTATION_OFFSET UNITYSDK_OFFSET(0xA26A220)
#define ROOTMOTION_FINALIK_GROUNDINGTHREAD_UPDATE_OFFSET UNITYSDK_OFFSET(0xA25F320)
#define ROOTMOTION_FINALIK_GROUNDINGTHREAD__CTOR_OFFSET UNITYSDK_OFFSET(0xA25A1E0)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int GroundingThread_TypeDefinitionIndex = 41817;

	class GroundingThread : public ::System::Object
	{
	public:
		::RootMotion::FinalIK::GroundingThread_Pelvis pelvis; // 0x10
		::RootMotion::IKJob::IKTransformRef root; // 0x40
		::Il2CppArray<::RootMotion::FinalIK::GroundingThread_Leg>* legs; // 0x50
		::System::Single pelvisDamper; // 0x58
		::System::Single footRadius; // 0x5C
		::System::Single footSpeed; // 0x60
		::System::Single maxFootRotationAngle; // 0x64
		::System::Single heightOffset; // 0x68
		::System::Single lowerPelvisWeight; // 0x6C
		::System::Single prediction; // 0x70
		::System::Boolean isGrounded; // 0x74
		::System::Boolean stayOriginIfNoGround; // 0x75
		::UnityEngine::LayerMask layers; // 0x78
		::UnityEngine::Vector3 lastRootPosition; // 0x7C
		::UnityEngine::Vector3 deltaRootPosition; // 0x88
		::System::Single rootSphereCastRadius; // 0x94
		::System::Single footRotationSpeed; // 0x98
		::UnityEngine::Quaternion lastRootRotation; // 0x9C
		::System::Single maxFootRotationRollAngle; // 0xAC
		::System::Single liftPelvisWeight; // 0xB0
		::RootMotion::FinalIK::GroundRaycastHit rootHit; // 0xB4
		::UnityEngine::Quaternion deltaRootRotation; // 0xD8
		::System::Single IKRotationWeight; // 0xE8
		::System::Boolean IsRootMove; // 0xEC
		::System::Boolean bUseStepUp; // 0xED
		::System::Boolean rotateSolver; // 0xEE
		::System::Boolean useToeBone; // 0xEF
		::System::Single pelvisSpeed; // 0xF0
		::System::Single IKPositionWeight; // 0xF4
		::System::Single maxStep; // 0xF8
		::RootMotion::NativeCurve maxFootUpperRotateRatioCurve; // 0x100

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

		::RootMotion::FinalIK::GroundRaycastHit GetRootHit(::System::Single a1)
		{
			return ((::RootMotion::FinalIK::GroundRaycastHit(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDINGTHREAD_GETROOTHIT_OFFSET))(this, a1);
		}

		::System::Void Update(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDINGTHREAD_UPDATE_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_up()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDINGTHREAD_GET_UP_OFFSET))(this);
		}

		::UnityEngine::Vector3 Flatten(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDINGTHREAD_FLATTEN_OFFSET))(this, a1);
		}

		::System::Single GetVerticalOffset(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDINGTHREAD_GETVERTICALOFFSET_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_useRootRotation()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDINGTHREAD_GET_USEROOTROTATION_OFFSET))(this);
		}
	};
}
