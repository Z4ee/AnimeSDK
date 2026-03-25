#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class BaseLobby; }

#define RPG_CLIENT_BASELOBBY___C__DISPLAYCLASS9_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9173DB0)
#define RPG_CLIENT_BASELOBBY___C__DISPLAYCLASS9_0__INVITE_B__0_OFFSET UNITYSDK_OFFSET(0x9176800)

namespace RPG::Client
{
	inline static constexpr unsigned int BaseLobby___c__DisplayClass9_0_TypeDefinitionIndex = 53410;

	class BaseLobby___c__DisplayClass9_0 : public ::System::Object
	{
	public:
		::RPG::Client::BaseLobby* __4__this; // 0x10
		::System::UInt32 uid; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY___C__DISPLAYCLASS9_0__CTOR_OFFSET))(this);
		}

		::System::Void _Invite_b__0(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY___C__DISPLAYCLASS9_0__INVITE_B__0_OFFSET))(this, cmd, rspObject);
		}
	};
}
