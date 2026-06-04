#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class BaseLobby; }
namespace RPG::Client::Promises { class Promise; }

#define RPG_CLIENT_BASELOBBY___C__DISPLAYCLASS16_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB3AF8E0)
#define RPG_CLIENT_BASELOBBY___C__DISPLAYCLASS16_0__STARTMATCHPROMISE_B__0_OFFSET UNITYSDK_OFFSET(0xB3B2410)
#define RPG_CLIENT_BASELOBBY___C__DISPLAYCLASS16_0__STARTMATCHPROMISE_B__1_OFFSET UNITYSDK_OFFSET(0xB3B24B0)

namespace RPG::Client
{
	inline static constexpr unsigned int BaseLobby___c__DisplayClass16_0_TypeDefinitionIndex = 61486;

	class BaseLobby___c__DisplayClass16_0 : public ::System::Object
	{
	public:
		::RPG::Client::BaseLobby* __4__this; // 0x10
		::RPG::Client::Promises::Promise* startMatchPromise; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY___C__DISPLAYCLASS16_0__CTOR_OFFSET))(this);
		}

		::System::Void _StartMatchPromise_b__0(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY___C__DISPLAYCLASS16_0__STARTMATCHPROMISE_B__0_OFFSET))(this, a1, a2);
		}

		::System::Void _StartMatchPromise_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY___C__DISPLAYCLASS16_0__STARTMATCHPROMISE_B__1_OFFSET))(this);
		}
	};
}
