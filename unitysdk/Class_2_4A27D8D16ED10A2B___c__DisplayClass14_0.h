#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0F1B992870941C13_1.h"
#include "unitysdk/System/Object.h"

class Class_1_C7A3189C9B32F559;
class Class_2_4A27D8D16ED10A2B;
namespace RPG::Client::Promises { class IPromise; }
namespace System { template <typename T> class Func_1; }

#define CLASS_2_4A27D8D16ED10A2B___C__DISPLAYCLASS14_0__CTOR_OFFSET UNITYSDK_OFFSET(0xD20EE80)
#define CLASS_2_4A27D8D16ED10A2B___C__DISPLAYCLASS14_0__TRYRECONNECTTOFIGHT_B__0_OFFSET UNITYSDK_OFFSET(0xD210FF0)
#define CLASS_2_4A27D8D16ED10A2B___C__DISPLAYCLASS14_0__TRYRECONNECTTOFIGHT_B__1_OFFSET UNITYSDK_OFFSET(0xD211190)
#define CLASS_2_4A27D8D16ED10A2B___C__DISPLAYCLASS14_0__TRYRECONNECTTOFIGHT_B__2_OFFSET UNITYSDK_OFFSET(0xD2111B0)
#define CLASS_2_4A27D8D16ED10A2B___C__DISPLAYCLASS14_0__TRYRECONNECTTOFIGHT_B__3_OFFSET UNITYSDK_OFFSET(0xD2111D0)

inline static constexpr unsigned int Class_2_4A27D8D16ED10A2B___c__DisplayClass14_0_TypeDefinitionIndex = 80269;

class Class_2_4A27D8D16ED10A2B___c__DisplayClass14_0 : public ::System::Object
{
public:
	::System::Func_1<::RPG::Client::Promises::IPromise*>* __9__2; // 0x10
	::System::Func_1<::RPG::Client::Promises::IPromise*>* __9__1; // 0x18
	::Class_1_C7A3189C9B32F559* session; // 0x20
	::Class_2_4A27D8D16ED10A2B* __4__this; // 0x28
	::System::Func_1<::RPG::Client::Promises::IPromise*>* __9__3; // 0x30
	::Enum_3_0F1B992870941C13_1 gameMode; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4A27D8D16ED10A2B___C__DISPLAYCLASS14_0__CTOR_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* _TryReconnectToFight_b__0(::System::Boolean a1)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_4A27D8D16ED10A2B___C__DISPLAYCLASS14_0__TRYRECONNECTTOFIGHT_B__0_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise* _TryReconnectToFight_b__1()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4A27D8D16ED10A2B___C__DISPLAYCLASS14_0__TRYRECONNECTTOFIGHT_B__1_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* _TryReconnectToFight_b__2()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4A27D8D16ED10A2B___C__DISPLAYCLASS14_0__TRYRECONNECTTOFIGHT_B__2_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* _TryReconnectToFight_b__3()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4A27D8D16ED10A2B___C__DISPLAYCLASS14_0__TRYRECONNECTTOFIGHT_B__3_OFFSET))(this);
	}
};
