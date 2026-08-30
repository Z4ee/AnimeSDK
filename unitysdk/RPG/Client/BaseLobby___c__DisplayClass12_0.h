#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class BaseLobby; }
namespace RPG::Client::Promises { class Promise; }

#define RPG_CLIENT_BASELOBBY___C__DISPLAYCLASS12_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19F15230)
#define RPG_CLIENT_BASELOBBY___C__DISPLAYCLASS12_0___DOINVITEPROMISE_B__0_OFFSET UNITYSDK_OFFSET(0x19F18D60)
#define RPG_CLIENT_BASELOBBY___C__DISPLAYCLASS12_0___DOINVITEPROMISE_B__1_OFFSET UNITYSDK_OFFSET(0x19F18D90)

namespace RPG::Client
{
	inline static constexpr unsigned int BaseLobby___c__DisplayClass12_0_TypeDefinitionIndex = 65832;

	class BaseLobby___c__DisplayClass12_0 : public ::System::Object
	{
	public:
		::RPG::Client::BaseLobby* __4__this; // 0x10
		::RPG::Client::Promises::Promise* invitePromise; // 0x18
		::System::UInt32 uid; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY___C__DISPLAYCLASS12_0__CTOR_OFFSET))(this);
		}

		::System::Void __DoInvitePromise_b__0(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY___C__DISPLAYCLASS12_0___DOINVITEPROMISE_B__0_OFFSET))(this, a1, a2);
		}

		::System::Void __DoInvitePromise_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY___C__DISPLAYCLASS12_0___DOINVITEPROMISE_B__1_OFFSET))(this);
		}
	};
}
