#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/InLevelCustomCameraSequenceType.h"
#include "unitysdk/System/ValueType.h"

namespace PipelineCamera::CameraSequence { class CoreDataBindingResolver; }
namespace PipelineCamera::CameraSequence { class CoreDataCollection; }

namespace MoleMole::LevelPerform
{
	inline static constexpr unsigned int LevelPerformConfig_InLevelCameraSequenceConfig_TypeDefinitionIndex = 66241;

	struct alignas(8) LevelPerformConfig_InLevelCameraSequenceConfig
	{
		::MoleMole::InLevelCustomCameraSequenceType ConfigType; // 0x10
		::PipelineCamera::CameraSequence::CoreDataCollection* Config; // 0x18
		::PipelineCamera::CameraSequence::CoreDataBindingResolver* Binding; // 0x20
	};
}
