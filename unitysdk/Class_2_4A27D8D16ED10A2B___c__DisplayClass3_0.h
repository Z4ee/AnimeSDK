#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C7A3189C9B32F559;
class Class_2_4A27D8D16ED10A2B;
namespace RPG::Client { class BaseLobby; }
namespace System { class Exception; }
namespace System { template <typename T> class Action_1; }

#define CLASS_2_4A27D8D16ED10A2B___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0xBC44750)
#define CLASS_2_4A27D8D16ED10A2B___C__DISPLAYCLASS3_0___DOCREATELOBBY_B__0_OFFSET UNITYSDK_OFFSET(0xBC49D00)
#define CLASS_2_4A27D8D16ED10A2B___C__DISPLAYCLASS3_0___DOCREATELOBBY_B__1_OFFSET UNITYSDK_OFFSET(0xBC49EA0)

inline static constexpr unsigned int Class_2_4A27D8D16ED10A2B___c__DisplayClass3_0_TypeDefinitionIndex = 73750;

class Class_2_4A27D8D16ED10A2B___c__DisplayClass3_0 : public ::System::Object
{
public:
	::Class_1_C7A3189C9B32F559* session; // 0x10
	::System::Action_1<::System::Exception*>* __9__1; // 0x18
	::Class_2_4A27D8D16ED10A2B* __4__this; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4A27D8D16ED10A2B___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
	}

	::RPG::Client::BaseLobby* __DoCreateLobby_b__0(::System::Exception* a1)
	{
		return ((::RPG::Client::BaseLobby*(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + CLASS_2_4A27D8D16ED10A2B___C__DISPLAYCLASS3_0___DOCREATELOBBY_B__0_OFFSET))(this, a1);
	}

	::System::Void __DoCreateLobby_b__1(::System::Exception* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + CLASS_2_4A27D8D16ED10A2B___C__DISPLAYCLASS3_0___DOCREATELOBBY_B__1_OFFSET))(this, a1);
	}
};
