#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0F1B992870941C13_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_7B005A18003A04C3;
class Class_1_C7A3189C9B32F559;
class Class_2_4A27D8D16ED10A2B;
namespace RPG::Client { class BaseLobby; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace System { template <typename T> class Func_1; }

#define CLASS_2_4A27D8D16ED10A2B___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0xD205180)
#define CLASS_2_4A27D8D16ED10A2B___C__DISPLAYCLASS4_0__JOINLOBBY_B__0_OFFSET UNITYSDK_OFFSET(0xD20A5C0)
#define CLASS_2_4A27D8D16ED10A2B___C__DISPLAYCLASS4_0__JOINLOBBY_B__1_OFFSET UNITYSDK_OFFSET(0xD20A6E0)

inline static constexpr unsigned int Class_2_4A27D8D16ED10A2B___c__DisplayClass4_0_TypeDefinitionIndex = 80272;

class Class_2_4A27D8D16ED10A2B___c__DisplayClass4_0 : public ::System::Object
{
public:
	::Class_2_4A27D8D16ED10A2B* __4__this; // 0x10
	::Class_1_7B005A18003A04C3* extInfo; // 0x18
	::System::Func_1<::RPG::Client::Promises::IPromise_1<::RPG::Client::BaseLobby*>*>* __9__1; // 0x20
	::Class_1_C7A3189C9B32F559* session; // 0x28
	::System::UInt64 lobbyID; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4A27D8D16ED10A2B___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise_1<::RPG::Client::BaseLobby*>* _JoinLobby_b__0(::System::ValueTuple_2<::System::Boolean, ::Enum_3_0F1B992870941C13_1> a1)
	{
		return ((::RPG::Client::Promises::IPromise_1<::RPG::Client::BaseLobby*>*(*)(::PVOID, ::System::ValueTuple_2<::System::Boolean, ::Enum_3_0F1B992870941C13_1>))((::PBYTE)hIl2Cpp + CLASS_2_4A27D8D16ED10A2B___C__DISPLAYCLASS4_0__JOINLOBBY_B__0_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise_1<::RPG::Client::BaseLobby*>* _JoinLobby_b__1()
	{
		return ((::RPG::Client::Promises::IPromise_1<::RPG::Client::BaseLobby*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4A27D8D16ED10A2B___C__DISPLAYCLASS4_0__JOINLOBBY_B__1_OFFSET))(this);
	}
};
