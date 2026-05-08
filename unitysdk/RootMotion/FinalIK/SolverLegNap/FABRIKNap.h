#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RootMotion/FinalIK/SolverLegNap/FABRIKChainLink.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define ROOTMOTION_FINALIK_SOLVERLEGNAP_FABRIKNAP_GENCHAINLINK_OFFSET UNITYSDK_OFFSET(0x1B68AE80)
#define ROOTMOTION_FINALIK_SOLVERLEGNAP_FABRIKNAP_SOLVEFABRIK_1_OFFSET UNITYSDK_OFFSET(0x1B68B150)
#define ROOTMOTION_FINALIK_SOLVERLEGNAP_FABRIKNAP_SOLVEFABRIK_OFFSET UNITYSDK_OFFSET(0x1B68AC90)
#define ROOTMOTION_FINALIK_SOLVERLEGNAP_FABRIKNAP_WRITEBACKTOTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1B68B8D0)

namespace RootMotion::FinalIK::SolverLegNap
{
	inline static constexpr unsigned int FABRIKNap_TypeDefinitionIndex = 36743;

	class FABRIKNap : public ::System::Object
	{
	public:
		static ::Il2CppArray<::RootMotion::FinalIK::SolverLegNap::FABRIKChainLink>** StaticGet__linkCache()
		{
			return (::Il2CppArray<::RootMotion::FinalIK::SolverLegNap::FABRIKChainLink>**)Il2CppClass::FromTypeDefinitionIndex(FABRIKNap_TypeDefinitionIndex)->GetStaticField(0x27290);
		}

		static ::System::Boolean SolveFabrik(::UnityEngine::Transform* from, ::UnityEngine::Transform* end, ::UnityEngine::Vector3 targetPosition, ::System::Single precision, ::System::Int32 maxIterations)
		{
			return ((::System::Boolean(*)(::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Vector3, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_SOLVERLEGNAP_FABRIKNAP_SOLVEFABRIK_OFFSET))(from, end, targetPosition, precision, maxIterations);
		}

		static ::System::Boolean SolveFabrik_1(::Il2CppArray<::RootMotion::FinalIK::SolverLegNap::FABRIKChainLink>* inOutChain, ::System::Int32 chainBegin, ::System::Int32 chainEnd, ::UnityEngine::Vector3 targetPosition, ::System::Single maximumReach, ::System::Single precision, ::System::Int32 maxIterations)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::RootMotion::FinalIK::SolverLegNap::FABRIKChainLink>*, ::System::Int32, ::System::Int32, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_SOLVERLEGNAP_FABRIKNAP_SOLVEFABRIK_1_OFFSET))(inOutChain, chainBegin, chainEnd, targetPosition, maximumReach, precision, maxIterations);
		}

		static ::Il2CppArray<::RootMotion::FinalIK::SolverLegNap::FABRIKChainLink>* GenChainLink(::System::Collections::Generic::List_1<::UnityEngine::Transform*>* boneList, ::System::Int32& num, ::System::Single& chainMaxLength)
		{
			return ((::Il2CppArray<::RootMotion::FinalIK::SolverLegNap::FABRIKChainLink>*(*)(::System::Collections::Generic::List_1<::UnityEngine::Transform*>*, ::System::Int32&, ::System::Single&))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_SOLVERLEGNAP_FABRIKNAP_GENCHAINLINK_OFFSET))(boneList, num, chainMaxLength);
		}

		static ::System::Void WriteBackToTransform(::System::Collections::Generic::List_1<::UnityEngine::Transform*>* boneTrs, ::Il2CppArray<::RootMotion::FinalIK::SolverLegNap::FABRIKChainLink>* chain)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::UnityEngine::Transform*>*, ::Il2CppArray<::RootMotion::FinalIK::SolverLegNap::FABRIKChainLink>*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_SOLVERLEGNAP_FABRIKNAP_WRITEBACKTOTRANSFORM_OFFSET))(boneTrs, chain);
		}
	};
}
