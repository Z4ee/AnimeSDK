#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RootMotion::FinalIK { class IKSolverLegNap; }
namespace UnityEngine { class Transform; }

#define ROOTMOTION_FINALIK_IKSOLVERLEGNAP_TRIGONOMETRICCONTEXT_DOSOLVE_OFFSET UNITYSDK_OFFSET(0x9B5390)
#define ROOTMOTION_FINALIK_IKSOLVERLEGNAP_TRIGONOMETRICCONTEXT_FIXTWISTROTATIONS_OFFSET UNITYSDK_OFFSET(0x9B53E0)
#define ROOTMOTION_FINALIK_IKSOLVERLEGNAP_TRIGONOMETRICCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x9B5380)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int IKSolverLegNap_TrigonometricContext_TypeDefinitionIndex = 36626;

	struct alignas(8) IKSolverLegNap_TrigonometricContext
	{
		::UnityEngine::Transform* thigh; // 0x10
		::UnityEngine::Transform* calf; // 0x18
		::UnityEngine::Transform* foot; // 0x20
		::UnityEngine::Vector3 thighAxis; // 0x28
		::UnityEngine::Vector3 calfAxis; // 0x34
		::UnityEngine::Quaternion calfRelToThigh; // 0x40
		::UnityEngine::Quaternion thighRelToFoot; // 0x50

		::System::Void _ctor(::UnityEngine::Transform* thigh, ::UnityEngine::Transform* calf, ::UnityEngine::Transform* foot)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERLEGNAP_TRIGONOMETRICCONTEXT__CTOR_OFFSET))(this, thigh, calf, foot);
		}

		::System::Void DoSolve(::RootMotion::FinalIK::IKSolverLegNap* solver, ::UnityEngine::Vector3 footTargetPosition, ::UnityEngine::Quaternion footTargetRotation, ::UnityEngine::Quaternion toeTargetRotation)
		{
			return ((::System::Void(*)(::PVOID, ::RootMotion::FinalIK::IKSolverLegNap*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERLEGNAP_TRIGONOMETRICCONTEXT_DOSOLVE_OFFSET))(this, solver, footTargetPosition, footTargetRotation, toeTargetRotation);
		}

		::System::Void FixTwistRotations(::RootMotion::FinalIK::IKSolverLegNap* solver, ::UnityEngine::Quaternion rotation)
		{
			return ((::System::Void(*)(::PVOID, ::RootMotion::FinalIK::IKSolverLegNap*, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERLEGNAP_TRIGONOMETRICCONTEXT_FIXTWISTROTATIONS_OFFSET))(this, solver, rotation);
		}
	};
}
