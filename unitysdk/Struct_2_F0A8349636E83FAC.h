#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_F0A8349636E83FAC_METHOD_2_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x325570)
#define STRUCT_2_F0A8349636E83FAC_METHOD_2_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x3253A0)
#define STRUCT_2_F0A8349636E83FAC__CCTOR_OFFSET UNITYSDK_OFFSET(0x1495CAC0)
#define STRUCT_2_F0A8349636E83FAC__CTOR_OFFSET UNITYSDK_OFFSET(0x3253A0)

inline static constexpr unsigned int Struct_2_F0A8349636E83FAC_TypeDefinitionIndex = 40964;

struct alignas(4) Struct_2_F0A8349636E83FAC
{
	static ::Struct_2_F0A8349636E83FAC* StaticGet_Field_2_1()
	{
		return (::Struct_2_F0A8349636E83FAC*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_F0A8349636E83FAC_TypeDefinitionIndex)->GetStaticField(0xDAB0);
	}
	::System::UInt32 Field_2_0; // 0x10

	::System::Void _ctor(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + STRUCT_2_F0A8349636E83FAC__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_F0A8349636E83FAC__CCTOR_OFFSET))();
	}

	::System::Void Method_2_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + STRUCT_2_F0A8349636E83FAC_METHOD_2_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_2_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_F0A8349636E83FAC_METHOD_2_02A3D10A9D535169_OFFSET))(this);
	}
};
