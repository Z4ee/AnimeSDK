#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace MoleMole
{
	inline static constexpr unsigned int ZenkovPyroisSubSystem_OverrideSwitchOutQTEData_TypeDefinitionIndex = 77302;

	struct alignas(8) ZenkovPyroisSubSystem_OverrideSwitchOutQTEData
	{
		::System::String* Tag; // 0x10
		::System::Boolean IsQTE; // 0x18
	};
}
