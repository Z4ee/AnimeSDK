#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/System/ValueType.h"

namespace Nap::NapECS { class EcsWorld; }
namespace PipelineCamera::CameraSequence { template <typename T> class ICameraSequenceCollection_1; }

#define STRUCT_2_2CEE35A1FF4AE199__CTOR_OFFSET UNITYSDK_OFFSET(0x790540)

inline static constexpr unsigned int Struct_2_2CEE35A1FF4AE199_TypeDefinitionIndex = 43748;

struct alignas(8) Struct_2_2CEE35A1FF4AE199
{
	::System::UInt32 Field_2_0; // 0x10
	::System::UInt32 Field_2_1; // 0x14
	::Nap::NapECS::EcsWorld* Field_2_2; // 0x18
	::PipelineCamera::CameraSequence::ICameraSequenceCollection_1<::PipelineCamera::WorldBasicCameraData>* Field_2_3; // 0x20
	::System::Boolean Field_2_4; // 0x28

	::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2, ::Nap::NapECS::EcsWorld* a3, ::PipelineCamera::CameraSequence::ICameraSequenceCollection_1<::PipelineCamera::WorldBasicCameraData>* a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::Nap::NapECS::EcsWorld*, ::PipelineCamera::CameraSequence::ICameraSequenceCollection_1<::PipelineCamera::WorldBasicCameraData>*, ::System::Boolean))((::PBYTE)hIl2Cpp + STRUCT_2_2CEE35A1FF4AE199__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}
};
