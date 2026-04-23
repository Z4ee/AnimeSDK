#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_A35B38E5F9115A76_2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_0C36FD2A7876DF8E;
class Class_1_F44C14232390EA84;
namespace RPG::Client { class LobbyModule; }
namespace System { class Action; }
namespace System { template <typename T> class Func_1; }

#define CLASS_1_F44C14232390EA84___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1295B180)
#define CLASS_1_F44C14232390EA84___C__DISPLAYCLASS3_0__TRYCREATEANDOPEN_B__0_OFFSET UNITYSDK_OFFSET(0x1295C2E0)
#define CLASS_1_F44C14232390EA84___C__DISPLAYCLASS3_0__TRYCREATEANDOPEN_B__2_OFFSET UNITYSDK_OFFSET(0x1295C4F0)
#define CLASS_1_F44C14232390EA84___C__DISPLAYCLASS3_0__TRYCREATEANDOPEN_G___CREATELOBBY_1_OFFSET UNITYSDK_OFFSET(0x1295C3C0)

inline static constexpr unsigned int Class_1_F44C14232390EA84___c__DisplayClass3_0_TypeDefinitionIndex = 60809;

class Class_1_F44C14232390EA84___c__DisplayClass3_0 : public ::System::Object
{
public:
	::RPG::Client::LobbyModule* lobbyModule; // 0x10
	::System::Func_1<::Class_1_0C36FD2A7876DF8E*>* extInfoGetter; // 0x18
	::Class_1_F44C14232390EA84* __4__this; // 0x20
	::System::Action* __9__2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F44C14232390EA84___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
	}

	::System::Void _TryCreateAndOpen_b__0(::System::ValueTuple_2<::System::Boolean, ::Enum_3_A35B38E5F9115A76_2> param)
	{
		return ((::System::Void(*)(::PVOID, ::System::ValueTuple_2<::System::Boolean, ::Enum_3_A35B38E5F9115A76_2>))((::PBYTE)hIl2Cpp + CLASS_1_F44C14232390EA84___C__DISPLAYCLASS3_0__TRYCREATEANDOPEN_B__0_OFFSET))(this, param);
	}

	::System::Void _TryCreateAndOpen_b__2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F44C14232390EA84___C__DISPLAYCLASS3_0__TRYCREATEANDOPEN_B__2_OFFSET))(this);
	}

	::System::Void _TryCreateAndOpen_g___CreateLobby_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F44C14232390EA84___C__DISPLAYCLASS3_0__TRYCREATEANDOPEN_G___CREATELOBBY_1_OFFSET))(this);
	}
};
