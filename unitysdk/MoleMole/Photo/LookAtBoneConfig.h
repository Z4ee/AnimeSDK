#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Photo/LookAtBoneForwardAxis.h"
#include "unitysdk/PipelineCamera/SerializableHashString.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole::Photo
{
	inline static constexpr unsigned int LookAtBoneConfig_TypeDefinitionIndex = 58103;

	struct alignas(8) LookAtBoneConfig
	{
		::PipelineCamera::SerializableHashString boneName; // 0x10
		::MoleMole::Photo::LookAtBoneForwardAxis forwardAxis; // 0x20
	};
}
