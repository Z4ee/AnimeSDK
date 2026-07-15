#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Span_1.h"
#include "unitysdk/System/ValueType.h"

namespace System { class IFormatProvider; }
namespace System { class Object; }
namespace System { class String; }

#define STRUCT_2_7DD9A21CF08FCEFF_METHOD_2_12340FD2FA41D544_OFFSET UNITYSDK_OFFSET(0x38D7AC0)
#define STRUCT_2_7DD9A21CF08FCEFF_METHOD_2_2C034707CFF4EE92_OFFSET UNITYSDK_OFFSET(0x38D7C30)
#define STRUCT_2_7DD9A21CF08FCEFF_METHOD_2_30735BFB07D87821_OFFSET UNITYSDK_OFFSET(0x38D7B60)
#define STRUCT_2_7DD9A21CF08FCEFF_METHOD_2_43D99DDD80B1E30C_OFFSET UNITYSDK_OFFSET(0x38D7800)
#define STRUCT_2_7DD9A21CF08FCEFF_METHOD_2_501C4FA5421B00BE_OFFSET UNITYSDK_OFFSET(0x38D7C00)
#define STRUCT_2_7DD9A21CF08FCEFF_METHOD_2_6DD874399D7FD8ED_OFFSET UNITYSDK_OFFSET(0x38D7C60)
#define STRUCT_2_7DD9A21CF08FCEFF_METHOD_2_71D7FBD389114852_OFFSET UNITYSDK_OFFSET(0x38D7C80)
#define STRUCT_2_7DD9A21CF08FCEFF_METHOD_2_7D21D8548943D577_OFFSET UNITYSDK_OFFSET(0x38D7C70)
#define STRUCT_2_7DD9A21CF08FCEFF_METHOD_2_8040BAF29B6E8032_OFFSET UNITYSDK_OFFSET(0x38D77F0)
#define STRUCT_2_7DD9A21CF08FCEFF_METHOD_2_82ECC72D992D12DD_OFFSET UNITYSDK_OFFSET(0x14BC4DD0)
#define STRUCT_2_7DD9A21CF08FCEFF_METHOD_2_8472716CEE94D849_OFFSET UNITYSDK_OFFSET(0x38D7C20)
#define STRUCT_2_7DD9A21CF08FCEFF_METHOD_2_AC5564BB90FB4411_OFFSET UNITYSDK_OFFSET(0x38D7A80)
#define STRUCT_2_7DD9A21CF08FCEFF_METHOD_2_DFAD0398FA59DB56_OFFSET UNITYSDK_OFFSET(0x38D7990)
#define STRUCT_2_7DD9A21CF08FCEFF_METHOD_2_E086BDB08435547E_OFFSET UNITYSDK_OFFSET(0x38D7AB0)
#define STRUCT_2_7DD9A21CF08FCEFF_METHOD_2_E0D0A525BBFE5C6D_OFFSET UNITYSDK_OFFSET(0x38D7BF0)
#define STRUCT_2_7DD9A21CF08FCEFF_METHOD_2_E27FC1DE9BCBC5A2_OFFSET UNITYSDK_OFFSET(0x38D79D0)
#define STRUCT_2_7DD9A21CF08FCEFF_METHOD_2_F7D4B0D32C65DE6B_OFFSET UNITYSDK_OFFSET(0x38D7AD0)
#define STRUCT_2_7DD9A21CF08FCEFF_METHOD_2_F84946FD738E3A9C_OFFSET UNITYSDK_OFFSET(0x14BC5280)
#define STRUCT_2_7DD9A21CF08FCEFF_METHOD_2_FA1861945A7D62AB_OFFSET UNITYSDK_OFFSET(0x38D79C0)
#define STRUCT_2_7DD9A21CF08FCEFF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x38D77B0)
#define STRUCT_2_7DD9A21CF08FCEFF__CTOR_1_OFFSET UNITYSDK_OFFSET(0x38D7740)
#define STRUCT_2_7DD9A21CF08FCEFF__CTOR_2_OFFSET UNITYSDK_OFFSET(0x38D7750)
#define STRUCT_2_7DD9A21CF08FCEFF__CTOR_OFFSET UNITYSDK_OFFSET(0x38D7730)

inline static constexpr unsigned int Struct_2_7DD9A21CF08FCEFF_TypeDefinitionIndex = 6697;

struct alignas(8) Struct_2_7DD9A21CF08FCEFF
{
	// static const ::System::Int32 Field_2_0 = 0xB; // 0x0
	// static const ::System::Int32 Field_2_1 = 0x100; // 0x0
	::System::IFormatProvider* Field_2_2; // 0x10
	::Il2CppArray<::System::Char>* Field_2_3; // 0x18
	::System::Span_1<::System::Char> Field_2_4; // 0x20
	::System::Int32 Field_2_5; // 0x38
	::System::Boolean Field_2_6; // 0x3C

