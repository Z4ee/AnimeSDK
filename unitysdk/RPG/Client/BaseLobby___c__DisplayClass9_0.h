#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class BaseLobby; }
namespace RPG::Client::Promises { class Promise; }

#define RPG_CLIENT_BASELOBBY___C__DISPLAYCLASS9_0__CTOR_OFFSET UNITYSDK_OFFSET(0xC8C8460)
#define RPG_CLIENT_BASELOBBY___C__DISPLAYCLASS9_0__KICKOUTPROMISE_B__0_OFFSET UNITYSDK_OFFSET(0xC8CC7A0)
#define RPG_CLIENT_BASELOBBY___C__DISPLAYCLASS9_0__KICKOUTPROMISE_B__1_OFFSET UNITYSDK_OFFSET(0xC8CC7D0)

namespace RPG::Client
{
	inline static constexpr unsigned int BaseLobby___c__DisplayClass9_0_TypeDefinitionIndex = 65835;

	class BaseLobby___c__DisplayClass9_0 : public ::System::Object
	{
	public:
		::RPG::Client::Promises::Promise* kickOutPromise; // 0x10
		::RPG::Client::BaseLobby* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY___C__DISPLAYCLASS9_0__CTOR_OFFSET))(this);
		}

		::System::Void _KickOutPromise_b__0(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY___C__DISPLAYCLASS9_0__KICKOUTPROMISE_B__0_OFFSET))(this, a1, a2);
		}

		::System::Void _KickOutPromise_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY___C__DISPLAYCLASS9_0__KICKOUTPROMISE_B__1_OFFSET))(this);
		}
	};
}
