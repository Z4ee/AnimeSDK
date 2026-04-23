#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RootMotion/IKJob/IKTransformRef.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define ROOTMOTION_FINALIK_GROUNDERIKTHREADSOLVER_LIMB_TRIGONOMETRICBONE_GETBENDNORMALFROMCURRENTROTATION_OFFSET UNITYSDK_OFFSET(0x2A950)
#define ROOTMOTION_FINALIK_GROUNDERIKTHREADSOLVER_LIMB_TRIGONOMETRICBONE_GETROTATION_OFFSET UNITYSDK_OFFSET(0x2A850)
#define ROOTMOTION_FINALIK_GROUNDERIKTHREADSOLVER_LIMB_TRIGONOMETRICBONE_INITIATE_OFFSET UNITYSDK_OFFSET(0x2A810)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int GrounderIKThreadSolver_Limb_TrigonometricBone_TypeDefinitionIndex = 41013;

	struct alignas(8) GrounderIKThreadSolver_Limb_TrigonometricBone
	{
		::RootMotion::IKJob::IKTransformRef transform; // 0x10
		::System::Single sqrMag; // 0x20
		::UnityEngine::Quaternion targetToLocalSpace; // 0x24
		::UnityEngine::Vector3 defaultLocalBendNormal; // 0x34

		::System::Void Initiate(::UnityEngine::Vector3 childPosition, ::UnityEngine::Vector3 bendNormal)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDERIKTHREADSOLVER_LIMB_TRIGONOMETRICBONE_INITIATE_OFFSET))(this, childPosition, bendNormal);
		}

		::UnityEngine::Quaternion GetRotation(::UnityEngine::Vector3 direction, ::UnityEngine::Vector3 bendNormal)
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDERIKTHREADSOLVER_LIMB_TRIGONOMETRICBONE_GETROTATION_OFFSET))(this, direction, bendNormal);
		}

		::UnityEngine::Vector3 GetBendNormalFromCurrentRotation()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDERIKTHREADSOLVER_LIMB_TRIGONOMETRICBONE_GETBENDNORMALFROMCURRENTROTATION_OFFSET))(this);
		}
	};
}
