#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Action; }

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCityMiniMenuWidgetController_SUnlockAnimInfo_TypeDefinitionIndex = 59481;

	struct alignas(8) UIMainCityMiniMenuWidgetController_SUnlockAnimInfo
	{
		::System::Int32 FuncId; // 0x10
		::System::Action* Callback; // 0x18
	};
}
