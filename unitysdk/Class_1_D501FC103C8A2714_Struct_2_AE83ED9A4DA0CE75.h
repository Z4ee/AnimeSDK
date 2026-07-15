#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define CLASS_1_D501FC103C8A2714_STRUCT_2_AE83ED9A4DA0CE75_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3AD39C0)
#define CLASS_1_D501FC103C8A2714_STRUCT_2_AE83ED9A4DA0CE75_EQUALS_OFFSET UNITYSDK_OFFSET(0x3AD3950)
#define CLASS_1_D501FC103C8A2714_STRUCT_2_AE83ED9A4DA0CE75_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3AD39D0)
#define CLASS_1_D501FC103C8A2714_STRUCT_2_AE83ED9A4DA0CE75__CTOR_OFFSET UNITYSDK_OFFSET(0x3AD3940)

inline static constexpr unsigned int Class_1_D501FC103C8A2714_Struct_2_AE83ED9A4DA0CE75_TypeDefinitionIndex = 41467;

struct alignas(8) Class_1_D501FC103C8A2714_Struct_2_AE83ED9A4DA0CE75
{
	::System::Object* Field_2_0; // 0x10

	::System::Void _ctor(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D501FC103C8A2714_STRUCT_2_AE83ED9A4DA0CE75__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::Class_1_D501FC103C8A2714_Struct_2_AE83ED9A4DA0CE75 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D501FC103C8A2714_Struct_2_AE83ED9A4DA0CE75))((::PBYTE)hIl2Cpp + CLASS_1_D501FC103C8A2714_STRUCT_2_AE83ED9A4DA0CE75_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D501FC103C8A2714_STRUCT_2_AE83ED9A4DA0CE75_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D501FC103C8A2714_STRUCT_2_AE83ED9A4DA0CE75_GETHASHCODE_OFFSET))(this);
	}
};
