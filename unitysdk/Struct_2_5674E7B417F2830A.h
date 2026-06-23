#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define STRUCT_2_5674E7B417F2830A_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x69D200)
#define STRUCT_2_5674E7B417F2830A_EQUALS_OFFSET UNITYSDK_OFFSET(0x69D1A0)
#define STRUCT_2_5674E7B417F2830A_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x69D210)
#define STRUCT_2_5674E7B417F2830A_METHOD_2_6D0360BD23602584_OFFSET UNITYSDK_OFFSET(0x69D260)
#define STRUCT_2_5674E7B417F2830A_METHOD_2_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x69D2C0)
#define STRUCT_2_5674E7B417F2830A__CTOR_OFFSET UNITYSDK_OFFSET(0x2AB920)

inline static constexpr unsigned int Struct_2_5674E7B417F2830A_TypeDefinitionIndex = 58133;

struct alignas(4) Struct_2_5674E7B417F2830A
{
	::System::Int32 Field_2_0; // 0x10
	::System::Int32 Field_2_1; // 0x14

	::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_5674E7B417F2830A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Equals(::Struct_2_5674E7B417F2830A a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_5674E7B417F2830A))((::PBYTE)hIl2Cpp + STRUCT_2_5674E7B417F2830A_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_5674E7B417F2830A_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_5674E7B417F2830A_GETHASHCODE_OFFSET))(this);
	}

	::System::Boolean Method_2_6D0360BD23602584(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_5674E7B417F2830A_METHOD_2_6D0360BD23602584_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_5674E7B417F2830A_METHOD_2_95780ED94B90ED36_OFFSET))(this);
	}
};
