#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Animation/NPCCrowdFrameKeyManager_SeqFrameRuntimeKey.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define NPCCROWD_ANIMATION_NPCCROWDFRAMEKEYMANAGER_PENDINGSEQFRAMEPLAYREQUEST__CTOR_OFFSET UNITYSDK_OFFSET(0xE94A4C0)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int NPCCrowdFrameKeyManager_PendingSeqFramePlayRequest_TypeDefinitionIndex = 56699;

	class NPCCrowdFrameKeyManager_PendingSeqFramePlayRequest : public ::System::Object
	{
	public:
		::System::String* textureSheetKey; // 0x10
		::System::Boolean trackRuntimeState; // 0x18
		::System::Boolean loop; // 0x19
		::NPCCrowd::Animation::NPCCrowdFrameKeyManager_SeqFrameRuntimeKey runtimeKey; // 0x1C
		::System::Int32 activeLayer; // 0x28
		::System::Single playStartTime; // 0x2C
		::System::Single playbackSpeed; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDFRAMEKEYMANAGER_PENDINGSEQFRAMEPLAYREQUEST__CTOR_OFFSET))(this);
		}
	};
}
