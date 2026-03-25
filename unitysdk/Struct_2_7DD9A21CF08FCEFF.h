#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Span_1.h"
#include "unitysdk/System/ValueType.h"

namespace System { class IFormatProvider; }
namespace System { class Object; }
namespace System { class String; }

#define STRUCT_2_7DD9A21CF08FCEFF_METHOD_2_05845255F81DB107_OFFSET UNITYSDK_OFFSET(0x20F2EB0)
#define STRUCT_2_7DD9A21CF08FCEFF_METHOD_2_2C034707CFF4EE92_OFFSET UNITYSDK_OFFSET(0x20F3030)
#define STRUCT_2_7DD9A21CF08FCEFF_METHOD_2_30735BFB07D87821_OFFSET UNITYSDK_OFFSET(0x20F2F60)
#define STRUCT_2_7DD9A21CF08FCEFF_METHOD_2_5C061BFFDACCF2F9_OFFSET UNITYSDK_OFFSET(0x20F3070)
#define STRUCT_2_7DD9A21CF08FCEFF_METHOD_2_6C08739477BB6C64_OFFSET UNITYSDK_OFFSET(0x20F3000)
#define STRUCT_2_7DD9A21CF08FCEFF_METHOD_2_82ECC72D992D12DD_OFFSET UNITYSDK_OFFSET(0x17A4A270)
#define STRUCT_2_7DD9A21CF08FCEFF_METHOD_2_8472716CEE94D849_OFFSET UNITYSDK_OFFSET(0x20F3020)
#define STRUCT_2_7DD9A21CF08FCEFF_METHOD_2_90AD2BDDCCA77A5B_OFFSET UNITYSDK_OFFSET(0x20F3060)
#define STRUCT_2_7DD9A21CF08FCEFF_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x20F2D10)
#define STRUCT_2_7DD9A21CF08FCEFF_METHOD_2_97817351D067D82C_OFFSET UNITYSDK_OFFSET(0x20F2D00)
#define STRUCT_2_7DD9A21CF08FCEFF_METHOD_2_999B651118A235D3_OFFSET UNITYSDK_OFFSET(0x20F2EC0)
#define STRUCT_2_7DD9A21CF08FCEFF_METHOD_2_AC5564BB90FB4411_OFFSET UNITYSDK_OFFSET(0x20F2E80)
#define STRUCT_2_7DD9A21CF08FCEFF_METHOD_2_DFAD0398FA59DB56_OFFSET UNITYSDK_OFFSET(0x20F2D90)
#define STRUCT_2_7DD9A21CF08FCEFF_METHOD_2_E0D0A525BBFE5C6D_OFFSET UNITYSDK_OFFSET(0x20F2FF0)
#define STRUCT_2_7DD9A21CF08FCEFF_METHOD_2_E27FC1DE9BCBC5A2_OFFSET UNITYSDK_OFFSET(0x20F2DD0)
#define STRUCT_2_7DD9A21CF08FCEFF_METHOD_2_F7D4B0D32C65DE6B_OFFSET UNITYSDK_OFFSET(0x20F2ED0)
#define STRUCT_2_7DD9A21CF08FCEFF_METHOD_2_F84946FD738E3A9C_OFFSET UNITYSDK_OFFSET(0x17A4A6C0)
#define STRUCT_2_7DD9A21CF08FCEFF_METHOD_2_FA1861945A7D62AB_OFFSET UNITYSDK_OFFSET(0x20F2DC0)
#define STRUCT_2_7DD9A21CF08FCEFF_METHOD_2_FC336EACA7E27564_OFFSET UNITYSDK_OFFSET(0x20F3080)
#define STRUCT_2_7DD9A21CF08FCEFF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x20F2CC0)
#define STRUCT_2_7DD9A21CF08FCEFF__CTOR_1_OFFSET UNITYSDK_OFFSET(0x20F2C50)
#define STRUCT_2_7DD9A21CF08FCEFF__CTOR_2_OFFSET UNITYSDK_OFFSET(0x20F2C60)
#define STRUCT_2_7DD9A21CF08FCEFF__CTOR_OFFSET UNITYSDK_OFFSET(0x20F2B80)

inline static constexpr unsigned int Struct_2_7DD9A21CF08FCEFF_TypeDefinitionIndex = 8616;

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

	::System::String* Method_2_97817351D067D82C()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_7DD9A21CF08FCEFF_METHOD_2_97817351D067D82C_OFFSET))(this);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_7DD9A21CF08FCEFF_METHOD_2_9681042564541CD6_OFFSET))(this);
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

	::System::Void Method_2_05845255F81DB107(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + STRUCT_2_7DD9A21CF08FCEFF_METHOD_2_05845255F81DB107_OFFSET))(this, a1);
	}

	::System::Void Method_2_999B651118A235D3(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + STRUCT_2_7DD9A21CF08FCEFF_METHOD_2_999B651118A235D3_OFFSET))(this, a1);
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

	::System::Void Method_2_6C08739477BB6C64(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_7DD9A21CF08FCEFF_METHOD_2_6C08739477BB6C64_OFFSET))(this, a1);
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

	::System::Void Method_2_90AD2BDDCCA77A5B(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_7DD9A21CF08FCEFF_METHOD_2_90AD2BDDCCA77A5B_OFFSET))(this, a1);
	}

	::System::Void Method_2_5C061BFFDACCF2F9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_7DD9A21CF08FCEFF_METHOD_2_5C061BFFDACCF2F9_OFFSET))(this);
	}

	::System::Void Method_2_FC336EACA7E27564(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + STRUCT_2_7DD9A21CF08FCEFF_METHOD_2_FC336EACA7E27564_OFFSET))(this, a1);
	}
};
