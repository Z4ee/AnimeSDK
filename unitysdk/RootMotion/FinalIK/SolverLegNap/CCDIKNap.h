#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RootMotion::FinalIK::SolverLegNap { class BoneChain; }
namespace UnityEngine { class Transform; }

#define ROOTMOTION_FINALIK_SOLVERLEGNAP_CCDIKNAP_SOLVECCDIK_1_OFFSET UNITYSDK_OFFSET(0x1F2F47B0)
#define ROOTMOTION_FINALIK_SOLVERLEGNAP_CCDIKNAP_SOLVECCDIK_OFFSET UNITYSDK_OFFSET(0x1F2F4660)
#define ROOTMOTION_FINALIK_SOLVERLEGNAP_CCDIKNAP__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F2F4C90)

namespace RootMotion::FinalIK::SolverLegNap
{
	inline static constexpr unsigned int CCDIKNap_TypeDefinitionIndex = 38937;

	class CCDIKNap : public ::System::Object
	{
	public:
		static ::RootMotion::FinalIK::SolverLegNap::BoneChain** StaticGet__boneChian()
		{
			return (::RootMotion::FinalIK::SolverLegNap::BoneChain**)Il2CppClass::FromTypeDefinitionIndex(CCDIKNap_TypeDefinitionIndex)->GetStaticField(0x2A870);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_SOLVERLEGNAP_CCDIKNAP__CCTOR_OFFSET))();
		}

		static ::System::Void SolveCCDIK(::UnityEngine::Transform* from, ::UnityEngine::Transform* end, ::UnityEngine::Vector3 targetPosition, ::System::Single precision, ::System::Int32 maxIterations)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Vector3, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_SOLVERLEGNAP_CCDIKNAP_SOLVECCDIK_OFFSET))(from, end, targetPosition, precision, maxIterations);
		}

		static ::System::Void SolveCCDIK_1(::RootMotion::FinalIK::SolverLegNap::BoneChain* boneChain, ::UnityEngine::Vector3 targetPosition, ::System::Single precision, ::System::Int32 maxIterations, ::System::Boolean bStartFromTail)
		{
			return ((::System::Void(*)(::RootMotion::FinalIK::SolverLegNap::BoneChain*, ::UnityEngine::Vector3, ::System::Single, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_SOLVERLEGNAP_CCDIKNAP_SOLVECCDIK_1_OFFSET))(boneChain, targetPosition, precision, maxIterations, bStartFromTail);
		}
	};
}
