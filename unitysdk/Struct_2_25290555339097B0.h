#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_746D9B6C92926E1E.h"
#include "unitysdk/System/ValueType.h"

class Class_1_8FBDD7D8E0EE0B49;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define STRUCT_2_25290555339097B0_DISPOSE_OFFSET UNITYSDK_OFFSET(0x87FF90)
#define STRUCT_2_25290555339097B0_EQUALS_OFFSET UNITYSDK_OFFSET(0x87FFA0)
#define STRUCT_2_25290555339097B0_METHOD_2_041C3D29D49F947A_OFFSET UNITYSDK_OFFSET(0x880170)
#define STRUCT_2_25290555339097B0_METHOD_2_16866ED435235551_1_OFFSET UNITYSDK_OFFSET(0x185D99D0)
#define STRUCT_2_25290555339097B0_METHOD_2_16866ED435235551_OFFSET UNITYSDK_OFFSET(0x185D9480)
#define STRUCT_2_25290555339097B0_METHOD_2_3D78D2E0F9F95F07_OFFSET UNITYSDK_OFFSET(0x41E9C0)
#define STRUCT_2_25290555339097B0_METHOD_2_65CF685B19AB5EC4_OFFSET UNITYSDK_OFFSET(0x8800F0)
#define STRUCT_2_25290555339097B0_METHOD_2_C11DE5214A4C6B74_OFFSET UNITYSDK_OFFSET(0x880180)
#define STRUCT_2_25290555339097B0_METHOD_2_CD728708FDF638DC_OFFSET UNITYSDK_OFFSET(0x185D92D0)
#define STRUCT_2_25290555339097B0_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x7D31D0)
#define STRUCT_2_25290555339097B0__CCTOR_OFFSET UNITYSDK_OFFSET(0x185D9170)
#define STRUCT_2_25290555339097B0__CTOR_1_OFFSET UNITYSDK_OFFSET(0x87FF80)
#define STRUCT_2_25290555339097B0__CTOR_OFFSET UNITYSDK_OFFSET(0x87FED0)

inline static constexpr unsigned int Struct_2_25290555339097B0_TypeDefinitionIndex = 88848;

struct alignas(8) Struct_2_25290555339097B0
{
	static ::Struct_2_25290555339097B0* StaticGet_Field_2_3()
	{
		return (::Struct_2_25290555339097B0*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_25290555339097B0_TypeDefinitionIndex)->GetStaticField(0x383F0);
	}
	static ::System::Collections::Generic::HashSet_1<::System::UInt32>** StaticGet_Field_2_0()
	{
		return (::System::Collections::Generic::HashSet_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Struct_2_25290555339097B0_TypeDefinitionIndex)->GetStaticField(0x38418);
	}
	static ::System::UInt32* StaticGet_Field_2_7()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_25290555339097B0_TypeDefinitionIndex)->GetStaticField(0xD600);
	}
	// static const ::System::UInt32 Field_2_2 = 0x0; // 0x0
	// static const ::System::UInt32 Field_2_1 = 0x1; // 0x0
	::System::UInt32 Field_2_6; // 0x10
	::Struct_2_746D9B6C92926E1E Field_2_5; // 0x18
	::System::Int32 Field_2_4; // 0x30

	::System::Void _ctor(::System::Int32 a1, ::System::UInt32 a2, ::Class_1_8FBDD7D8E0EE0B49* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt32, ::Class_1_8FBDD7D8E0EE0B49*))((::PBYTE)hIl2Cpp + STRUCT_2_25290555339097B0__CTOR_OFFSET))(this, a1, a2, a3);
	}

	/*
	::System::Void _ctor_1(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + STRUCT_2_25290555339097B0__CTOR_1_OFFSET))(this, a1);
	}
	*/

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_25290555339097B0__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_25290555339097B0_DISPOSE_OFFSET))(this);
	}

	::System::Boolean Equals(::Struct_2_25290555339097B0 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_25290555339097B0))((::PBYTE)hIl2Cpp + STRUCT_2_25290555339097B0_EQUALS_OFFSET))(this, a1);
	}

	/*
	::System::Void Method_2_65CF685B19AB5EC4(::Struct_2_FE9BD044832BC9C3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FE9BD044832BC9C3&))((::PBYTE)hIl2Cpp + STRUCT_2_25290555339097B0_METHOD_2_65CF685B19AB5EC4_OFFSET))(this, a1);
	}
	*/

	/*
	static ::Struct_2_FE9BD044832BC9C3 Method_2_CD728708FDF638DC(::Struct_2_29439DBE2B63DCF3& a1, ::System::Int32 a2)
	{
		return ((::Struct_2_FE9BD044832BC9C3(*)(::Struct_2_29439DBE2B63DCF3&, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_25290555339097B0_METHOD_2_CD728708FDF638DC_OFFSET))(a1, a2);
	}
	*/

	static ::System::Boolean Method_2_16866ED435235551(::Struct_2_25290555339097B0 a1, ::Struct_2_25290555339097B0 a2)
	{
		return ((::System::Boolean(*)(::Struct_2_25290555339097B0, ::Struct_2_25290555339097B0))((::PBYTE)hIl2Cpp + STRUCT_2_25290555339097B0_METHOD_2_16866ED435235551_OFFSET))(a1, a2);
	}

	/*
	::System::Void Method_2_041C3D29D49F947A(::Struct_2_FE9BD044832BC9C3& a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FE9BD044832BC9C3&, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + STRUCT_2_25290555339097B0_METHOD_2_041C3D29D49F947A_OFFSET))(this, a1, a2, a3);
	}
	*/

	::Struct_2_746D9B6C92926E1E Method_2_3D78D2E0F9F95F07()
	{
		return ((::Struct_2_746D9B6C92926E1E(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_25290555339097B0_METHOD_2_3D78D2E0F9F95F07_OFFSET))(this);
	}

	static ::System::Boolean Method_2_16866ED435235551_1(::Struct_2_25290555339097B0 a1, ::Struct_2_25290555339097B0 a2)
	{
		return ((::System::Boolean(*)(::Struct_2_25290555339097B0, ::Struct_2_25290555339097B0))((::PBYTE)hIl2Cpp + STRUCT_2_25290555339097B0_METHOD_2_16866ED435235551_1_OFFSET))(a1, a2);
	}

	/*
	::Struct_2_FE9BD044832BC9C3 Method_2_C11DE5214A4C6B74(::System::Int32 a1)
	{
		return ((::Struct_2_FE9BD044832BC9C3(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_25290555339097B0_METHOD_2_C11DE5214A4C6B74_OFFSET))(this, a1);
	}
	*/

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_25290555339097B0_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}
};
