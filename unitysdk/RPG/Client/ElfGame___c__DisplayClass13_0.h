#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Promises { class Promise; }

#define RPG_CLIENT_ELFGAME___C__DISPLAYCLASS13_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18E33400)
#define RPG_CLIENT_ELFGAME___C__DISPLAYCLASS13_0___DISABLEELFSTREAMING_B__0_OFFSET UNITYSDK_OFFSET(0x18E375D0)

namespace RPG::Client
{
	inline static constexpr unsigned int ElfGame___c__DisplayClass13_0_TypeDefinitionIndex = 60902;

	class ElfGame___c__DisplayClass13_0 : public ::System::Object
	{
	public:
		::RPG::Client::Promises::Promise* promise; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFGAME___C__DISPLAYCLASS13_0__CTOR_OFFSET))(this);
		}

		::System::Void __DisableElfStreaming_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFGAME___C__DISPLAYCLASS13_0___DISABLEELFSTREAMING_B__0_OFFSET))(this);
		}
	};
}
