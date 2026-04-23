#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class BaseLobby; }
namespace RPG::Client::Promises { class Promise; }

#define RPG_CLIENT_BASELOBBY___C__DISPLAYCLASS9_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9DD58D0)
#define RPG_CLIENT_BASELOBBY___C__DISPLAYCLASS9_0__KICKOUTPROMISE_B__0_OFFSET UNITYSDK_OFFSET(0x9DD95B0)
#define RPG_CLIENT_BASELOBBY___C__DISPLAYCLASS9_0__KICKOUTPROMISE_B__1_OFFSET UNITYSDK_OFFSET(0x9DD95E0)

namespace RPG::Client
{
	inline static constexpr unsigned int BaseLobby___c__DisplayClass9_0_TypeDefinitionIndex = 60554;

	class BaseLobby___c__DisplayClass9_0 : public ::System::Object
	{
	public:
		::RPG::Client::Promises::Promise* kickOutPromise; // 0x10
		::RPG::Client::BaseLobby* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY___C__DISPLAYCLASS9_0__CTOR_OFFSET))(this);
		}

		::System::Void _KickOutPromise_b__0(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY___C__DISPLAYCLASS9_0__KICKOUTPROMISE_B__0_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _KickOutPromise_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY___C__DISPLAYCLASS9_0__KICKOUTPROMISE_B__1_OFFSET))(this);
		}
	};
}
