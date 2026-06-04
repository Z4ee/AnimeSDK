#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define STRUCT_2_A158632FE1070502_METHOD_2_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x6EF0)
#define STRUCT_2_A158632FE1070502_METHOD_2_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0xDAD0)
#define STRUCT_2_A158632FE1070502_METHOD_2_C74CF020AA42ED85_1_OFFSET UNITYSDK_OFFSET(0x6EE0)
#define STRUCT_2_A158632FE1070502_METHOD_2_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x140A50)
#define STRUCT_2_A158632FE1070502_METHOD_2_CE81D059476B1F49_OFFSET UNITYSDK_OFFSET(0x5B60)
#define STRUCT_2_A158632FE1070502_TOSTRING_OFFSET UNITYSDK_OFFSET(0x383FC00)
#define STRUCT_2_A158632FE1070502__CCTOR_OFFSET UNITYSDK_OFFSET(0x188FB720)
#define STRUCT_2_A158632FE1070502___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x383FC10)

inline static constexpr unsigned int Struct_2_A158632FE1070502_TypeDefinitionIndex = 38500;

struct alignas(4) Struct_2_A158632FE1070502
{
	static ::Struct_2_A158632FE1070502* StaticGet_Field_2_0()
	{
		return (::Struct_2_A158632FE1070502*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_A158632FE1070502_TypeDefinitionIndex)->GetStaticField(0x143A0);
	}
	::System::UInt64 Field_2_1; // 0x10
	::System::UInt32 Field_2_2; // 0x18
	::System::Int32 Field_2_3; // 0x1C
	::System::Int32 Field_2_4; // 0x20
	::System::UInt32 Field_2_5; // 0x24

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_A158632FE1070502__CCTOR_OFFSET))();
	}

	::System::UInt64 Method_2_CE81D059476B1F49()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_A158632FE1070502_METHOD_2_CE81D059476B1F49_OFFSET))(this);
	}

	::System::UInt32 Method_2_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_A158632FE1070502_METHOD_2_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Int32 Method_2_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_A158632FE1070502_METHOD_2_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Int32 Method_2_C74CF020AA42ED85_1()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_A158632FE1070502_METHOD_2_C74CF020AA42ED85_1_OFFSET))(this);
	}

	::System::UInt32 Method_2_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_A158632FE1070502_METHOD_2_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_A158632FE1070502_TOSTRING_OFFSET))(this);
	}

	::System::String* __iFixBaseProxy_ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_A158632FE1070502___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
	}
};
