#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int NPCCrowdClipTextureManager_AtlasStats_TypeDefinitionIndex = 79429;

	struct alignas(8) NPCCrowdClipTextureManager_AtlasStats
	{
		::System::Int32 prototypeKey; // 0x10
		::System::String* prototypeName; // 0x18
		::System::Int32 boneCount; // 0x20
		::System::Int32 atlasWidth; // 0x24
		::System::Int32 atlasTextureHeight; // 0x28
		::System::Int32 atlasAllocatedHeight; // 0x2C
		::System::Int32 columnCount; // 0x30
		::System::Int32 loadedClipCount; // 0x34
		::System::Int32 usedRows; // 0x38
		::System::Int32 pendingUnloadCount; // 0x3C
		::System::Int64 atlasMemoryBytes; // 0x40
		::System::Single wasteRatio; // 0x48
	};
}
