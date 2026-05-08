#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace MoleMole
{
	inline static constexpr unsigned int AbyssThirdLoopPartnerSubSystem_OverrideSwitchOutQTEData_TypeDefinitionIndex = 39406;

	struct alignas(8) AbyssThirdLoopPartnerSubSystem_OverrideSwitchOutQTEData
	{
		::System::String* Tag; // 0x10
		::System::Boolean IsQTE; // 0x18
	};
}
