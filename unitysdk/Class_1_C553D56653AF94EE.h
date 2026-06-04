#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_16214D4BC9EF44B9;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_C553D56653AF94EE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x14587300)
#define CLASS_1_C553D56653AF94EE_GET_GROUPINDEX_OFFSET UNITYSDK_OFFSET(0x14587590)
#define CLASS_1_C553D56653AF94EE_GET_SORTFILTERITEMS_OFFSET UNITYSDK_OFFSET(0x145875B0)
#define CLASS_1_C553D56653AF94EE_METHOD_1_5022DB1DC5AA8CB4_OFFSET UNITYSDK_OFFSET(0x145873A0)
#define CLASS_1_C553D56653AF94EE_METHOD_1_A84FA58FC133A8B0_OFFSET UNITYSDK_OFFSET(0x14587450)
#define CLASS_1_C553D56653AF94EE_SET_GROUPINDEX_OFFSET UNITYSDK_OFFSET(0x145875A0)
#define CLASS_1_C553D56653AF94EE_SET_SORTFILTERITEMS_OFFSET UNITYSDK_OFFSET(0x145875C0)
#define CLASS_1_C553D56653AF94EE__CTOR_OFFSET UNITYSDK_OFFSET(0x145872C0)

inline static constexpr unsigned int Class_1_C553D56653AF94EE_TypeDefinitionIndex = 61458;

class Class_1_C553D56653AF94EE : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_Field_1_0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_C553D56653AF94EE_TypeDefinitionIndex)->GetStaticField(0xFAC0);
	}
	::System::Collections::Generic::List_1<::Class_1_16214D4BC9EF44B9*>* _SortFilterItems_k__BackingField; // 0x10
	::System::UInt32 _GroupIndex_k__BackingField; // 0x18

	::System::Void _ctor(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C553D56653AF94EE__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C553D56653AF94EE_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_5022DB1DC5AA8CB4(::Class_1_16214D4BC9EF44B9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_16214D4BC9EF44B9*))((::PBYTE)hIl2Cpp + CLASS_1_C553D56653AF94EE_METHOD_1_5022DB1DC5AA8CB4_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_A84FA58FC133A8B0(::System::UInt32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C553D56653AF94EE_METHOD_1_A84FA58FC133A8B0_OFFSET))(this, a1);
	}

	::System::UInt32 get_GroupIndex()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C553D56653AF94EE_GET_GROUPINDEX_OFFSET))(this);
	}

	::System::Void set_GroupIndex(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C553D56653AF94EE_SET_GROUPINDEX_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_1_16214D4BC9EF44B9*>* get_SortFilterItems()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_16214D4BC9EF44B9*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C553D56653AF94EE_GET_SORTFILTERITEMS_OFFSET))(this);
	}

	::System::Void set_SortFilterItems(::System::Collections::Generic::List_1<::Class_1_16214D4BC9EF44B9*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_16214D4BC9EF44B9*>*))((::PBYTE)hIl2Cpp + CLASS_1_C553D56653AF94EE_SET_SORTFILTERITEMS_OFFSET))(this, a1);
	}
};
