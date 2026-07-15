#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Promises { class Promise; }

#define RPG_CLIENT_ELFGAME___C__DISPLAYCLASS12_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18E333F0)
#define RPG_CLIENT_ELFGAME___C__DISPLAYCLASS12_0___ENABLEELFSTREAMING_B__0_OFFSET UNITYSDK_OFFSET(0x18E375B0)

namespace RPG::Client
{
	inline static constexpr unsigned int ElfGame___c__DisplayClass12_0_TypeDefinitionIndex = 60901;

	class ElfGame___c__DisplayClass12_0 : public ::System::Object
	{
	public:
		::RPG::Client::Promises::Promise* promise; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFGAME___C__DISPLAYCLASS12_0__CTOR_OFFSET))(this);
		}

		::System::Void __EnableElfStreaming_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFGAME___C__DISPLAYCLASS12_0___ENABLEELFSTREAMING_B__0_OFFSET))(this);
		}
	};
}
