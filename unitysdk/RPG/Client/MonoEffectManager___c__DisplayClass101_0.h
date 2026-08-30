#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MonoEffect; }
namespace RPG::Client { class MonoEffectManager; }

#define RPG_CLIENT_MONOEFFECTMANAGER___C__DISPLAYCLASS101_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1168B280)
#define RPG_CLIENT_MONOEFFECTMANAGER___C__DISPLAYCLASS101_0___ONEFFECTASYNCLOADED_B__0_OFFSET UNITYSDK_OFFSET(0x11695540)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectManager___c__DisplayClass101_0_TypeDefinitionIndex = 69821;

	class MonoEffectManager___c__DisplayClass101_0 : public ::System::Object
	{
	public:
		::RPG::Client::MonoEffect* pSpecialEffect; // 0x10
		::RPG::Client::MonoEffectManager* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER___C__DISPLAYCLASS101_0__CTOR_OFFSET))(this);
		}

		::System::Void __OnEffectAsyncLoaded_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER___C__DISPLAYCLASS101_0___ONEFFECTASYNCLOADED_B__0_OFFSET))(this);
		}
	};
}
