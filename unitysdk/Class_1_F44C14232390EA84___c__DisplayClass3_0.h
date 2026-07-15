#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_01618AD0437C8486_2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_7B005A18003A04C3;
class Class_1_F44C14232390EA84;
namespace RPG::Client { class LobbyModule; }
namespace System { class Action; }
namespace System { template <typename T> class Func_1; }

#define CLASS_1_F44C14232390EA84___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16CA0D50)
#define CLASS_1_F44C14232390EA84___C__DISPLAYCLASS3_0__TRYCREATEANDOPEN_B__0_OFFSET UNITYSDK_OFFSET(0x16CA2090)
#define CLASS_1_F44C14232390EA84___C__DISPLAYCLASS3_0__TRYCREATEANDOPEN_B__2_OFFSET UNITYSDK_OFFSET(0x16CA22C0)
#define CLASS_1_F44C14232390EA84___C__DISPLAYCLASS3_0__TRYCREATEANDOPEN_G___CREATELOBBY_1_OFFSET UNITYSDK_OFFSET(0x16CA2170)

inline static constexpr unsigned int Class_1_F44C14232390EA84___c__DisplayClass3_0_TypeDefinitionIndex = 63105;

class Class_1_F44C14232390EA84___c__DisplayClass3_0 : public ::System::Object
{
public:
	::System::Func_1<::Class_1_7B005A18003A04C3*>* extInfoGetter; // 0x10
	::RPG::Client::LobbyModule* lobbyModule; // 0x18
	::Class_1_F44C14232390EA84* __4__this; // 0x20
	::System::Action* __9__2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F44C14232390EA84___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
	}

	::System::Void _TryCreateAndOpen_b__0(::System::ValueTuple_2<::System::Boolean, ::Enum_3_01618AD0437C8486_2> a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::ValueTuple_2<::System::Boolean, ::Enum_3_01618AD0437C8486_2>))((::PBYTE)hIl2Cpp + CLASS_1_F44C14232390EA84___C__DISPLAYCLASS3_0__TRYCREATEANDOPEN_B__0_OFFSET))(this, a1);
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
