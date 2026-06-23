#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace MoleMole
{
	inline static constexpr unsigned int AbyssThirdLoopPartnerSubSystem_OverrideSwitchOutExQTEData_TypeDefinitionIndex = 46487;

	struct alignas(8) AbyssThirdLoopPartnerSubSystem_OverrideSwitchOutExQTEData
	{
		::System::String* Tag; // 0x10
		::System::Boolean IsExQTE; // 0x18
	};
}
