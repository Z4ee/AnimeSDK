#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define CLASS_1_D501FC103C8A2714_STRUCT_2_E507270F1638B220_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3C52D50)
#define CLASS_1_D501FC103C8A2714_STRUCT_2_E507270F1638B220_EQUALS_OFFSET UNITYSDK_OFFSET(0x3C52CE0)
#define CLASS_1_D501FC103C8A2714_STRUCT_2_E507270F1638B220_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3C52D60)
#define CLASS_1_D501FC103C8A2714_STRUCT_2_E507270F1638B220__CTOR_OFFSET UNITYSDK_OFFSET(0x3C52CD0)

inline static constexpr unsigned int Class_1_D501FC103C8A2714_Struct_2_E507270F1638B220_TypeDefinitionIndex = 44269;

struct alignas(8) Class_1_D501FC103C8A2714_Struct_2_E507270F1638B220
{
	::System::Object* MCLLALGABAB; // 0x10

	::System::Void _ctor(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D501FC103C8A2714_STRUCT_2_E507270F1638B220__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::Class_1_D501FC103C8A2714_Struct_2_E507270F1638B220 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D501FC103C8A2714_Struct_2_E507270F1638B220))((::PBYTE)hIl2Cpp + CLASS_1_D501FC103C8A2714_STRUCT_2_E507270F1638B220_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D501FC103C8A2714_STRUCT_2_E507270F1638B220_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D501FC103C8A2714_STRUCT_2_E507270F1638B220_GETHASHCODE_OFFSET))(this);
	}
};
