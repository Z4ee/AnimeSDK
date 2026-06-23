#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define ROOTMOTION_FINALIK_SOLVERLEGNAP_BONECHAIN_NODE_MAKEIDENTITY_OFFSET UNITYSDK_OFFSET(0x1E06AAD0)

namespace RootMotion::FinalIK::SolverLegNap
{
	inline static constexpr unsigned int BoneChain_Node_TypeDefinitionIndex = 38209;

	struct alignas(4) BoneChain_Node
	{
		::UnityEngine::Quaternion rotation; // 0x10
		::UnityEngine::Quaternion localRotation; // 0x20
		::UnityEngine::Vector3 position; // 0x30
		::UnityEngine::Vector3 localPosition; // 0x3C

		static ::RootMotion::FinalIK::SolverLegNap::BoneChain_Node MakeIdentity()
		{
			return ((::RootMotion::FinalIK::SolverLegNap::BoneChain_Node(*)())((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_SOLVERLEGNAP_BONECHAIN_NODE_MAKEIDENTITY_OFFSET))();
		}
	};
}
