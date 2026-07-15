#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::Client { class TriggerEffectParams; }

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectManager_FieldEffectBudgetInfo_TypeDefinitionIndex = 66716;

	struct alignas(8) MonoEffectManager_FieldEffectBudgetInfo
	{
		::RPG::Client::TriggerEffectParams* TriggerEffectParams; // 0x10
		::System::Single Budget; // 0x18
	};
}
