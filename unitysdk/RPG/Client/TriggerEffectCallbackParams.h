#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::Client { class TriggerEffectParams; }

#define RPG_CLIENT_TRIGGEREFFECTCALLBACKPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0xC630)

namespace RPG::Client
{
	inline static constexpr unsigned int TriggerEffectCallbackParams_TypeDefinitionIndex = 65366;

	struct alignas(8) TriggerEffectCallbackParams
	{
		::RPG::Client::TriggerEffectParams* TriggerEffectParams; // 0x10

		::System::Void _ctor(::RPG::Client::TriggerEffectParams* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TriggerEffectParams*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRIGGEREFFECTCALLBACKPARAMS__CTOR_OFFSET))(this, a1);
		}
	};
}
