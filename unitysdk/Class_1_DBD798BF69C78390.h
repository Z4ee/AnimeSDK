#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_07436FDB24BAF683_2;
class Class_1_3DEF26C653AFADFD;
class Class_1_4AB01E8FEDBFD1EC;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_DBD798BF69C78390_GET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x17572960)
#define CLASS_1_DBD798BF69C78390_METHOD_1_1FFCE94C13F2C5F0_OFFSET UNITYSDK_OFFSET(0x17571D80)
#define CLASS_1_DBD798BF69C78390_METHOD_1_3BCF0226A6CDC13B_OFFSET UNITYSDK_OFFSET(0x17571FA0)
#define CLASS_1_DBD798BF69C78390_METHOD_1_C504D0E16DB8D82B_OFFSET UNITYSDK_OFFSET(0x17572660)
#define CLASS_1_DBD798BF69C78390_SET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x17572970)
#define CLASS_1_DBD798BF69C78390__CTOR_OFFSET UNITYSDK_OFFSET(0x17571D00)

inline static constexpr unsigned int Class_1_DBD798BF69C78390_TypeDefinitionIndex = 40530;

class Class_1_DBD798BF69C78390 : public ::System::Object
{
public:
	::Class_1_4AB01E8FEDBFD1EC* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::Class_1_3DEF26C653AFADFD*>* Field_1_1; // 0x18
	::System::Collections::Generic::List_1<::Class_1_3DEF26C653AFADFD*>* Field_1_2; // 0x20
	::System::Int32 Field_1_3; // 0x28
	::System::Boolean _IsActive_k__BackingField; // 0x2C
	::System::Single Field_1_5; // 0x30
	::System::UInt32 Field_1_6; // 0x34

	::System::Void _ctor(::Class_1_4AB01E8FEDBFD1EC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4AB01E8FEDBFD1EC*))((::PBYTE)hIl2Cpp + CLASS_1_DBD798BF69C78390__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_1FFCE94C13F2C5F0(::Class_1_3DEF26C653AFADFD* a1, ::System::Int32 a2, ::System::Single a3, ::System::UInt32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3DEF26C653AFADFD*, ::System::Int32, ::System::Single, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_DBD798BF69C78390_METHOD_1_1FFCE94C13F2C5F0_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_3BCF0226A6CDC13B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DBD798BF69C78390_METHOD_1_3BCF0226A6CDC13B_OFFSET))(this);
	}

	::Il2CppArray<::Class_1_07436FDB24BAF683_2*>* Method_1_C504D0E16DB8D82B()
	{
		return ((::Il2CppArray<::Class_1_07436FDB24BAF683_2*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DBD798BF69C78390_METHOD_1_C504D0E16DB8D82B_OFFSET))(this);
	}

	::System::Boolean get_IsActive()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DBD798BF69C78390_GET_ISACTIVE_OFFSET))(this);
	}

	::System::Void set_IsActive(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_DBD798BF69C78390_SET_ISACTIVE_OFFSET))(this, a1);
	}
};
