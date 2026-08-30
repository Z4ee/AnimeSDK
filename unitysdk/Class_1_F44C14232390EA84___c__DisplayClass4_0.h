#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_01618AD0437C8486_2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_7B005A18003A04C3;
class Class_1_F44C14232390EA84;
namespace RPG::Client { class BaseLobby; }
namespace RPG::Client { class LobbyModule; }
namespace System { template <typename T> class Func_1; }

#define CLASS_1_F44C14232390EA84___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18B76080)
#define CLASS_1_F44C14232390EA84___C__DISPLAYCLASS4_0__TRYJOINANDOPEN_B__0_OFFSET UNITYSDK_OFFSET(0x18B77320)
#define CLASS_1_F44C14232390EA84___C__DISPLAYCLASS4_0__TRYJOINANDOPEN_B__2_OFFSET UNITYSDK_OFFSET(0x18B77340)
#define CLASS_1_F44C14232390EA84___C__DISPLAYCLASS4_0__TRYJOINANDOPEN_B__3_OFFSET UNITYSDK_OFFSET(0x18B77380)
#define CLASS_1_F44C14232390EA84___C__DISPLAYCLASS4_0__TRYJOINANDOPEN_G__ONFETCHEDLOBBY_1_OFFSET UNITYSDK_OFFSET(0x18B76090)

inline static constexpr unsigned int Class_1_F44C14232390EA84___c__DisplayClass4_0_TypeDefinitionIndex = 66091;

class Class_1_F44C14232390EA84___c__DisplayClass4_0 : public ::System::Object
{
public:
	::Class_1_F44C14232390EA84* __4__this; // 0x10
	::RPG::Client::LobbyModule* lobbyModule; // 0x18
	::System::Func_1<::Class_1_7B005A18003A04C3*>* extInfoGetter; // 0x20
	::System::UInt64 lobbyID; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F44C14232390EA84___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
	}

	::System::Void _TryJoinAndOpen_b__0(::System::ValueTuple_2<::System::Boolean, ::Enum_3_01618AD0437C8486_2> a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::ValueTuple_2<::System::Boolean, ::Enum_3_01618AD0437C8486_2>))((::PBYTE)hIl2Cpp + CLASS_1_F44C14232390EA84___C__DISPLAYCLASS4_0__TRYJOINANDOPEN_B__0_OFFSET))(this, a1);
	}

	::System::Void _TryJoinAndOpen_g__OnFetchedLobby_1(::RPG::Client::BaseLobby* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseLobby*))((::PBYTE)hIl2Cpp + CLASS_1_F44C14232390EA84___C__DISPLAYCLASS4_0__TRYJOINANDOPEN_G__ONFETCHEDLOBBY_1_OFFSET))(this, a1);
	}

	::System::Void _TryJoinAndOpen_b__2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F44C14232390EA84___C__DISPLAYCLASS4_0__TRYJOINANDOPEN_B__2_OFFSET))(this);
	}

	::System::Void _TryJoinAndOpen_b__3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F44C14232390EA84___C__DISPLAYCLASS4_0__TRYJOINANDOPEN_B__3_OFFSET))(this);
	}
};
