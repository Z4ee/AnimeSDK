#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_7D15F1C413E7C92C.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define STRUCT_2_9631509AB5AD4C70_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xA169D0)
#define STRUCT_2_9631509AB5AD4C70_EQUALS_OFFSET UNITYSDK_OFFSET(0xA16900)
#define STRUCT_2_9631509AB5AD4C70_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA169E0)
#define STRUCT_2_9631509AB5AD4C70_METHOD_2_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x31CCF0)
#define STRUCT_2_9631509AB5AD4C70_METHOD_2_35EA095E1AFDD9C8_OFFSET UNITYSDK_OFFSET(0xA16BD0)
#define STRUCT_2_9631509AB5AD4C70_METHOD_2_6D0360BD23602584_OFFSET UNITYSDK_OFFSET(0xA16B60)
#define STRUCT_2_9631509AB5AD4C70_METHOD_2_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0xA16B00)
#define STRUCT_2_9631509AB5AD4C70_METHOD_2_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x325570)
#define STRUCT_2_9631509AB5AD4C70_METHOD_2_BE560DD3F683CA66_OFFSET UNITYSDK_OFFSET(0x1E3ACB00)
#define STRUCT_2_9631509AB5AD4C70_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x634790)
#define STRUCT_2_9631509AB5AD4C70_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA168F0)
#define STRUCT_2_9631509AB5AD4C70__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3AD8C0)
#define STRUCT_2_9631509AB5AD4C70__CTOR_OFFSET UNITYSDK_OFFSET(0xA168E0)

inline static constexpr unsigned int Struct_2_9631509AB5AD4C70_TypeDefinitionIndex = 34529;

struct alignas(8) Struct_2_9631509AB5AD4C70
{
	static ::Struct_2_9631509AB5AD4C70* StaticGet_Field_2_7()
	{
		return (::Struct_2_9631509AB5AD4C70*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_9631509AB5AD4C70_TypeDefinitionIndex)->GetStaticField(0x28E00);
	}
	static ::Struct_2_9631509AB5AD4C70* StaticGet_Field_2_6()
	{
		return (::Struct_2_9631509AB5AD4C70*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_9631509AB5AD4C70_TypeDefinitionIndex)->GetStaticField(0x28E10);
	}
	::Enum_3_7D15F1C413E7C92C Field_2_1; // 0x10
	::System::String* Field_2_0; // 0x18

	::System::Void _ctor(::Enum_3_7D15F1C413E7C92C a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_7D15F1C413E7C92C, ::System::String*))((::PBYTE)hIl2Cpp + STRUCT_2_9631509AB5AD4C70__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_9631509AB5AD4C70__CCTOR_OFFSET))();
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_9631509AB5AD4C70_TOSTRING_OFFSET))(this);
	}

	::System::Boolean Equals(::Struct_2_9631509AB5AD4C70 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_9631509AB5AD4C70))((::PBYTE)hIl2Cpp + STRUCT_2_9631509AB5AD4C70_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_9631509AB5AD4C70_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_9631509AB5AD4C70_GETHASHCODE_OFFSET))(this);
	}

	::System::Int32 Method_2_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_9631509AB5AD4C70_METHOD_2_95780ED94B90ED36_OFFSET))(this);
	}

	::System::String* Method_2_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_9631509AB5AD4C70_METHOD_2_126AB3935214AA22_OFFSET))(this);
	}

	::System::Boolean Method_2_6D0360BD23602584(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_9631509AB5AD4C70_METHOD_2_6D0360BD23602584_OFFSET))(this, a1);
	}

	static ::System::String* Method_2_BE560DD3F683CA66(::System::String* a1, ::System::Int32 a2)
	{
		return ((::System::String*(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_9631509AB5AD4C70_METHOD_2_BE560DD3F683CA66_OFFSET))(a1, a2);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_9631509AB5AD4C70_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::Enum_3_7D15F1C413E7C92C Method_2_A96DCA30C6927810()
	{
		return ((::Enum_3_7D15F1C413E7C92C(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_9631509AB5AD4C70_METHOD_2_A96DCA30C6927810_OFFSET))(this);
	}

	::System::String* Method_2_35EA095E1AFDD9C8()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_9631509AB5AD4C70_METHOD_2_35EA095E1AFDD9C8_OFFSET))(this);
	}
};
