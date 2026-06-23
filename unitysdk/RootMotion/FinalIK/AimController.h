#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RootMotion/FinalIK/AimController_AimJointType.h"
#include "unitysdk/RootMotion/FinalIK/AimController_AimLocalCoordinate.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RootMotion::FinalIK { class AimIK; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define ROOTMOTION_FINALIK_AIMCONTROLLER_APPLYMINDISTANCE_OFFSET UNITYSDK_OFFSET(0x1E062F50)
#define ROOTMOTION_FINALIK_AIMCONTROLLER_FIXEDLERP_OFFSET UNITYSDK_OFFSET(0x1E062F00)
#define ROOTMOTION_FINALIK_AIMCONTROLLER_GET_PIVOT_OFFSET UNITYSDK_OFFSET(0x1E060630)
#define ROOTMOTION_FINALIK_AIMCONTROLLER_INNERHANDLETARGETOFFSET_OFFSET UNITYSDK_OFFSET(0x1E060840)
#define ROOTMOTION_FINALIK_AIMCONTROLLER_INNERUPDATEAIMCOORDINATEOFFSET_OFFSET UNITYSDK_OFFSET(0x1E0608E0)
#define ROOTMOTION_FINALIK_AIMCONTROLLER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1E0610F0)
#define ROOTMOTION_FINALIK_AIMCONTROLLER_ROOTROTATION_OFFSET UNITYSDK_OFFSET(0x1E0630C0)
#define ROOTMOTION_FINALIK_AIMCONTROLLER_START_OFFSET UNITYSDK_OFFSET(0x1E060410)
#define ROOTMOTION_FINALIK_AIMCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E0635E0)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int AimController_TypeDefinitionIndex = 38316;

	class AimController : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RootMotion::FinalIK::AimIK* ik; // 0x18
		::System::Single weight; // 0x20
		::UnityEngine::Transform* target; // 0x28
		::System::Single timeScale; // 0x30
		::System::String* AttachPoint; // 0x38
		::System::Boolean useOverrideOffset; // 0x40
		::UnityEngine::Vector3 overrideOffset; // 0x44
		::System::Single targetSwitchSmoothTime; // 0x50
		::System::Single weightSmoothTime; // 0x54
		::System::Boolean smoothTurnTowardsTarget; // 0x58
		::System::Boolean enableRootRotation; // 0x59
		::RootMotion::FinalIK::AimController_AimJointType aimHingerType; // 0x5C
		::System::Single hingerYawSpeed; // 0x60
		::System::Single hingerPitchSpeed; // 0x64
		::System::Single hingerDistanceSpeed; // 0x68
		::System::Single maxRadiansDelta; // 0x6C
		::System::Single maxMagnitudeDelta; // 0x70
		::System::Single slerpSpeed; // 0x74
		::UnityEngine::Vector3 pivotOffsetFromRoot; // 0x78
		::System::Single minDistance; // 0x84
		::UnityEngine::Vector3 offset; // 0x88
		::System::Boolean UseAimCoordinateOffset; // 0x94
		::UnityEngine::Vector3 AimCoordinateRelativeOffset; // 0x98
		::System::Single maxRootAngle; // 0xA4
		::System::Boolean useAnimatedAimDirection; // 0xA8
		::UnityEngine::Vector3 animatedAimDirection; // 0xAC
		::System::String* tag; // 0xB8
		::UnityEngine::Transform* lastTarget; // 0xC0
		::System::Single switchWeight; // 0xC8
		::System::Single switchWeightV; // 0xCC
		::System::Single weightV; // 0xD0
		::UnityEngine::Vector3 lastPosition; // 0xD4
		::UnityEngine::Vector3 dir; // 0xE0
		::System::Boolean lastSmoothTowardsTarget; // 0xEC
		::UnityEngine::Vector3 _prevHingerAimPos; // 0xF0
		::RootMotion::FinalIK::AimController_AimLocalCoordinate _aimLocalCoordinate; // 0xFC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_AIMCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_AIMCONTROLLER_START_OFFSET))(this);
		}

		::UnityEngine::Vector3 InnerHandleTargetOffset()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_AIMCONTROLLER_INNERHANDLETARGETOFFSET_OFFSET))(this);
		}

		::UnityEngine::Vector3 InnerUpdateAimCoordinateOffset()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_AIMCONTROLLER_INNERUPDATEAIMCOORDINATEOFFSET_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_AIMCONTROLLER_LATEUPDATE_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_pivot()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_AIMCONTROLLER_GET_PIVOT_OFFSET))(this);
		}

		::System::Void ApplyMinDistance()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_AIMCONTROLLER_APPLYMINDISTANCE_OFFSET))(this);
		}

		::System::Void RootRotation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_AIMCONTROLLER_ROOTROTATION_OFFSET))(this);
		}

		::System::Single FixedLerp(::System::Single from, ::System::Single to, ::System::Single t, ::System::Single epsilon)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_AIMCONTROLLER_FIXEDLERP_OFFSET))(this, from, to, t, epsilon);
		}
	};
}
