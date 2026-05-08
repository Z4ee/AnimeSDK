#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIActivityHotpotInGamePageController_NewbieExtraFlag.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class UIBaseController; }

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityHotpotInGamePageController_NewbieData_TypeDefinitionIndex = 53748;

	struct alignas(8) UIActivityHotpotInGamePageController_NewbieData
	{
		::System::Int32 id; // 0x10
		::MoleMole::UIBaseController* controller; // 0x18
		::MoleMole::UIActivityHotpotInGamePageController_NewbieExtraFlag flag; // 0x20
	};
}
