#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace MoleMole::Config::CameraSequence::Utils { class FrameOnePointInCorePolicy_ByScreenOffset; }
namespace PipelineCamera::CameraSequence { class AspectRatioPolicy_Default; }
namespace PipelineCamera::CameraSequence { class CameraSequenceContext; }

#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEONEPOINTINCOREPOLICY_BYSCREENOFFSET_STRUCT_2_2C26717FA1BD2C55_METHOD_2_1B42B5B56F439BBC_OFFSET UNITYSDK_OFFSET(0x7BF0A0)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEONEPOINTINCOREPOLICY_BYSCREENOFFSET_STRUCT_2_2C26717FA1BD2C55__CTOR_OFFSET UNITYSDK_OFFSET(0x7BF090)

namespace MoleMole::Config::CameraSequence::Utils
{
	inline static constexpr unsigned int FrameOnePointInCorePolicy_ByScreenOffset_Struct_2_2C26717FA1BD2C55_TypeDefinitionIndex = 41350;

	struct alignas(8) FrameOnePointInCorePolicy_ByScreenOffset_Struct_2_2C26717FA1BD2C55
	{
		::System::Single Field_2_0; // 0x10
		::UnityEngine::Vector2 Field_2_1; // 0x14
		::System::Single Field_2_2; // 0x1C
		::PipelineCamera::CameraSequence::AspectRatioPolicy_Default* Field_2_3; // 0x20

		::System::Void _ctor(::MoleMole::Config::CameraSequence::Utils::FrameOnePointInCorePolicy_ByScreenOffset* a1, ::PipelineCamera::CameraSequence::CameraSequenceContext* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::CameraSequence::Utils::FrameOnePointInCorePolicy_ByScreenOffset*, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEONEPOINTINCOREPOLICY_BYSCREENOFFSET_STRUCT_2_2C26717FA1BD2C55__CTOR_OFFSET))(this, a1, a2);
		}

		/*
		::PipelineCamera::WorldBasicCameraData Method_2_1B42B5B56F439BBC(::System::Single a1, ::PipelineCamera::CameraSequence::CameraSequenceContext*& a2, ::UnityEngine::Vector3 a3)
		{
			return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::System::Single, ::PipelineCamera::CameraSequence::CameraSequenceContext*&, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEONEPOINTINCOREPOLICY_BYSCREENOFFSET_STRUCT_2_2C26717FA1BD2C55_METHOD_2_1B42B5B56F439BBC_OFFSET))(this, a1, a2, a3);
		}
		*/
	};
}
