#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_2B6684D3E43696AE_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x15A63C0)
#define STRUCT_2_2B6684D3E43696AE__CCTOR_OFFSET UNITYSDK_OFFSET(0x11869EE0)

inline static constexpr unsigned int Struct_2_2B6684D3E43696AE_TypeDefinitionIndex = 53207;

struct alignas(4) Struct_2_2B6684D3E43696AE
{
	static ::Struct_2_2B6684D3E43696AE* StaticGet_Field_2_2()
	{
		return (::Struct_2_2B6684D3E43696AE*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_2B6684D3E43696AE_TypeDefinitionIndex)->GetStaticField(0x3340);
	}
	::System::Int32 Field_2_0; // 0x10
	::System::Int32 Field_2_1; // 0x14

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_2B6684D3E43696AE__CCTOR_OFFSET))();
	}

	::System::Boolean Method_2_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_2B6684D3E43696AE_METHOD_2_1D4018D4200358D0_OFFSET))(this);
	}
};
