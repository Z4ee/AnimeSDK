#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Promises { class Promise; }

#define RPG_CLIENT_SDKLOGINPHASE___C__DISPLAYCLASS9_0__CTOR_OFFSET UNITYSDK_OFFSET(0xE0805A0)
#define RPG_CLIENT_SDKLOGINPHASE___C__DISPLAYCLASS9_0___INITSDK_B__0_OFFSET UNITYSDK_OFFSET(0xE081890)

namespace RPG::Client
{
	inline static constexpr unsigned int SDKLoginPhase___c__DisplayClass9_0_TypeDefinitionIndex = 61161;

	class SDKLoginPhase___c__DisplayClass9_0 : public ::System::Object
	{
	public:
		::RPG::Client::Promises::Promise* promise; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLOGINPHASE___C__DISPLAYCLASS9_0__CTOR_OFFSET))(this);
		}

		::System::Void __InitSDk_b__0(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLOGINPHASE___C__DISPLAYCLASS9_0___INITSDK_B__0_OFFSET))(this, a1);
		}
	};
}
