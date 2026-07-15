#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityIdleLive/IdleLiveDecimal.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int PowerChangeUiData_TypeDefinitionIndex = 71824;

	struct alignas(8) PowerChangeUiData
	{
		::RPG::Client::ActivityIdleLive::IdleLiveDecimal CurPower; // 0x10
		::RPG::Client::ActivityIdleLive::IdleLiveDecimal ChangedPower; // 0x28
		::System::Boolean NeedShowToast; // 0x40
	};
}
