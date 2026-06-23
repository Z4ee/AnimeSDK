#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIPhysicalPosHandler_Enum_3_DC661B247DD9D722.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class UIPhysicalPosHandler; }
namespace System { class String; }

namespace MoleMole
{
	inline static constexpr unsigned int UIPhysicalPosHandler_AlignMeta_TypeDefinitionIndex = 61590;

	struct alignas(8) UIPhysicalPosHandler_AlignMeta
	{
		::MoleMole::UIPhysicalPosHandler_Enum_3_DC661B247DD9D722 alignType; // 0x10
		::MoleMole::UIPhysicalPosHandler* alignTarget; // 0x18
		::System::String* alignName; // 0x20
	};
}
