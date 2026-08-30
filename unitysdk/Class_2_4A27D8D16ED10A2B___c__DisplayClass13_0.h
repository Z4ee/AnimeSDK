#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_01618AD0437C8486_2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_C7A3189C9B32F559;
class Class_2_4A27D8D16ED10A2B;
namespace RPG::Client::Promises { class IPromise; }
namespace System { class Exception; }
namespace System { template <typename T> class Func_1; }

#define CLASS_2_4A27D8D16ED10A2B___C__DISPLAYCLASS13_0__CHECKRECONNECTTOFIGHT_B__0_OFFSET UNITYSDK_OFFSET(0x16E45210)
#define CLASS_2_4A27D8D16ED10A2B___C__DISPLAYCLASS13_0__CHECKRECONNECTTOFIGHT_B__1_OFFSET UNITYSDK_OFFSET(0x16E453F0)
#define CLASS_2_4A27D8D16ED10A2B___C__DISPLAYCLASS13_0__CHECKRECONNECTTOFIGHT_B__3_OFFSET UNITYSDK_OFFSET(0x16E45390)
#define CLASS_2_4A27D8D16ED10A2B___C__DISPLAYCLASS13_0__CHECKRECONNECTTOFIGHT_B__5_OFFSET UNITYSDK_OFFSET(0x16E453B0)
#define CLASS_2_4A27D8D16ED10A2B___C__DISPLAYCLASS13_0__CHECKRECONNECTTOFIGHT_B__7_OFFSET UNITYSDK_OFFSET(0x16E453D0)
#define CLASS_2_4A27D8D16ED10A2B___C__DISPLAYCLASS13_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16E436C0)

inline static constexpr unsigned int Class_2_4A27D8D16ED10A2B___c__DisplayClass13_0_TypeDefinitionIndex = 78943;

class Class_2_4A27D8D16ED10A2B___c__DisplayClass13_0 : public ::System::Object
{
public:
	::Class_1_C7A3189C9B32F559* session; // 0x10
	::System::Func_1<::RPG::Client::Promises::IPromise*>* __9__5; // 0x18
	::Class_2_4A27D8D16ED10A2B* __4__this; // 0x20
	::System::Func_1<::RPG::Client::Promises::IPromise*>* __9__7; // 0x28
	::System::Func_1<::RPG::Client::Promises::IPromise*>* __9__3; // 0x30
	::Enum_3_01618AD0437C8486_2 gameMode; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4A27D8D16ED10A2B___C__DISPLAYCLASS13_0__CTOR_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* _CheckReconnectToFight_b__0(::System::ValueTuple_2<::System::Boolean, ::Enum_3_01618AD0437C8486_2> a1)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::ValueTuple_2<::System::Boolean, ::Enum_3_01618AD0437C8486_2>))((::PBYTE)hIl2Cpp + CLASS_2_4A27D8D16ED10A2B___C__DISPLAYCLASS13_0__CHECKRECONNECTTOFIGHT_B__0_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise* _CheckReconnectToFight_b__3()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4A27D8D16ED10A2B___C__DISPLAYCLASS13_0__CHECKRECONNECTTOFIGHT_B__3_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* _CheckReconnectToFight_b__5()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4A27D8D16ED10A2B___C__DISPLAYCLASS13_0__CHECKRECONNECTTOFIGHT_B__5_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* _CheckReconnectToFight_b__7()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4A27D8D16ED10A2B___C__DISPLAYCLASS13_0__CHECKRECONNECTTOFIGHT_B__7_OFFSET))(this);
	}

	::System::Void _CheckReconnectToFight_b__1(::System::Exception* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + CLASS_2_4A27D8D16ED10A2B___C__DISPLAYCLASS13_0__CHECKRECONNECTTOFIGHT_B__1_OFFSET))(this, a1);
	}
};
