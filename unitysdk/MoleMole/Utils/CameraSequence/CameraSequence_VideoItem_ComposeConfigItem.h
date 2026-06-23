#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ELocalPlayType.h"
#include "unitysdk/MoleMole/Utils/CameraSequence/CameraSequence_WarmupVideo_CameraSequence_VideoItem.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace MoleMole::Utils::CameraSequence
{
	inline static constexpr unsigned int CameraSequence_VideoItem_ComposeConfigItem_TypeDefinitionIndex = 85319;

	struct alignas(8) CameraSequence_VideoItem_ComposeConfigItem
	{
		::System::String* Tag; // 0x10
		::System::Boolean isWarmupMode; // 0x18
		::Il2CppArray<::MoleMole::Utils::CameraSequence::CameraSequence_WarmupVideo_CameraSequence_VideoItem>* warmupVideos; // 0x20
		::Il2CppArray<::MoleMole::ELocalPlayType>* applyPlayType; // 0x28
		::System::Boolean IsPityDefault; // 0x30
		::System::Boolean isSplitVideo; // 0x31
	};
}
