#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelMainPageController_HollowTipData_TypeDefinitionIndex = 59673;

	struct alignas(8) UIInLevelMainPageController_HollowTipData
	{
		::System::String* text; // 0x10
		::System::Boolean isShowFinish; // 0x18
		::System::Boolean isFinish; // 0x19
	};
}
