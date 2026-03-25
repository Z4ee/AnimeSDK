#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class BaseLobby; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_F44C14232390EA84___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x10562430)
#define CLASS_1_F44C14232390EA84___C__CTOR_OFFSET UNITYSDK_OFFSET(0x10562470)
#define CLASS_1_F44C14232390EA84___C___BEGINJOINLOBBY_B__7_0_OFFSET UNITYSDK_OFFSET(0x10562480)

inline static constexpr unsigned int Class_1_F44C14232390EA84___c_TypeDefinitionIndex = 53664;

class Class_1_F44C14232390EA84___c : public ::System::Object
{
public:
	static ::Class_1_F44C14232390EA84___c** StaticGet___9()
	{
		return (::Class_1_F44C14232390EA84___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F44C14232390EA84___c_TypeDefinitionIndex)->GetStaticField(0x27350);
	}
	static ::System::Func_2<::RPG::Client::BaseLobby*, ::RPG::Client::BaseLobby*>** StaticGet___9__7_0()
	{
		return (::System::Func_2<::RPG::Client::BaseLobby*, ::RPG::Client::BaseLobby*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F44C14232390EA84___c_TypeDefinitionIndex)->GetStaticField(0x27358);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F44C14232390EA84___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F44C14232390EA84___C__CTOR_OFFSET))(this);
	}

	::RPG::Client::BaseLobby* __BeginJoinLobby_b__7_0(::RPG::Client::BaseLobby* newLobby)
	{
		return ((::RPG::Client::BaseLobby*(*)(::PVOID, ::RPG::Client::BaseLobby*))((::PBYTE)hIl2Cpp + CLASS_1_F44C14232390EA84___C___BEGINJOINLOBBY_B__7_0_OFFSET))(this, newLobby);
	}
};
