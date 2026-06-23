#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/DefaultConstruct.h"
#include "unitysdk/Foundation/ReadOnlyNativeVariableArray_1.h"
#include "unitysdk/Foundation/ReadOnlyNativeVariable_1.h"
#include "unitysdk/Foundation/Unreal/FTransform3D.h"
#include "unitysdk/Struct_2_47B08E0540187474.h"
#include "unitysdk/Struct_2_6402D4A3EAB8BDC8.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_2BF3DCBD364A6BA8_METHOD_2_1F8314262457963A_OFFSET UNITYSDK_OFFSET(0x7D0C90)
#define STRUCT_2_2BF3DCBD364A6BA8_METHOD_2_36E6EEF4C408A4E3_OFFSET UNITYSDK_OFFSET(0x7D0B90)
#define STRUCT_2_2BF3DCBD364A6BA8_METHOD_2_38FC948C5EAB811A_OFFSET UNITYSDK_OFFSET(0x7D0BC0)
#define STRUCT_2_2BF3DCBD364A6BA8_METHOD_2_42070E038D773184_OFFSET UNITYSDK_OFFSET(0x7D0C10)
#define STRUCT_2_2BF3DCBD364A6BA8_METHOD_2_57B63FA9682A87C1_OFFSET UNITYSDK_OFFSET(0x2C1AF0)
#define STRUCT_2_2BF3DCBD364A6BA8_METHOD_2_5D8E0358AF73A623_1_OFFSET UNITYSDK_OFFSET(0x7D0BF0)
#define STRUCT_2_2BF3DCBD364A6BA8_METHOD_2_5D8E0358AF73A623_2_OFFSET UNITYSDK_OFFSET(0x7D0CC0)
#define STRUCT_2_2BF3DCBD364A6BA8_METHOD_2_5D8E0358AF73A623_OFFSET UNITYSDK_OFFSET(0x7D0BA0)
#define STRUCT_2_2BF3DCBD364A6BA8_METHOD_2_98889D526E89C6F0_OFFSET UNITYSDK_OFFSET(0x7D0CE0)
#define STRUCT_2_2BF3DCBD364A6BA8_METHOD_2_AAE4B6CE8E6EDE94_OFFSET UNITYSDK_OFFSET(0x7D0B10)
#define STRUCT_2_2BF3DCBD364A6BA8_METHOD_2_BFBBE8A6FE167A6A_OFFSET UNITYSDK_OFFSET(0x6B4320)
#define STRUCT_2_2BF3DCBD364A6BA8_METHOD_2_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x6B4240)
#define STRUCT_2_2BF3DCBD364A6BA8_METHOD_2_D7B8CDD2725A23D9_OFFSET UNITYSDK_OFFSET(0x7D0CB0)
#define STRUCT_2_2BF3DCBD364A6BA8_METHOD_2_DEDC7543931136A5_OFFSET UNITYSDK_OFFSET(0x7D0D20)
#define STRUCT_2_2BF3DCBD364A6BA8__CCTOR_OFFSET UNITYSDK_OFFSET(0x142AF6E0)
#define STRUCT_2_2BF3DCBD364A6BA8__CTOR_1_OFFSET UNITYSDK_OFFSET(0x7D0A50)
#define STRUCT_2_2BF3DCBD364A6BA8__CTOR_OFFSET UNITYSDK_OFFSET(0x7D0990)

inline static constexpr unsigned int Struct_2_2BF3DCBD364A6BA8_TypeDefinitionIndex = 65875;

struct alignas(8) Struct_2_2BF3DCBD364A6BA8
{
	static ::Struct_2_2BF3DCBD364A6BA8* StaticGet_Field_2_4()
	{
		return (::Struct_2_2BF3DCBD364A6BA8*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_2BF3DCBD364A6BA8_TypeDefinitionIndex)->GetStaticField(0xACD0);
	}
	static ::Struct_2_47B08E0540187474* StaticGet_Field_2_3()
	{
		return (::Struct_2_47B08E0540187474*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_2BF3DCBD364A6BA8_TypeDefinitionIndex)->GetStaticField(0xAD00);
	}
	::Foundation::ReadOnlyNativeVariableArray_1<::Struct_2_47B08E0540187474> Field_2_0; // 0x10
	::Foundation::ReadOnlyNativeVariable_1<::Struct_2_6402D4A3EAB8BDC8> Field_2_1; // 0x20
	::Foundation::ReadOnlyNativeVariable_1<::Foundation::Unreal::FTransform3D> Field_2_2; // 0x30

