#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RootMotion::FinalIK { class IKSolverFullBodyBiped; }
namespace RootMotion::FinalIK { class Recoil_RecoilOffset_EffectorLink; }

#define ROOTMOTION_FINALIK_RECOIL_RECOILOFFSET_APPLY_OFFSET UNITYSDK_OFFSET(0x1E527660)
#define ROOTMOTION_FINALIK_RECOIL_RECOILOFFSET_START_OFFSET UNITYSDK_OFFSET(0x1E5275B0)
#define ROOTMOTION_FINALIK_RECOIL_RECOILOFFSET__CTOR_OFFSET UNITYSDK_OFFSET(0x1E527990)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int Recoil_RecoilOffset_TypeDefinitionIndex = 38143;

	class Recoil_RecoilOffset : public ::System::Object
	{
	public:
		::UnityEngine::Vector3 offset; // 0x10
		::System::Single additivity; // 0x1C
		::System::Single maxAdditiveOffsetMag; // 0x20
		::Il2CppArray<::RootMotion::FinalIK::Recoil_RecoilOffset_EffectorLink*>* effectorLinks; // 0x28
		::UnityEngine::Vector3 additiveOffset; // 0x30
		::UnityEngine::Vector3 lastOffset; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_RECOIL_RECOILOFFSET__CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_RECOIL_RECOILOFFSET_START_OFFSET))(this);
		}

		::System::Void Apply(::RootMotion::FinalIK::IKSolverFullBodyBiped* solver, ::UnityEngine::Quaternion rotation, ::System::Single masterWeight, ::System::Single length, ::System::Single timeLeft)
		{
			return ((::System::Void(*)(::PVOID, ::RootMotion::FinalIK::IKSolverFullBodyBiped*, ::UnityEngine::Quaternion, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_RECOIL_RECOILOFFSET_APPLY_OFFSET))(this, solver, rotation, masterWeight, length, timeLeft);
		}
	};
}
