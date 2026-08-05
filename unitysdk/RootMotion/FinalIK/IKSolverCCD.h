#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RootMotion/FinalIK/IKSolverHeuristic.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RootMotion::FinalIK { class IKSolver_IterationDelegate; }

#define ROOTMOTION_FINALIK_IKSOLVERCCD_FADEOUTBONEWEIGHTS_OFFSET UNITYSDK_OFFSET(0x1FA16410)
#define ROOTMOTION_FINALIK_IKSOLVERCCD_ONINITIATE_OFFSET UNITYSDK_OFFSET(0x1FA164A0)
#define ROOTMOTION_FINALIK_IKSOLVERCCD_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1FA16560)
#define ROOTMOTION_FINALIK_IKSOLVERCCD_SOLVE_OFFSET UNITYSDK_OFFSET(0x1FA16A20)
#define ROOTMOTION_FINALIK_IKSOLVERCCD__CTOR_OFFSET UNITYSDK_OFFSET(0x1FA17800)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int IKSolverCCD_TypeDefinitionIndex = 38810;

	class IKSolverCCD : public ::RootMotion::FinalIK::IKSolverHeuristic
	{
	public:
		::RootMotion::FinalIK::IKSolver_IterationDelegate* OnPreIteration; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERCCD__CTOR_OFFSET))(this);
		}

		::System::Void FadeOutBoneWeights()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERCCD_FADEOUTBONEWEIGHTS_OFFSET))(this);
		}

		::System::Void OnInitiate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERCCD_ONINITIATE_OFFSET))(this);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERCCD_ONUPDATE_OFFSET))(this);
		}

		::System::Void Solve(::UnityEngine::Vector3 targetPosition)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERCCD_SOLVE_OFFSET))(this, targetPosition);
		}
	};
}
