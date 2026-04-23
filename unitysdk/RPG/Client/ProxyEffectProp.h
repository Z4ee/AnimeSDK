#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_PROXYEFFECTPROP__CTOR_OFFSET UNITYSDK_OFFSET(0xAF24DD0)

namespace RPG::Client
{
	inline static constexpr unsigned int ProxyEffectProp_TypeDefinitionIndex = 55787;

	class ProxyEffectProp : public ::System::Object
	{
	public:
		::System::UInt32 PropConfigID; // 0x10
		::System::String* EffectName; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROXYEFFECTPROP__CTOR_OFFSET))(this);
		}
	};
}
