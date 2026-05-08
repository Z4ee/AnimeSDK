#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RootMotion/FinalIK/IKSolverHeuristic.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RootMotion::FinalIK { class IKSolver_IterationDelegate; }

#define ROOTMOTION_FINALIK_IKSOLVERCCD_FADEOUTBONEWEIGHTS_OFFSET UNITYSDK_OFFSET(0x1C2E0750)
#define ROOTMOTION_FINALIK_IKSOLVERCCD_ONINITIATE_OFFSET UNITYSDK_OFFSET(0x1C2E07E0)
#define ROOTMOTION_FINALIK_IKSOLVERCCD_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1C2E08A0)
#define ROOTMOTION_FINALIK_IKSOLVERCCD_SOLVE_OFFSET UNITYSDK_OFFSET(0x1C2E0D40)
#define ROOTMOTION_FINALIK_IKSOLVERCCD__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2E1AE0)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int IKSolverCCD_TypeDefinitionIndex = 36615;

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
