#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIButtonPosHandler_Enum_3_13281E122A813A4F.h"
#include "unitysdk/MoleMole/UIButtonPosHandler_Enum_3_672E4D1F845B9D2A.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class UIButtonPosHandler; }
namespace System { class String; }

namespace MoleMole
{
	inline static constexpr unsigned int UIButtonPosHandler_AlignMeta_TypeDefinitionIndex = 70128;

	struct alignas(8) UIButtonPosHandler_AlignMeta
	{
		::MoleMole::UIButtonPosHandler_Enum_3_13281E122A813A4F alignType; // 0x10
		::MoleMole::UIButtonPosHandler* alignTarget; // 0x18
		::System::String* alignName; // 0x20
		::MoleMole::UIButtonPosHandler_Enum_3_672E4D1F845B9D2A selfEdge; // 0x28
		::MoleMole::UIButtonPosHandler_Enum_3_672E4D1F845B9D2A alignEdge; // 0x2C
		::System::Single distance; // 0x30
	};
}
