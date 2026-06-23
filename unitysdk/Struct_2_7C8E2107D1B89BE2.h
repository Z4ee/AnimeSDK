#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define STRUCT_2_7C8E2107D1B89BE2_METHOD_2_4887550F1C8031EC_OFFSET UNITYSDK_OFFSET(0x12251ED0)
#define STRUCT_2_7C8E2107D1B89BE2_METHOD_2_4E2BCE3C8705DF5E_OFFSET UNITYSDK_OFFSET(0x12251F80)
#define STRUCT_2_7C8E2107D1B89BE2_METHOD_2_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0x12252010)
#define STRUCT_2_7C8E2107D1B89BE2_METHOD_2_DEAE0CAF734CA850_OFFSET UNITYSDK_OFFSET(0x12252100)
#define STRUCT_2_7C8E2107D1B89BE2__CCTOR_OFFSET UNITYSDK_OFFSET(0x12251E70)

inline static constexpr unsigned int Struct_2_7C8E2107D1B89BE2_TypeDefinitionIndex = 40433;

struct alignas(1) Struct_2_7C8E2107D1B89BE2
{
	static ::System::Collections::Generic::HashSet_1<::System::UInt32>** StaticGet_Field_2_1()
	{
		return (::System::Collections::Generic::HashSet_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Struct_2_7C8E2107D1B89BE2_TypeDefinitionIndex)->GetStaticField(0x4A9C0);
	}
	static ::System::UInt32* StaticGet_Field_2_0()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_7C8E2107D1B89BE2_TypeDefinitionIndex)->GetStaticField(0x11970);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_7C8E2107D1B89BE2__CCTOR_OFFSET))();
	}

	static ::System::Boolean Method_2_4887550F1C8031EC(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + STRUCT_2_7C8E2107D1B89BE2_METHOD_2_4887550F1C8031EC_OFFSET))(a1);
	}

	static ::System::UInt32 Method_2_4E2BCE3C8705DF5E()
	{
		return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + STRUCT_2_7C8E2107D1B89BE2_METHOD_2_4E2BCE3C8705DF5E_OFFSET))();
	}

	static ::System::Void Method_2_D0BD1377F2594D33()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_7C8E2107D1B89BE2_METHOD_2_D0BD1377F2594D33_OFFSET))();
	}

	static ::System::Boolean Method_2_DEAE0CAF734CA850(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + STRUCT_2_7C8E2107D1B89BE2_METHOD_2_DEAE0CAF734CA850_OFFSET))(a1);
	}
};
