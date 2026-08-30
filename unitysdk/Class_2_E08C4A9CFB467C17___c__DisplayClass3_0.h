#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_A143022D1701BC76.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_365;
class Class_2_E08C4A9CFB467C17;

#define CLASS_2_E08C4A9CFB467C17___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0xD2629C0)
#define CLASS_2_E08C4A9CFB467C17___C__DISPLAYCLASS3_0__MAINASYNC_B__0_OFFSET UNITYSDK_OFFSET(0xD2629D0)

inline static constexpr unsigned int Class_2_E08C4A9CFB467C17___c__DisplayClass3_0_TypeDefinitionIndex = 49357;

class Class_2_E08C4A9CFB467C17___c__DisplayClass3_0 : public ::System::Object
{
public:
	::Struct_2_A143022D1701BC76 startNode; // 0x10
	::Class_2_E08C4A9CFB467C17* __4__this; // 0x20
	::Class_0_16E4307DCC419505_365* container; // 0x28
	::Struct_2_A143022D1701BC76 goalNode; // 0x30
	::System::Single G; // 0x40
	::System::Single H; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E08C4A9CFB467C17___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
	}

	::System::Void _MainAsync_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E08C4A9CFB467C17___C__DISPLAYCLASS3_0__MAINASYNC_B__0_OFFSET))(this);
	}
};
