#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_7250B7BB9413AA62.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_301;
class Class_2_E08C4A9CFB467C17;

#define CLASS_2_E08C4A9CFB467C17___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0x88A5720)
#define CLASS_2_E08C4A9CFB467C17___C__DISPLAYCLASS3_0__MAINASYNC_B__0_OFFSET UNITYSDK_OFFSET(0x88A5730)

inline static constexpr unsigned int Class_2_E08C4A9CFB467C17___c__DisplayClass3_0_TypeDefinitionIndex = 39663;

class Class_2_E08C4A9CFB467C17___c__DisplayClass3_0 : public ::System::Object
{
public:
	::Struct_2_7250B7BB9413AA62 goalNode; // 0x10
	::Class_0_16E4307DCC419505_301* container; // 0x20
	::Class_2_E08C4A9CFB467C17* __4__this; // 0x28
	::Struct_2_7250B7BB9413AA62 startNode; // 0x30
	::System::Single H; // 0x40
	::System::Single G; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E08C4A9CFB467C17___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
	}

	::System::Void _MainAsync_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E08C4A9CFB467C17___C__DISPLAYCLASS3_0__MAINASYNC_B__0_OFFSET))(this);
	}
};
