#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_4AB01E8FEDBFD1EC;
class Class_1_52DCEE691286F89A_1;
class Class_1_E22F560919B0BCA2;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_DBD798BF69C78390_GET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x1C966790)
#define CLASS_1_DBD798BF69C78390_METHOD_1_1FE78A08D4B03A83_OFFSET UNITYSDK_OFFSET(0x1C965CD0)
#define CLASS_1_DBD798BF69C78390_METHOD_1_1FFCE94C13F2C5F0_OFFSET UNITYSDK_OFFSET(0x1C965AB0)
#define CLASS_1_DBD798BF69C78390_METHOD_1_3BCF0226A6CDC13B_OFFSET UNITYSDK_OFFSET(0x1C965DD0)
#define CLASS_1_DBD798BF69C78390_METHOD_1_C504D0E16DB8D82B_OFFSET UNITYSDK_OFFSET(0x1C966490)
#define CLASS_1_DBD798BF69C78390_SET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x1C9667A0)
#define CLASS_1_DBD798BF69C78390__CTOR_OFFSET UNITYSDK_OFFSET(0x1C965A30)

inline static constexpr unsigned int Class_1_DBD798BF69C78390_TypeDefinitionIndex = 43091;

class Class_1_DBD798BF69C78390 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_E22F560919B0BCA2*>* BPDOJLJLFBC; // 0x10
	::System::Collections::Generic::List_1<::Class_1_E22F560919B0BCA2*>* PBBJAPEEDEG; // 0x18
	::Class_1_4AB01E8FEDBFD1EC* FLMODBLFAGD; // 0x20
	::System::Single OODFJMEAABB; // 0x28
	::System::UInt32 MJIMCPHIJLH; // 0x2C
	::System::Int32 ANEBCOAENLN; // 0x30
	::System::Boolean _IsActive_k__BackingField; // 0x34

	::System::Void _ctor(::Class_1_4AB01E8FEDBFD1EC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4AB01E8FEDBFD1EC*))((::PBYTE)hIl2Cpp + CLASS_1_DBD798BF69C78390__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_1FFCE94C13F2C5F0(::Class_1_E22F560919B0BCA2* a1, ::System::Int32 a2, ::System::Single a3, ::System::UInt32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E22F560919B0BCA2*, ::System::Int32, ::System::Single, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_DBD798BF69C78390_METHOD_1_1FFCE94C13F2C5F0_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_1FE78A08D4B03A83(::Class_1_E22F560919B0BCA2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E22F560919B0BCA2*))((::PBYTE)hIl2Cpp + CLASS_1_DBD798BF69C78390_METHOD_1_1FE78A08D4B03A83_OFFSET))(this, a1);
	}

	::System::Void Method_1_3BCF0226A6CDC13B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DBD798BF69C78390_METHOD_1_3BCF0226A6CDC13B_OFFSET))(this);
	}

	::Il2CppArray<::Class_1_52DCEE691286F89A_1*>* Method_1_C504D0E16DB8D82B()
	{
		return ((::Il2CppArray<::Class_1_52DCEE691286F89A_1*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DBD798BF69C78390_METHOD_1_C504D0E16DB8D82B_OFFSET))(this);
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
