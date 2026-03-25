#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_35379441886C7D20;
class Class_1_F44C14232390EA84;
namespace RPG::Client { class BaseLobby; }
namespace RPG::Client { class LobbyModule; }
namespace System { template <typename T> class Func_1; }

#define CLASS_1_F44C14232390EA84___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0x10561600)
#define CLASS_1_F44C14232390EA84___C__DISPLAYCLASS4_0__TRYJOINANDOPEN_B__1_OFFSET UNITYSDK_OFFSET(0x10562850)
#define CLASS_1_F44C14232390EA84___C__DISPLAYCLASS4_0__TRYJOINANDOPEN_G__ONFETCHEDLOBBY_0_OFFSET UNITYSDK_OFFSET(0x10561610)

inline static constexpr unsigned int Class_1_F44C14232390EA84___c__DisplayClass4_0_TypeDefinitionIndex = 53666;

class Class_1_F44C14232390EA84___c__DisplayClass4_0 : public ::System::Object
{
public:
	::Class_1_F44C14232390EA84* __4__this; // 0x10
	::RPG::Client::LobbyModule* lobbyModule; // 0x18
	::System::Func_1<::Class_1_35379441886C7D20*>* extInfoGetter; // 0x20
	::System::UInt64 lobbyID; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F44C14232390EA84___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
	}

	::System::Void _TryJoinAndOpen_g__OnFetchedLobby_0(::RPG::Client::BaseLobby* lobby)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseLobby*))((::PBYTE)hIl2Cpp + CLASS_1_F44C14232390EA84___C__DISPLAYCLASS4_0__TRYJOINANDOPEN_G__ONFETCHEDLOBBY_0_OFFSET))(this, lobby);
	}

	::System::Void _TryJoinAndOpen_b__1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F44C14232390EA84___C__DISPLAYCLASS4_0__TRYJOINANDOPEN_B__1_OFFSET))(this);
	}
};
