#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define STRUCT_2_8F9E26CA2B644EB8_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x22B7B10)
#define STRUCT_2_8F9E26CA2B644EB8_EQUALS_OFFSET UNITYSDK_OFFSET(0x22B7AA0)
#define STRUCT_2_8F9E26CA2B644EB8_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x22B7B20)
#define STRUCT_2_8F9E26CA2B644EB8_METHOD_2_57A8E11FECF10345_OFFSET UNITYSDK_OFFSET(0x18057800)
#define STRUCT_2_8F9E26CA2B644EB8_METHOD_2_726D00087F5202C3_OFFSET UNITYSDK_OFFSET(0x18057740)
#define STRUCT_2_8F9E26CA2B644EB8__CTOR_OFFSET UNITYSDK_OFFSET(0xD3340)
#define STRUCT_2_8F9E26CA2B644EB8___IFIXBASEPROXY_EQUALS_OFFSET UNITYSDK_OFFSET(0x22B7B80)
#define STRUCT_2_8F9E26CA2B644EB8___IFIXBASEPROXY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x22B7BF0)

inline static constexpr unsigned int Struct_2_8F9E26CA2B644EB8_TypeDefinitionIndex = 39077;

struct alignas(4) Struct_2_8F9E26CA2B644EB8
{
	::System::Int32 Field_2_0; // 0x10
	::System::Int32 Field_2_1; // 0x14
	::System::Int32 Field_2_2; // 0x18

	::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_8F9E26CA2B644EB8__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Equals(::Struct_2_8F9E26CA2B644EB8 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_8F9E26CA2B644EB8))((::PBYTE)hIl2Cpp + STRUCT_2_8F9E26CA2B644EB8_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_8F9E26CA2B644EB8_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_8F9E26CA2B644EB8_GETHASHCODE_OFFSET))(this);
	}

	static ::System::Boolean Method_2_726D00087F5202C3(::Struct_2_8F9E26CA2B644EB8 a1, ::Struct_2_8F9E26CA2B644EB8 a2)
	{
		return ((::System::Boolean(*)(::Struct_2_8F9E26CA2B644EB8, ::Struct_2_8F9E26CA2B644EB8))((::PBYTE)hIl2Cpp + STRUCT_2_8F9E26CA2B644EB8_METHOD_2_726D00087F5202C3_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_2_57A8E11FECF10345(::Struct_2_8F9E26CA2B644EB8 a1, ::Struct_2_8F9E26CA2B644EB8 a2)
	{
		return ((::System::Boolean(*)(::Struct_2_8F9E26CA2B644EB8, ::Struct_2_8F9E26CA2B644EB8))((::PBYTE)hIl2Cpp + STRUCT_2_8F9E26CA2B644EB8_METHOD_2_57A8E11FECF10345_OFFSET))(a1, a2);
	}

	::System::Boolean __iFixBaseProxy_Equals(::System::Object* P0)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_8F9E26CA2B644EB8___IFIXBASEPROXY_EQUALS_OFFSET))(this, P0);
	}

	::System::Int32 __iFixBaseProxy_GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_8F9E26CA2B644EB8___IFIXBASEPROXY_GETHASHCODE_OFFSET))(this);
	}
};
