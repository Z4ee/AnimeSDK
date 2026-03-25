#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_939BEFF3A1EAE7F7_Struct_2_86083371450A3659.h"
#include "unitysdk/System/Object.h"

class Class_2_939BEFF3A1EAE7F7;
class Class_2_FE060A211AF9E9E7;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_939BEFF3A1EAE7F7___C__DISPLAYCLASS23_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA42EDB0)
#define CLASS_2_939BEFF3A1EAE7F7___C__DISPLAYCLASS23_0___REFRESHVIEW_B__0_OFFSET UNITYSDK_OFFSET(0xA42F090)

inline static constexpr unsigned int Class_2_939BEFF3A1EAE7F7___c__DisplayClass23_0_TypeDefinitionIndex = 59239;

class Class_2_939BEFF3A1EAE7F7___c__DisplayClass23_0 : public ::System::Object
{
public:
	::Class_2_939BEFF3A1EAE7F7* __4__this; // 0x10
	::System::Collections::Generic::List_1<::Class_2_939BEFF3A1EAE7F7_Struct_2_86083371450A3659>* displayDataList; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_939BEFF3A1EAE7F7___C__DISPLAYCLASS23_0__CTOR_OFFSET))(this);
	}

	::System::Void __RefreshView_b__0(::Class_2_FE060A211AF9E9E7* panel, ::System::Int32 i)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_FE060A211AF9E9E7*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_939BEFF3A1EAE7F7___C__DISPLAYCLASS23_0___REFRESHVIEW_B__0_OFFSET))(this, panel, i);
	}
};
