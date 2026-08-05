#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_F0A8349636E83FAC_1_DISPOSE_OFFSET UNITYSDK_OFFSET(0x669860)
#define STRUCT_2_F0A8349636E83FAC_1_METHOD_2_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x325570)
#define STRUCT_2_F0A8349636E83FAC_1_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x669870)
#define STRUCT_2_F0A8349636E83FAC_1__CCTOR_OFFSET UNITYSDK_OFFSET(0xF7C3C10)
#define STRUCT_2_F0A8349636E83FAC_1__CTOR_OFFSET UNITYSDK_OFFSET(0x3253A0)

inline static constexpr unsigned int Struct_2_F0A8349636E83FAC_1_TypeDefinitionIndex = 50533;

struct alignas(4) Struct_2_F0A8349636E83FAC_1
{
	static ::Struct_2_F0A8349636E83FAC_1* StaticGet_Field_2_1()
	{
		return (::Struct_2_F0A8349636E83FAC_1*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_F0A8349636E83FAC_1_TypeDefinitionIndex)->GetStaticField(0xA8B0);
	}
	// static const ::System::UInt32 Field_2_2 = 0x0; // 0x0
	::System::UInt32 Field_2_0; // 0x10

	::System::Void _ctor(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + STRUCT_2_F0A8349636E83FAC_1__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_F0A8349636E83FAC_1__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_F0A8349636E83FAC_1_DISPOSE_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_F0A8349636E83FAC_1_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::UInt32 Method_2_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_F0A8349636E83FAC_1_METHOD_2_02A3D10A9D535169_OFFSET))(this);
	}
};
