#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C7A3189C9B32F559;
class Class_2_4A27D8D16ED10A2B;
namespace RPG::Client { class BaseLobby; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace System { class Exception; }
namespace System { template <typename T> class Action_1; }

#define CLASS_2_4A27D8D16ED10A2B___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0xD28C050)
#define CLASS_2_4A27D8D16ED10A2B___C__DISPLAYCLASS5_0___DOJOINLOBBY_B__0_OFFSET UNITYSDK_OFFSET(0xD2913E0)
#define CLASS_2_4A27D8D16ED10A2B___C__DISPLAYCLASS5_0___DOJOINLOBBY_B__1_OFFSET UNITYSDK_OFFSET(0xD291490)
#define CLASS_2_4A27D8D16ED10A2B___C__DISPLAYCLASS5_0___DOJOINLOBBY_B__2_OFFSET UNITYSDK_OFFSET(0xD291750)

inline static constexpr unsigned int Class_2_4A27D8D16ED10A2B___c__DisplayClass5_0_TypeDefinitionIndex = 78951;

class Class_2_4A27D8D16ED10A2B___c__DisplayClass5_0 : public ::System::Object
{
public:
	::Class_2_4A27D8D16ED10A2B* __4__this; // 0x10
	::System::Action_1<::System::Exception*>* __9__2; // 0x18
	::Class_1_C7A3189C9B32F559* session; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4A27D8D16ED10A2B___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise_1<::RPG::Client::BaseLobby*>* __DoJoinLobby_b__0(::RPG::Client::BaseLobby* a1)
	{
		return ((::RPG::Client::Promises::IPromise_1<::RPG::Client::BaseLobby*>*(*)(::PVOID, ::RPG::Client::BaseLobby*))((::PBYTE)hIl2Cpp + CLASS_2_4A27D8D16ED10A2B___C__DISPLAYCLASS5_0___DOJOINLOBBY_B__0_OFFSET))(this, a1);
	}

	::System::Void __DoJoinLobby_b__1(::System::Exception* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + CLASS_2_4A27D8D16ED10A2B___C__DISPLAYCLASS5_0___DOJOINLOBBY_B__1_OFFSET))(this, a1);
	}

	::System::Void __DoJoinLobby_b__2(::System::Exception* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + CLASS_2_4A27D8D16ED10A2B___C__DISPLAYCLASS5_0___DOJOINLOBBY_B__2_OFFSET))(this, a1);
	}
};
