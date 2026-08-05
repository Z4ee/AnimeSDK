#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RootMotion/FinalIK/IKSolver_Bone.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define ROOTMOTION_FINALIK_IKSOLVERTRIGONOMETRIC_TRIGONOMETRICBONE_GETBENDNORMALFROMCURRENTROTATION_OFFSET UNITYSDK_OFFSET(0x1F3CE390)
#define ROOTMOTION_FINALIK_IKSOLVERTRIGONOMETRIC_TRIGONOMETRICBONE_GETROTATION_OFFSET UNITYSDK_OFFSET(0x1F3CE290)
#define ROOTMOTION_FINALIK_IKSOLVERTRIGONOMETRIC_TRIGONOMETRICBONE_INITIATE_OFFSET UNITYSDK_OFFSET(0x1F3CDF70)
#define ROOTMOTION_FINALIK_IKSOLVERTRIGONOMETRIC_TRIGONOMETRICBONE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F3CE4F0)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int IKSolverTrigonometric_TrigonometricBone_TypeDefinitionIndex = 38894;

	class IKSolverTrigonometric_TrigonometricBone : public ::RootMotion::FinalIK::IKSolver_Bone
	{
	public:
		::UnityEngine::Quaternion targetToLocalSpace; // 0x80
		::UnityEngine::Vector3 defaultLocalBendNormal; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERTRIGONOMETRIC_TRIGONOMETRICBONE__CTOR_OFFSET))(this);
		}

		::System::Void Initiate(::UnityEngine::Vector3 childPosition, ::UnityEngine::Vector3 bendNormal)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERTRIGONOMETRIC_TRIGONOMETRICBONE_INITIATE_OFFSET))(this, childPosition, bendNormal);
		}

		::UnityEngine::Quaternion GetRotation(::UnityEngine::Vector3 direction, ::UnityEngine::Vector3 bendNormal)
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERTRIGONOMETRIC_TRIGONOMETRICBONE_GETROTATION_OFFSET))(this, direction, bendNormal);
		}

		::UnityEngine::Vector3 GetBendNormalFromCurrentRotation()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERTRIGONOMETRIC_TRIGONOMETRICBONE_GETBENDNORMALFROMCURRENTROTATION_OFFSET))(this);
		}
	};
}
