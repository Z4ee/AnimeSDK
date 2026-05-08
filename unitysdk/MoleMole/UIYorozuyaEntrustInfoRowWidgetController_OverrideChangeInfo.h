#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIYorozuyaEntrustInfoRowWidgetController_OverrideChangeInfo_TypeDefinitionIndex = 53952;

	struct alignas(4) UIYorozuyaEntrustInfoRowWidgetController_OverrideChangeInfo
	{
		::System::Nullable_1<::System::Int32> overrideLeft; // 0x10
		::System::Nullable_1<::System::Int32> overrideRight; // 0x18
		::System::Nullable_1<::System::Boolean> overrideFinish; // 0x20
	};
}
