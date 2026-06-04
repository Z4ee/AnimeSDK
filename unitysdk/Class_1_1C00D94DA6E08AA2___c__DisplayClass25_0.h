#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_A35B38E5F9115A76_2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_1C00D94DA6E08AA2;
namespace RPG::Client { class BaseLobby; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace System { template <typename T> class Func_1; }

#define CLASS_1_1C00D94DA6E08AA2___C__DISPLAYCLASS25_0__CREATELOBBY_B__0_OFFSET UNITYSDK_OFFSET(0x1460F650)
#define CLASS_1_1C00D94DA6E08AA2___C__DISPLAYCLASS25_0__CREATELOBBY_B__1_OFFSET UNITYSDK_OFFSET(0x1460F780)
#define CLASS_1_1C00D94DA6E08AA2___C__DISPLAYCLASS25_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1460E7F0)

inline static constexpr unsigned int Class_1_1C00D94DA6E08AA2___c__DisplayClass25_0_TypeDefinitionIndex = 59004;

class Class_1_1C00D94DA6E08AA2___c__DisplayClass25_0 : public ::System::Object
{
public:
	::Class_1_1C00D94DA6E08AA2* __4__this; // 0x10
	::System::Func_1<::RPG::Client::Promises::IPromise_1<::RPG::Client::BaseLobby*>*>* __9__1; // 0x18
	::System::UInt32 fieldID; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1C00D94DA6E08AA2___C__DISPLAYCLASS25_0__CTOR_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise_1<::RPG::Client::BaseLobby*>* _CreateLobby_b__0(::System::ValueTuple_2<::System::Boolean, ::Enum_3_A35B38E5F9115A76_2> a1)
	{
		return ((::RPG::Client::Promises::IPromise_1<::RPG::Client::BaseLobby*>*(*)(::PVOID, ::System::ValueTuple_2<::System::Boolean, ::Enum_3_A35B38E5F9115A76_2>))((::PBYTE)hIl2Cpp + CLASS_1_1C00D94DA6E08AA2___C__DISPLAYCLASS25_0__CREATELOBBY_B__0_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise_1<::RPG::Client::BaseLobby*>* _CreateLobby_b__1()
	{
		return ((::RPG::Client::Promises::IPromise_1<::RPG::Client::BaseLobby*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1C00D94DA6E08AA2___C__DISPLAYCLASS25_0__CREATELOBBY_B__1_OFFSET))(this);
	}
};
