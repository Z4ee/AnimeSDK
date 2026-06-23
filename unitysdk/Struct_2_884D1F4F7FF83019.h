#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define STRUCT_2_884D1F4F7FF83019_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x9C6F60)
#define STRUCT_2_884D1F4F7FF83019_EQUALS_OFFSET UNITYSDK_OFFSET(0x9C6E50)
#define STRUCT_2_884D1F4F7FF83019_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9C6F70)
#define STRUCT_2_884D1F4F7FF83019_METHOD_2_6D0360BD23602584_OFFSET UNITYSDK_OFFSET(0x9C7070)
#define STRUCT_2_884D1F4F7FF83019_METHOD_2_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x9C7000)
#define STRUCT_2_884D1F4F7FF83019__CTOR_OFFSET UNITYSDK_OFFSET(0x9B65D0)

inline static constexpr unsigned int Struct_2_884D1F4F7FF83019_TypeDefinitionIndex = 88729;

struct alignas(4) Struct_2_884D1F4F7FF83019
{
	// static const ::System::Int32 Field_2_0 = 0x8; // 0x0
	::System::Int32 Field_2_1; // 0x10
	::System::Int32 Field_2_2; // 0x14
	::System::Int32 Field_2_3; // 0x18
	::System::Int32 Field_2_4; // 0x1C
	::System::Int32 Field_2_5; // 0x20
	::System::Int32 Field_2_6; // 0x24
	::System::Int32 Field_2_7; // 0x28
	::System::Int32 Field_2_8; // 0x2C
	::System::Boolean Field_2_9; // 0x30

	::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5, ::System::Int32 a6, ::System::Int32 a7, ::System::Int32 a8, ::System::Boolean a9)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + STRUCT_2_884D1F4F7FF83019__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
	}

	::System::Boolean Equals(::Struct_2_884D1F4F7FF83019 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_884D1F4F7FF83019))((::PBYTE)hIl2Cpp + STRUCT_2_884D1F4F7FF83019_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_884D1F4F7FF83019_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_884D1F4F7FF83019_GETHASHCODE_OFFSET))(this);
	}

	::System::Int32 Method_2_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_884D1F4F7FF83019_METHOD_2_95780ED94B90ED36_OFFSET))(this);
	}

	::System::Boolean Method_2_6D0360BD23602584(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_884D1F4F7FF83019_METHOD_2_6D0360BD23602584_OFFSET))(this, a1);
	}
};
