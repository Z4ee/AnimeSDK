#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1030;

#define CLASS_1_B75C215C2376DBCE___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0x145FBC60)
#define CLASS_1_B75C215C2376DBCE___C__DISPLAYCLASS4_0__GETICONDATALIST_B__0_OFFSET UNITYSDK_OFFSET(0x145FBD70)

inline static constexpr unsigned int Class_1_B75C215C2376DBCE___c__DisplayClass4_0_TypeDefinitionIndex = 67428;

class Class_1_B75C215C2376DBCE___c__DisplayClass4_0 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_1030* iconData; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B75C215C2376DBCE___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _GetIconDataList_b__0(::Class_0_16E4307DCC419505_1030* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_1030*))((::PBYTE)hIl2Cpp + CLASS_1_B75C215C2376DBCE___C__DISPLAYCLASS4_0__GETICONDATALIST_B__0_OFFSET))(this, a1);
	}
};
