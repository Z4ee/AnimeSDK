#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_A7993FD8B166AE9B;
class Class_1_AF312BD3F30375EA;
class Class_2_9C6E272E2C8F4E2F;

#define CLASS_1_A7993FD8B166AE9B___C__DISPLAYCLASS2_0__CTOR_OFFSET UNITYSDK_OFFSET(0xBAC6F20)
#define CLASS_1_A7993FD8B166AE9B___C__DISPLAYCLASS2_0__POSTEVENT_B__0_OFFSET UNITYSDK_OFFSET(0xBAC7B80)

inline static constexpr unsigned int Class_1_A7993FD8B166AE9B___c__DisplayClass2_0_TypeDefinitionIndex = 76951;

class Class_1_A7993FD8B166AE9B___c__DisplayClass2_0 : public ::System::Object
{
public:
	::Class_1_AF312BD3F30375EA* evt; // 0x10
	::Class_2_9C6E272E2C8F4E2F* context; // 0x18
	::Class_1_A7993FD8B166AE9B* __4__this; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A7993FD8B166AE9B___C__DISPLAYCLASS2_0__CTOR_OFFSET))(this);
	}

	::System::Void _PostEvent_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A7993FD8B166AE9B___C__DISPLAYCLASS2_0__POSTEVENT_B__0_OFFSET))(this);
	}
};
