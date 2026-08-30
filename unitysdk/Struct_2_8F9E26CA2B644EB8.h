#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define STRUCT_2_8F9E26CA2B644EB8_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3B7AA90)
#define STRUCT_2_8F9E26CA2B644EB8_EQUALS_OFFSET UNITYSDK_OFFSET(0x3B7AA20)
#define STRUCT_2_8F9E26CA2B644EB8_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3B7AAA0)
#define STRUCT_2_8F9E26CA2B644EB8_METHOD_2_57A8E11FECF10345_OFFSET UNITYSDK_OFFSET(0x1C389C70)
#define STRUCT_2_8F9E26CA2B644EB8_METHOD_2_726D00087F5202C3_OFFSET UNITYSDK_OFFSET(0x1C389BB0)
#define STRUCT_2_8F9E26CA2B644EB8__CTOR_OFFSET UNITYSDK_OFFSET(0x7CCB0)

inline static constexpr unsigned int Struct_2_8F9E26CA2B644EB8_TypeDefinitionIndex = 41608;

struct alignas(4) Struct_2_8F9E26CA2B644EB8
{
	::System::Int32 GAOAMKBNDPN; // 0x10
	::System::Int32 EBJKJAGJGPK; // 0x14
	::System::Int32 KIBPKPGDECO; // 0x18

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
};
