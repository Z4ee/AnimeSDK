#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_4A27D8D16ED10A2B;
namespace RPG::Client { class BaseLobby; }
namespace RPG::Client::Promises { class Promise; }
namespace System { class Exception; }

#define CLASS_2_4A27D8D16ED10A2B___C__DISPLAYCLASS23_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16E444F0)
#define CLASS_2_4A27D8D16ED10A2B___C__DISPLAYCLASS23_0___REFRESHANDSYNCLOBBYSTATE_B__0_OFFSET UNITYSDK_OFFSET(0x16E45F90)
#define CLASS_2_4A27D8D16ED10A2B___C__DISPLAYCLASS23_0___REFRESHANDSYNCLOBBYSTATE_B__1_OFFSET UNITYSDK_OFFSET(0x16E46010)

inline static constexpr unsigned int Class_2_4A27D8D16ED10A2B___c__DisplayClass23_0_TypeDefinitionIndex = 78946;

class Class_2_4A27D8D16ED10A2B___c__DisplayClass23_0 : public ::System::Object
{
public:
	::RPG::Client::Promises::Promise* activeRefreshFallback; // 0x10
	::RPG::Client::Promises::Promise* lobbyStopGamingPromise; // 0x18
	::Class_2_4A27D8D16ED10A2B* __4__this; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4A27D8D16ED10A2B___C__DISPLAYCLASS23_0__CTOR_OFFSET))(this);
	}

	::System::Void __RefreshAndSyncLobbyState_b__0(::RPG::Client::BaseLobby* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseLobby*))((::PBYTE)hIl2Cpp + CLASS_2_4A27D8D16ED10A2B___C__DISPLAYCLASS23_0___REFRESHANDSYNCLOBBYSTATE_B__0_OFFSET))(this, a1);
	}

	::System::Void __RefreshAndSyncLobbyState_b__1(::System::Exception* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + CLASS_2_4A27D8D16ED10A2B___C__DISPLAYCLASS23_0___REFRESHANDSYNCLOBBYSTATE_B__1_OFFSET))(this, a1);
	}
};
