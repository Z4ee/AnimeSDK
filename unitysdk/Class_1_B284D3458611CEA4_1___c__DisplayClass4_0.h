#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1129;

#define CLASS_1_B284D3458611CEA4_1___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16FBE980)
#define CLASS_1_B284D3458611CEA4_1___C__DISPLAYCLASS4_0__GETICONDATALIST_B__0_OFFSET UNITYSDK_OFFSET(0x16FBEA10)

inline static constexpr unsigned int Class_1_B284D3458611CEA4_1___c__DisplayClass4_0_TypeDefinitionIndex = 72098;

class Class_1_B284D3458611CEA4_1___c__DisplayClass4_0 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_1129* iconData; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B284D3458611CEA4_1___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _GetIconDataList_b__0(::Class_0_16E4307DCC419505_1129* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_1129*))((::PBYTE)hIl2Cpp + CLASS_1_B284D3458611CEA4_1___C__DISPLAYCLASS4_0__GETICONDATALIST_B__0_OFFSET))(this, a1);
	}
};
