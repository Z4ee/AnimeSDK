#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define STRUCT_2_884D1F4F7FF83019_1_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x90EA40)
#define STRUCT_2_884D1F4F7FF83019_1_EQUALS_OFFSET UNITYSDK_OFFSET(0x90E930)
#define STRUCT_2_884D1F4F7FF83019_1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x90EA50)
#define STRUCT_2_884D1F4F7FF83019_1_METHOD_2_6D0360BD23602584_OFFSET UNITYSDK_OFFSET(0x90EB50)
#define STRUCT_2_884D1F4F7FF83019_1_METHOD_2_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x90EAE0)
#define STRUCT_2_884D1F4F7FF83019_1__CTOR_OFFSET UNITYSDK_OFFSET(0x90E8E0)

inline static constexpr unsigned int Struct_2_884D1F4F7FF83019_1_TypeDefinitionIndex = 91792;

struct alignas(4) Struct_2_884D1F4F7FF83019_1
{
	// static const ::System::Int32 Field_2_3 = 0x8; // 0x0
	::System::Int32 Field_2_2; // 0x10
	::System::Int32 Field_2_1; // 0x14
	::System::Int32 Field_2_0; // 0x18
	::System::Int32 Field_2_7; // 0x1C
	::System::Int32 Field_2_6; // 0x20
	::System::Int32 Field_2_5; // 0x24
	::System::Int32 Field_2_4; // 0x28
	::System::Int32 Field_2_11; // 0x2C
	::System::Boolean Field_2_10; // 0x30

	::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5, ::System::Int32 a6, ::System::Int32 a7, ::System::Int32 a8, ::System::Boolean a9)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + STRUCT_2_884D1F4F7FF83019_1__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
	}

	::System::Boolean Equals(::Struct_2_884D1F4F7FF83019_1 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_884D1F4F7FF83019_1))((::PBYTE)hIl2Cpp + STRUCT_2_884D1F4F7FF83019_1_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_884D1F4F7FF83019_1_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_884D1F4F7FF83019_1_GETHASHCODE_OFFSET))(this);
	}

	::System::Int32 Method_2_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_884D1F4F7FF83019_1_METHOD_2_95780ED94B90ED36_OFFSET))(this);
	}

	::System::Boolean Method_2_6D0360BD23602584(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_884D1F4F7FF83019_1_METHOD_2_6D0360BD23602584_OFFSET))(this, a1);
	}
};
