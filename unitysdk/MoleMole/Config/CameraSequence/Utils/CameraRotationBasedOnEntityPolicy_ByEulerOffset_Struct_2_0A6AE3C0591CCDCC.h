#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole::Config::CameraSequence::Utils { class CameraRotationBasedOnEntityPolicy_ByEulerOffset; }
namespace Nap::NapECS { class EcsWorld; }
namespace PipelineCamera::CameraSequence { class CameraSequenceContext; }

#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_CAMERAROTATIONBASEDONENTITYPOLICY_BYEULEROFFSET_STRUCT_2_0A6AE3C0591CCDCC_METHOD_2_4754F71558997746_OFFSET UNITYSDK_OFFSET(0x829340)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_CAMERAROTATIONBASEDONENTITYPOLICY_BYEULEROFFSET_STRUCT_2_0A6AE3C0591CCDCC__CTOR_OFFSET UNITYSDK_OFFSET(0x829330)

namespace MoleMole::Config::CameraSequence::Utils
{
	inline static constexpr unsigned int CameraRotationBasedOnEntityPolicy_ByEulerOffset_Struct_2_0A6AE3C0591CCDCC_TypeDefinitionIndex = 43953;

	struct alignas(4) CameraRotationBasedOnEntityPolicy_ByEulerOffset_Struct_2_0A6AE3C0591CCDCC
	{
		::System::Single Field_2_0; // 0x10
		::System::Single Field_2_1; // 0x14
		::System::Single Field_2_2; // 0x18
		::System::Boolean Field_2_3; // 0x1C

		::System::Void _ctor(::MoleMole::Config::CameraSequence::Utils::CameraRotationBasedOnEntityPolicy_ByEulerOffset* a1, ::PipelineCamera::CameraSequence::CameraSequenceContext* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::CameraSequence::Utils::CameraRotationBasedOnEntityPolicy_ByEulerOffset*, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_CAMERAROTATIONBASEDONENTITYPOLICY_BYEULEROFFSET_STRUCT_2_0A6AE3C0591CCDCC__CTOR_OFFSET))(this, a1, a2);
		}

		/*
		::UnityEngine::Quaternion Method_2_4754F71558997746(::System::Single a1, ::System::UInt32 a2, ::Nap::NapECS::EcsWorld* a3)
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID, ::System::Single, ::System::UInt32, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_CAMERAROTATIONBASEDONENTITYPOLICY_BYEULEROFFSET_STRUCT_2_0A6AE3C0591CCDCC_METHOD_2_4754F71558997746_OFFSET))(this, a1, a2, a3);
		}
		*/
	};
}
