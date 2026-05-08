#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_8A77D15D7EA8B8D3_1_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x76A8F0)
#define STRUCT_2_8A77D15D7EA8B8D3_1__CCTOR_OFFSET UNITYSDK_OFFSET(0x13639EC0)
#define STRUCT_2_8A77D15D7EA8B8D3_1__CTOR_OFFSET UNITYSDK_OFFSET(0x293FB0)

inline static constexpr unsigned int Struct_2_8A77D15D7EA8B8D3_1_TypeDefinitionIndex = 49586;

struct alignas(4) Struct_2_8A77D15D7EA8B8D3_1
{
	static ::Struct_2_8A77D15D7EA8B8D3_1* StaticGet_Field_2_0()
	{
		return (::Struct_2_8A77D15D7EA8B8D3_1*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_8A77D15D7EA8B8D3_1_TypeDefinitionIndex)->GetStaticField(0xCC60);
	}
	::System::Int32 Field_2_1; // 0x10
	::System::Int32 Field_2_2; // 0x14

	::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_8A77D15D7EA8B8D3_1__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_8A77D15D7EA8B8D3_1__CCTOR_OFFSET))();
	}

	::System::Boolean Method_2_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_8A77D15D7EA8B8D3_1_METHOD_2_1D4018D4200358D0_OFFSET))(this);
	}
};
