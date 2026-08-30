#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_650;
class Class_1_3EA71EBCB5A3B1BA;
class Class_1_8CA784D26D9A6CF7;
namespace System { class String; }

#define CLASS_1_8CA784D26D9A6CF7___C__DISPLAYCLASS0_0__ADDAPPLYPREDOWNLOAD_B__0_OFFSET UNITYSDK_OFFSET(0x15242C00)
#define CLASS_1_8CA784D26D9A6CF7___C__DISPLAYCLASS0_0__ADDAPPLYPREDOWNLOAD_B__1_OFFSET UNITYSDK_OFFSET(0x15242B60)
#define CLASS_1_8CA784D26D9A6CF7___C__DISPLAYCLASS0_0__ADDAPPLYPREDOWNLOAD_B__2_OFFSET UNITYSDK_OFFSET(0x15242C40)
#define CLASS_1_8CA784D26D9A6CF7___C__DISPLAYCLASS0_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1523C100)

inline static constexpr unsigned int Class_1_8CA784D26D9A6CF7___c__DisplayClass0_0_TypeDefinitionIndex = 59708;

class Class_1_8CA784D26D9A6CF7___c__DisplayClass0_0 : public ::System::Object
{
public:
	::System::String* pathDestRoot; // 0x10
	::System::String* pathSrcRoot; // 0x18
	::Class_1_3EA71EBCB5A3B1BA* progress; // 0x20
	::Class_1_8CA784D26D9A6CF7* __4__this; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8CA784D26D9A6CF7___C__DISPLAYCLASS0_0__CTOR_OFFSET))(this);
	}

	::System::Void _AddApplyPredownload_b__1(::Class_0_16E4307DCC419505_650* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_650*))((::PBYTE)hIl2Cpp + CLASS_1_8CA784D26D9A6CF7___C__DISPLAYCLASS0_0__ADDAPPLYPREDOWNLOAD_B__1_OFFSET))(this, a1);
	}

	::System::Void _AddApplyPredownload_b__0(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_8CA784D26D9A6CF7___C__DISPLAYCLASS0_0__ADDAPPLYPREDOWNLOAD_B__0_OFFSET))(this, a1);
	}

	::System::Void _AddApplyPredownload_b__2(::Class_0_16E4307DCC419505_650* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_650*))((::PBYTE)hIl2Cpp + CLASS_1_8CA784D26D9A6CF7___C__DISPLAYCLASS0_0__ADDAPPLYPREDOWNLOAD_B__2_OFFSET))(this, a1);
	}
};
