#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_06E38C65842C3B24;
class Class_1_26F63603FB4C7E16;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_26F63603FB4C7E16___C__DISPLAYCLASS6_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18091700)
#define CLASS_1_26F63603FB4C7E16___C__DISPLAYCLASS6_0__SUBSCRIBEISOPEN_B__0_OFFSET UNITYSDK_OFFSET(0x180920E0)
#define CLASS_1_26F63603FB4C7E16___C__DISPLAYCLASS6_0__SUBSCRIBEISOPEN_B__1_OFFSET UNITYSDK_OFFSET(0x18092140)

inline static constexpr unsigned int Class_1_26F63603FB4C7E16___c__DisplayClass6_0_TypeDefinitionIndex = 80179;

class Class_1_26F63603FB4C7E16___c__DisplayClass6_0 : public ::System::Object
{
public:
	::System::Action* callback; // 0x10
	::Class_1_06E38C65842C3B24* tierce; // 0x18
	::Class_1_26F63603FB4C7E16* __4__this; // 0x20
	::System::Action_1<::System::UInt32>* observing; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_26F63603FB4C7E16___C__DISPLAYCLASS6_0__CTOR_OFFSET))(this);
	}

	::System::Void _SubscribeIsOpen_b__0(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_26F63603FB4C7E16___C__DISPLAYCLASS6_0__SUBSCRIBEISOPEN_B__0_OFFSET))(this, a1);
	}

	::System::Void _SubscribeIsOpen_b__1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_26F63603FB4C7E16___C__DISPLAYCLASS6_0__SUBSCRIBEISOPEN_B__1_OFFSET))(this);
	}
};
