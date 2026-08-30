#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_01618AD0437C8486_2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_AADBCF55B84BE104;
namespace RPG::Client { class BaseLobby; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace System { template <typename T> class Func_1; }

#define CLASS_1_AADBCF55B84BE104___C__DISPLAYCLASS25_0__CREATELOBBY_B__0_OFFSET UNITYSDK_OFFSET(0xB69F5E0)
#define CLASS_1_AADBCF55B84BE104___C__DISPLAYCLASS25_0__CREATELOBBY_B__1_OFFSET UNITYSDK_OFFSET(0xB69F710)
#define CLASS_1_AADBCF55B84BE104___C__DISPLAYCLASS25_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB69E480)

inline static constexpr unsigned int Class_1_AADBCF55B84BE104___c__DisplayClass25_0_TypeDefinitionIndex = 63123;

class Class_1_AADBCF55B84BE104___c__DisplayClass25_0 : public ::System::Object
{
public:
	::Class_1_AADBCF55B84BE104* __4__this; // 0x10
	::System::Func_1<::RPG::Client::Promises::IPromise_1<::RPG::Client::BaseLobby*>*>* __9__1; // 0x18
	::System::UInt32 fieldID; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AADBCF55B84BE104___C__DISPLAYCLASS25_0__CTOR_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise_1<::RPG::Client::BaseLobby*>* _CreateLobby_b__0(::System::ValueTuple_2<::System::Boolean, ::Enum_3_01618AD0437C8486_2> a1)
	{
		return ((::RPG::Client::Promises::IPromise_1<::RPG::Client::BaseLobby*>*(*)(::PVOID, ::System::ValueTuple_2<::System::Boolean, ::Enum_3_01618AD0437C8486_2>))((::PBYTE)hIl2Cpp + CLASS_1_AADBCF55B84BE104___C__DISPLAYCLASS25_0__CREATELOBBY_B__0_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise_1<::RPG::Client::BaseLobby*>* _CreateLobby_b__1()
	{
		return ((::RPG::Client::Promises::IPromise_1<::RPG::Client::BaseLobby*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AADBCF55B84BE104___C__DISPLAYCLASS25_0__CREATELOBBY_B__1_OFFSET))(this);
	}
};
