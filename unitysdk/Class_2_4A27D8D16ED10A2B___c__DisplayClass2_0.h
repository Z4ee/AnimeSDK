#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_01618AD0437C8486_2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_1DD6AC150642D284;
class Class_1_7B005A18003A04C3;
class Class_1_C7A3189C9B32F559;
class Class_2_4A27D8D16ED10A2B;
namespace RPG::Client { class BaseLobby; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace System { template <typename T> class Func_1; }

#define CLASS_2_4A27D8D16ED10A2B___C__DISPLAYCLASS2_0__CREATELOBBY_B__0_OFFSET UNITYSDK_OFFSET(0xBFD2910)
#define CLASS_2_4A27D8D16ED10A2B___C__DISPLAYCLASS2_0__CREATELOBBY_B__1_OFFSET UNITYSDK_OFFSET(0xBFD2A30)
#define CLASS_2_4A27D8D16ED10A2B___C__DISPLAYCLASS2_0__CTOR_OFFSET UNITYSDK_OFFSET(0xBFCD1A0)

inline static constexpr unsigned int Class_2_4A27D8D16ED10A2B___c__DisplayClass2_0_TypeDefinitionIndex = 75400;

class Class_2_4A27D8D16ED10A2B___c__DisplayClass2_0 : public ::System::Object
{
public:
	::Class_1_C7A3189C9B32F559* session; // 0x10
	::Class_1_7B005A18003A04C3* extInfo; // 0x18
	::Class_2_4A27D8D16ED10A2B* __4__this; // 0x20
	::Class_1_1DD6AC150642D284* roomExtInfo; // 0x28
	::System::Func_1<::RPG::Client::Promises::IPromise_1<::RPG::Client::BaseLobby*>*>* __9__1; // 0x30
	::System::UInt32 createParam; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4A27D8D16ED10A2B___C__DISPLAYCLASS2_0__CTOR_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise_1<::RPG::Client::BaseLobby*>* _CreateLobby_b__0(::System::ValueTuple_2<::System::Boolean, ::Enum_3_01618AD0437C8486_2> a1)
	{
		return ((::RPG::Client::Promises::IPromise_1<::RPG::Client::BaseLobby*>*(*)(::PVOID, ::System::ValueTuple_2<::System::Boolean, ::Enum_3_01618AD0437C8486_2>))((::PBYTE)hIl2Cpp + CLASS_2_4A27D8D16ED10A2B___C__DISPLAYCLASS2_0__CREATELOBBY_B__0_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise_1<::RPG::Client::BaseLobby*>* _CreateLobby_b__1()
	{
		return ((::RPG::Client::Promises::IPromise_1<::RPG::Client::BaseLobby*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4A27D8D16ED10A2B___C__DISPLAYCLASS2_0__CREATELOBBY_B__1_OFFSET))(this);
	}
};
