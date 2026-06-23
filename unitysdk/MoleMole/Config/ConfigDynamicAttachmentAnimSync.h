#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigDynamicAttachmentAnimSync_TypeDefinitionIndex = 71682;

	struct alignas(8) ConfigDynamicAttachmentAnimSync
	{
		::System::String* syncParentAnimState; // 0x10
		::System::Single startNormalizedTime; // 0x18
		::System::Single endNormalizedTime; // 0x1C
		::System::String* syncAttachmentAnimState; // 0x20
	};
}
