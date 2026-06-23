#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"

namespace RootMotion::FinalIK { class IKSolverFullBodyBiped; }
namespace RootMotion::FinalIK { class OffsetPose_EffectorLink; }

#define ROOTMOTION_FINALIK_OFFSETPOSE_APPLY_1_OFFSET UNITYSDK_OFFSET(0x1DA870F0)
#define ROOTMOTION_FINALIK_OFFSETPOSE_APPLY_OFFSET UNITYSDK_OFFSET(0x1DA86FF0)
#define ROOTMOTION_FINALIK_OFFSETPOSE__CTOR_OFFSET UNITYSDK_OFFSET(0x1DA87190)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int OffsetPose_TypeDefinitionIndex = 38189;

	class OffsetPose : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Il2CppArray<::RootMotion::FinalIK::OffsetPose_EffectorLink*>* effectorLinks; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_OFFSETPOSE__CTOR_OFFSET))(this);
		}

		::System::Void Apply(::RootMotion::FinalIK::IKSolverFullBodyBiped* solver, ::System::Single weight)
		{
			return ((::System::Void(*)(::PVOID, ::RootMotion::FinalIK::IKSolverFullBodyBiped*, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_OFFSETPOSE_APPLY_OFFSET))(this, solver, weight);
		}

		::System::Void Apply_1(::RootMotion::FinalIK::IKSolverFullBodyBiped* solver, ::System::Single weight, ::UnityEngine::Quaternion rotation)
		{
			return ((::System::Void(*)(::PVOID, ::RootMotion::FinalIK::IKSolverFullBodyBiped*, ::System::Single, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_OFFSETPOSE_APPLY_1_OFFSET))(this, solver, weight, rotation);
		}
	};
}