	::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_7DD9A21CF08FCEFF__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _ctor_1(::System::Int32 a1, ::System::Int32 a2, ::System::IFormatProvider* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + STRUCT_2_7DD9A21CF08FCEFF__CTOR_1_OFFSET))(this, a1, a2, a3);
	}

	::System::Void _ctor_2(::System::Int32 a1, ::System::Int32 a2, ::System::IFormatProvider* a3, ::System::Span_1<::System::Char> a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::IFormatProvider*, ::System::Span_1<::System::Char>))((::PBYTE)hIl2Cpp + STRUCT_2_7DD9A21CF08FCEFF__CTOR_2_OFFSET))(this, a1, a2, a3, a4);
	}

	static ::System::Int32 Method_2_82ECC72D992D12DD(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_7DD9A21CF08FCEFF_METHOD_2_82ECC72D992D12DD_OFFSET))(a1, a2);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_7DD9A21CF08FCEFF_TOSTRING_OFFSET))(this);
	}

	::System::String* Method_2_8040BAF29B6E8032()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_7DD9A21CF08FCEFF_METHOD_2_8040BAF29B6E8032_OFFSET))(this);
	}

	::System::Void Method_2_43D99DDD80B1E30C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_7DD9A21CF08FCEFF_METHOD_2_43D99DDD80B1E30C_OFFSET))(this);
	}

	/*
	::System::ReadOnlySpan_1<::System::Char> Method_2_DFAD0398FA59DB56()
	{
		return ((::System::ReadOnlySpan_1<::System::Char>(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_7DD9A21CF08FCEFF_METHOD_2_DFAD0398FA59DB56_OFFSET))(this);
	}
	*/

	::System::Void Method_2_FA1861945A7D62AB(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + STRUCT_2_7DD9A21CF08FCEFF_METHOD_2_FA1861945A7D62AB_OFFSET))(this, a1);
	}

	/*
	::System::Void Method_2_E27FC1DE9BCBC5A2(::System::ReadOnlySpan_1<::System::Char> a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::ReadOnlySpan_1<::System::Char>))((::PBYTE)hIl2Cpp + STRUCT_2_7DD9A21CF08FCEFF_METHOD_2_E27FC1DE9BCBC5A2_OFFSET))(this, a1);
	}
	*/

	/*
	::System::Void Method_2_AC5564BB90FB4411(::System::ReadOnlySpan_1<::System::Char> a1, ::System::Int32 a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::ReadOnlySpan_1<::System::Char>, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + STRUCT_2_7DD9A21CF08FCEFF_METHOD_2_AC5564BB90FB4411_OFFSET))(this, a1, a2, a3);
	}
	*/

	::System::Void Method_2_E086BDB08435547E(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + STRUCT_2_7DD9A21CF08FCEFF_METHOD_2_E086BDB08435547E_OFFSET))(this, a1);
	}

	::System::Void Method_2_12340FD2FA41D544(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + STRUCT_2_7DD9A21CF08FCEFF_METHOD_2_12340FD2FA41D544_OFFSET))(this, a1);
	}

	::System::Void Method_2_F7D4B0D32C65DE6B(::System::String* a1, ::System::Int32 a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + STRUCT_2_7DD9A21CF08FCEFF_METHOD_2_F7D4B0D32C65DE6B_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_30735BFB07D87821(::System::Object* a1, ::System::Int32 a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + STRUCT_2_7DD9A21CF08FCEFF_METHOD_2_30735BFB07D87821_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Boolean Method_2_F84946FD738E3A9C(::System::IFormatProvider* a1)
	{
		return ((::System::Boolean(*)(::System::IFormatProvider*))((::PBYTE)hIl2Cpp + STRUCT_2_7DD9A21CF08FCEFF_METHOD_2_F84946FD738E3A9C_OFFSET))(a1);
	}

	::System::Void Method_2_E0D0A525BBFE5C6D(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_7DD9A21CF08FCEFF_METHOD_2_E0D0A525BBFE5C6D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_501C4FA5421B00BE(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_7DD9A21CF08FCEFF_METHOD_2_501C4FA5421B00BE_OFFSET))(this, a1);
	}

	::System::Void Method_2_8472716CEE94D849(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + STRUCT_2_7DD9A21CF08FCEFF_METHOD_2_8472716CEE94D849_OFFSET))(this, a1);
	}

	/*
	::System::Void Method_2_2C034707CFF4EE92(::System::ReadOnlySpan_1<::System::Char> a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::ReadOnlySpan_1<::System::Char>))((::PBYTE)hIl2Cpp + STRUCT_2_7DD9A21CF08FCEFF_METHOD_2_2C034707CFF4EE92_OFFSET))(this, a1);
	}
	*/

	::System::Void Method_2_6DD874399D7FD8ED(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_7DD9A21CF08FCEFF_METHOD_2_6DD874399D7FD8ED_OFFSET))(this, a1);
	}

	::System::Void Method_2_7D21D8548943D577()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_7DD9A21CF08FCEFF_METHOD_2_7D21D8548943D577_OFFSET))(this);
	}

	::System::Void Method_2_71D7FBD389114852(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + STRUCT_2_7DD9A21CF08FCEFF_METHOD_2_71D7FBD389114852_OFFSET))(this, a1);
	}
};
