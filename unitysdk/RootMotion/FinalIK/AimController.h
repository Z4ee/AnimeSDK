#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RootMotion/FinalIK/AimController_AimJointType.h"
#include "unitysdk/RootMotion/FinalIK/AimController_AimLocalCoordinate.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RootMotion::FinalIK { class AimIK; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Transform; }

#define ROOTMOTION_FINALIK_AIMCONTROLLER_APPLYMINDISTANCE_OFFSET UNITYSDK_OFFSET(0x1F423740)
#define ROOTMOTION_FINALIK_AIMCONTROLLER_FIXEDLERP_OFFSET UNITYSDK_OFFSET(0x1F4236F0)
#define ROOTMOTION_FINALIK_AIMCONTROLLER_GETBLENDCURVE_OFFSET UNITYSDK_OFFSET(0x1F420A30)
#define ROOTMOTION_FINALIK_AIMCONTROLLER_GET_PIVOT_OFFSET UNITYSDK_OFFSET(0x1F420D50)
#define ROOTMOTION_FINALIK_AIMCONTROLLER_INNERHANDLETARGETOFFSET_OFFSET UNITYSDK_OFFSET(0x1F420F70)
#define ROOTMOTION_FINALIK_AIMCONTROLLER_INNERUPDATEAIMCOORDINATEOFFSET_OFFSET UNITYSDK_OFFSET(0x1F421010)
#define ROOTMOTION_FINALIK_AIMCONTROLLER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1F4217F0)
#define ROOTMOTION_FINALIK_AIMCONTROLLER_ROOTROTATION_OFFSET UNITYSDK_OFFSET(0x1F423810)
#define ROOTMOTION_FINALIK_AIMCONTROLLER_START_OFFSET UNITYSDK_OFFSET(0x1F420B30)
#define ROOTMOTION_FINALIK_AIMCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F423EC0)
#define ROOTMOTION_FINALIK_AIMCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1F423D40)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int AimController_TypeDefinitionIndex = 38933;

	class AimController : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::UnityEngine::AnimationCurve** StaticGet__defaultLinearCurve()
		{
			return (::UnityEngine::AnimationCurve**)Il2CppClass::FromTypeDefinitionIndex(AimController_TypeDefinitionIndex)->GetStaticField(0x2A830);
		}
		static ::System::Func_2<::System::String*, ::UnityEngine::AnimationCurve*>** StaticGet_CurveResolver()
		{
			return (::System::Func_2<::System::String*, ::UnityEngine::AnimationCurve*>**)Il2CppClass::FromTypeDefinitionIndex(AimController_TypeDefinitionIndex)->GetStaticField(0x2A838);
		}
		::RootMotion::FinalIK::AimIK* ik; // 0x18
		::System::Single weight; // 0x20
		::UnityEngine::Transform* target; // 0x28
		::System::Single timeScale; // 0x30
		::System::String* AttachPoint; // 0x38
		::System::Boolean useOverrideOffset; // 0x40
		::UnityEngine::Vector3 overrideOffset; // 0x44
		::System::Single targetSwitchSmoothTime; // 0x50
		::System::Single blendInSmoothTime; // 0x54
		::System::String* blendInCurveKey; // 0x58
		::System::Single blendOutSmoothTime; // 0x60
		::System::String* blendOutCurveKey; // 0x68
		::System::Boolean smoothTurnTowardsTarget; // 0x70
		::System::Boolean enableRootRotation; // 0x71
		::RootMotion::FinalIK::AimController_AimJointType aimHingerType; // 0x74
		::System::Single hingerYawSpeed; // 0x78
		::System::Single hingerPitchSpeed; // 0x7C
		::System::Single hingerDistanceSpeed; // 0x80
		::System::Single maxRadiansDelta; // 0x84
		::System::Single maxMagnitudeDelta; // 0x88
		::System::Single slerpSpeed; // 0x8C
		::UnityEngine::Vector3 pivotOffsetFromRoot; // 0x90
		::System::Single minDistance; // 0x9C
		::UnityEngine::Vector3 offset; // 0xA0
		::System::Boolean UseAimCoordinateOffset; // 0xAC
		::UnityEngine::Vector3 AimCoordinateRelativeOffset; // 0xB0
		::System::Single maxRootAngle; // 0xBC
		::System::Boolean useAnimatedAimDirection; // 0xC0
		::UnityEngine::Vector3 animatedAimDirection; // 0xC4
		::System::String* tag; // 0xD0
		::UnityEngine::Transform* lastTarget; // 0xD8
		::System::Single switchWeight; // 0xE0
		::System::Single switchWeightV; // 0xE4
		::System::Single _blendTimer; // 0xE8
		::System::Single _blendStartWeight; // 0xEC
		::System::Boolean _lastBlendIn; // 0xF0
		::UnityEngine::AnimationCurve* _cachedBlendInCurve; // 0xF8
		::UnityEngine::AnimationCurve* _cachedBlendOutCurve; // 0x100
		::System::String* _cachedBlendInKey; // 0x108
		::System::String* _cachedBlendOutKey; // 0x110
		::UnityEngine::Vector3 lastPosition; // 0x118
		::UnityEngine::Vector3 dir; // 0x124
		::System::Boolean lastSmoothTowardsTarget; // 0x130
		::UnityEngine::Vector3 _prevHingerAimPos; // 0x134
		::RootMotion::FinalIK::AimController_AimLocalCoordinate _aimLocalCoordinate; // 0x140

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_AIMCONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_AIMCONTROLLER__CCTOR_OFFSET))();
		}

		::UnityEngine::AnimationCurve* GetBlendCurve(::System::String* curveKey, ::UnityEngine::AnimationCurve*& cache, ::System::String*& cachedKey)
		{
			return ((::UnityEngine::AnimationCurve*(*)(::PVOID, ::System::String*, ::UnityEngine::AnimationCurve*&, ::System::String*&))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_AIMCONTROLLER_GETBLENDCURVE_OFFSET))(this, curveKey, cache, cachedKey);
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
