#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RootMotion/FinalIK/GrounderIKThreadSolver_Limb.h"
#include "unitysdk/RootMotion/IKJob/IKTransformRef.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RootMotion::FinalIK { class GroundingThread; }

#define ROOTMOTION_FINALIK_GROUNDERIKTHREADSOLVER_SOLVE_OFFSET UNITYSDK_OFFSET(0x29CD0)
#define ROOTMOTION_FINALIK_GROUNDERIKTHREADSOLVER__POSTSOLVE_OFFSET UNITYSDK_OFFSET(0x29D00)
#define ROOTMOTION_FINALIK_GROUNDERIKTHREADSOLVER__PRESOLVE_OFFSET UNITYSDK_OFFSET(0x29CF0)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int GrounderIKThreadSolver_TypeDefinitionIndex = 35192;

	struct alignas(8) GrounderIKThreadSolver
	{
		::RootMotion::FinalIK::GroundingThread* solver; // 0x10
		::Il2CppArray<::RootMotion::FinalIK::GrounderIKThreadSolver_Limb>* legSolvers; // 0x18
		::RootMotion::IKJob::IKTransformRef Pelvis; // 0x20
		::UnityEngine::Vector3 AnimatedPelvisLocalPosition; // 0x30
		::UnityEngine::Vector3 SolvedPelvisLocalPosition; // 0x3C

		::System::Boolean Solve(::System::Single deltaTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDERIKTHREADSOLVER_SOLVE_OFFSET))(this, deltaTime);
		}

		::System::Void _PreSolve(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDERIKTHREADSOLVER__PRESOLVE_OFFSET))(this, deltaTime);
		}

		::System::Void _PostSolve()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDERIKTHREADSOLVER__POSTSOLVE_OFFSET))(this);
		}
	};
}