	::System::Void _ctor(::Foundation::DefaultConstruct a1)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::DefaultConstruct))((::PBYTE)hIl2Cpp + STRUCT_2_2BF3DCBD364A6BA8__CTOR_OFFSET))(this, a1);
	}

	::System::Void _ctor_1(::Foundation::ReadOnlyNativeVariableArray_1<::Struct_2_47B08E0540187474> a1, ::Foundation::ReadOnlyNativeVariable_1<::Struct_2_6402D4A3EAB8BDC8> a2, ::Foundation::ReadOnlyNativeVariable_1<::Foundation::Unreal::FTransform3D> a3)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ReadOnlyNativeVariableArray_1<::Struct_2_47B08E0540187474>, ::Foundation::ReadOnlyNativeVariable_1<::Struct_2_6402D4A3EAB8BDC8>, ::Foundation::ReadOnlyNativeVariable_1<::Foundation::Unreal::FTransform3D>))((::PBYTE)hIl2Cpp + STRUCT_2_2BF3DCBD364A6BA8__CTOR_1_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_2BF3DCBD364A6BA8__CCTOR_OFFSET))();
	}

	::System::Boolean Method_2_AAE4B6CE8E6EDE94(::Struct_2_6402D4A3EAB8BDC8 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_6402D4A3EAB8BDC8))((::PBYTE)hIl2Cpp + STRUCT_2_2BF3DCBD364A6BA8_METHOD_2_AAE4B6CE8E6EDE94_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_CE34EA208837238D()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_2BF3DCBD364A6BA8_METHOD_2_CE34EA208837238D_OFFSET))(this);
	}

	::Struct_2_47B08E0540187474& Method_2_36E6EEF4C408A4E3(::Struct_2_6402D4A3EAB8BDC8 a1)
	{
		return ((::Struct_2_47B08E0540187474&(*)(::PVOID, ::Struct_2_6402D4A3EAB8BDC8))((::PBYTE)hIl2Cpp + STRUCT_2_2BF3DCBD364A6BA8_METHOD_2_36E6EEF4C408A4E3_OFFSET))(this, a1);
	}

	::Foundation::Unreal::FTransform3D Method_2_5D8E0358AF73A623(::Struct_2_6402D4A3EAB8BDC8 a1)
	{
		return ((::Foundation::Unreal::FTransform3D(*)(::PVOID, ::Struct_2_6402D4A3EAB8BDC8))((::PBYTE)hIl2Cpp + STRUCT_2_2BF3DCBD364A6BA8_METHOD_2_5D8E0358AF73A623_OFFSET))(this, a1);
	}

	/*
	::Foundation::NativeVariableArray_1<::Foundation::Unreal::FTransform3D> Method_2_38FC948C5EAB811A(::Foundation::NativeVariableArray_1<::Foundation::Unreal::FTransform3D> a1)
	{
		return ((::Foundation::NativeVariableArray_1<::Foundation::Unreal::FTransform3D>(*)(::PVOID, ::Foundation::NativeVariableArray_1<::Foundation::Unreal::FTransform3D>))((::PBYTE)hIl2Cpp + STRUCT_2_2BF3DCBD364A6BA8_METHOD_2_38FC948C5EAB811A_OFFSET))(this, a1);
	}
	*/

	::System::Int32 Method_2_BFBBE8A6FE167A6A()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_2BF3DCBD364A6BA8_METHOD_2_BFBBE8A6FE167A6A_OFFSET))(this);
	}

	::Foundation::Unreal::FTransform3D Method_2_5D8E0358AF73A623_1(::Struct_2_6402D4A3EAB8BDC8 a1)
	{
		return ((::Foundation::Unreal::FTransform3D(*)(::PVOID, ::Struct_2_6402D4A3EAB8BDC8))((::PBYTE)hIl2Cpp + STRUCT_2_2BF3DCBD364A6BA8_METHOD_2_5D8E0358AF73A623_1_OFFSET))(this, a1);
	}

	::Struct_2_6402D4A3EAB8BDC8 Method_2_42070E038D773184()
	{
		return ((::Struct_2_6402D4A3EAB8BDC8(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_2BF3DCBD364A6BA8_METHOD_2_42070E038D773184_OFFSET))(this);
	}

	/*
	::Struct_2_63DDC2FA7A3D55CD Method_2_1F8314262457963A()
	{
		return ((::Struct_2_63DDC2FA7A3D55CD(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_2BF3DCBD364A6BA8_METHOD_2_1F8314262457963A_OFFSET))(this);
	}
	*/

	::Foundation::Unreal::FTransform3D& Method_2_D7B8CDD2725A23D9(::Struct_2_6402D4A3EAB8BDC8 a1)
	{
		return ((::Foundation::Unreal::FTransform3D&(*)(::PVOID, ::Struct_2_6402D4A3EAB8BDC8))((::PBYTE)hIl2Cpp + STRUCT_2_2BF3DCBD364A6BA8_METHOD_2_D7B8CDD2725A23D9_OFFSET))(this, a1);
	}

	::Foundation::Unreal::FTransform3D Method_2_5D8E0358AF73A623_2(::Struct_2_6402D4A3EAB8BDC8 a1)
	{
		return ((::Foundation::Unreal::FTransform3D(*)(::PVOID, ::Struct_2_6402D4A3EAB8BDC8))((::PBYTE)hIl2Cpp + STRUCT_2_2BF3DCBD364A6BA8_METHOD_2_5D8E0358AF73A623_2_OFFSET))(this, a1);
	}

	/*
	::System::Span_1<::Foundation::Unreal::FTransform3D> Method_2_98889D526E89C6F0(::System::Span_1<::Foundation::Unreal::FTransform3D> a1)
	{
		return ((::System::Span_1<::Foundation::Unreal::FTransform3D>(*)(::PVOID, ::System::Span_1<::Foundation::Unreal::FTransform3D>))((::PBYTE)hIl2Cpp + STRUCT_2_2BF3DCBD364A6BA8_METHOD_2_98889D526E89C6F0_OFFSET))(this, a1);
	}
	*/

	::Struct_2_6402D4A3EAB8BDC8 Method_2_DEDC7543931136A5(::Struct_2_6402D4A3EAB8BDC8 a1)
	{
		return ((::Struct_2_6402D4A3EAB8BDC8(*)(::PVOID, ::Struct_2_6402D4A3EAB8BDC8))((::PBYTE)hIl2Cpp + STRUCT_2_2BF3DCBD364A6BA8_METHOD_2_DEDC7543931136A5_OFFSET))(this, a1);
	}

	/*
	::Struct_2_2BF3DCBD364A6BA8_Struct_2_781A607A0206A03E Method_2_57B63FA9682A87C1()
	{
		return ((::Struct_2_2BF3DCBD364A6BA8_Struct_2_781A607A0206A03E(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_2BF3DCBD364A6BA8_METHOD_2_57B63FA9682A87C1_OFFSET))(this);
	}
	*/
};
