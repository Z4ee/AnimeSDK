#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_A143022D1701BC76.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_322;
class Class_2_E08C4A9CFB467C17;

#define CLASS_2_E08C4A9CFB467C17___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0xBF3FA50)
#define CLASS_2_E08C4A9CFB467C17___C__DISPLAYCLASS3_0__MAINASYNC_B__0_OFFSET UNITYSDK_OFFSET(0xBF3FA60)

inline static constexpr unsigned int Class_2_E08C4A9CFB467C17___c__DisplayClass3_0_TypeDefinitionIndex = 46155;

class Class_2_E08C4A9CFB467C17___c__DisplayClass3_0 : public ::System::Object
{
public:
	::Class_2_E08C4A9CFB467C17* __4__this; // 0x10
	::Class_0_16E4307DCC419505_322* container; // 0x18
	::Struct_2_A143022D1701BC76 startNode; // 0x20
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
