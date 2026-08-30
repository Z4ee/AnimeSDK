#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RootMotion/FinalIK/IKSolver_Bone.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define ROOTMOTION_FINALIK_IKSOLVERTRIGONOMETRIC_TRIGONOMETRICBONE_GETBENDNORMALFROMCURRENTROTATION_OFFSET UNITYSDK_OFFSET(0xB3133C0)
#define ROOTMOTION_FINALIK_IKSOLVERTRIGONOMETRIC_TRIGONOMETRICBONE_GETROTATION_OFFSET UNITYSDK_OFFSET(0xB317360)
#define ROOTMOTION_FINALIK_IKSOLVERTRIGONOMETRIC_TRIGONOMETRICBONE_GET_DEFAULTLOCALBENDNORMAL_OFFSET UNITYSDK_OFFSET(0xB3174E0)
#define ROOTMOTION_FINALIK_IKSOLVERTRIGONOMETRIC_TRIGONOMETRICBONE_GET_TARGETTOLOCALSPACE_OFFSET UNITYSDK_OFFSET(0xB3174D0)
#define ROOTMOTION_FINALIK_IKSOLVERTRIGONOMETRIC_TRIGONOMETRICBONE_INITIATE_OFFSET UNITYSDK_OFFSET(0xB313530)
#define ROOTMOTION_FINALIK_IKSOLVERTRIGONOMETRIC_TRIGONOMETRICBONE__CTOR_OFFSET UNITYSDK_OFFSET(0xB317490)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int IKSolverTrigonometric_TrigonometricBone_TypeDefinitionIndex = 44885;

	class IKSolverTrigonometric_TrigonometricBone : public ::RootMotion::FinalIK::IKSolver_Bone
	{
	public:
		::UnityEngine::Quaternion targetToLocalSpace; // 0x80
		::UnityEngine::Vector3 defaultLocalBendNormal; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERTRIGONOMETRIC_TRIGONOMETRICBONE__CTOR_OFFSET))(this);
		}

		::UnityEngine::Quaternion get_TargetToLocalSpace()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERTRIGONOMETRIC_TRIGONOMETRICBONE_GET_TARGETTOLOCALSPACE_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_DefaultLocalBendNormal()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERTRIGONOMETRIC_TRIGONOMETRICBONE_GET_DEFAULTLOCALBENDNORMAL_OFFSET))(this);
		}

		::System::Void Initiate(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERTRIGONOMETRIC_TRIGONOMETRICBONE_INITIATE_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Quaternion GetRotation(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERTRIGONOMETRIC_TRIGONOMETRICBONE_GETROTATION_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector3 GetBendNormalFromCurrentRotation()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERTRIGONOMETRIC_TRIGONOMETRICBONE_GETBENDNORMALFROMCURRENTROTATION_OFFSET))(this);
		}
	};
}
