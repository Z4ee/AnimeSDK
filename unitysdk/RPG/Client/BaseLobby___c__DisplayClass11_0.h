#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class BaseLobby; }
namespace RPG::Client::Promises { class IPromise; }

#define RPG_CLIENT_BASELOBBY___C__DISPLAYCLASS11_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9DD5A20)
#define RPG_CLIENT_BASELOBBY___C__DISPLAYCLASS11_0__INVITEPROMISE_B__0_OFFSET UNITYSDK_OFFSET(0x9DD9220)

namespace RPG::Client
{
	inline static constexpr unsigned int BaseLobby___c__DisplayClass11_0_TypeDefinitionIndex = 60550;

	class BaseLobby___c__DisplayClass11_0 : public ::System::Object
	{
	public:
		::RPG::Client::BaseLobby* __4__this; // 0x10
		::System::UInt32 uid; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY___C__DISPLAYCLASS11_0__CTOR_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _InvitePromise_b__0()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY___C__DISPLAYCLASS11_0__INVITEPROMISE_B__0_OFFSET))(this);
		}
	};
}
