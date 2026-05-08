#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class Class_2_F58E1814EA419801;
namespace System { class String; }

#define CLASS_2_F58E1814EA419801_STRUCT_2_C15E8C94F2E3D738_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8EABD0)
#define CLASS_2_F58E1814EA419801_STRUCT_2_C15E8C94F2E3D738__CTOR_OFFSET UNITYSDK_OFFSET(0x8EABC0)

inline static constexpr unsigned int Class_2_F58E1814EA419801_Struct_2_C15E8C94F2E3D738_TypeDefinitionIndex = 33020;

struct alignas(8) Class_2_F58E1814EA419801_Struct_2_C15E8C94F2E3D738
{
	::Class_2_F58E1814EA419801* Field_2_0; // 0x10
	::System::String* Field_2_1; // 0x18

	::System::Void _ctor(::Class_2_F58E1814EA419801* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_F58E1814EA419801*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_F58E1814EA419801_STRUCT_2_C15E8C94F2E3D738__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F58E1814EA419801_STRUCT_2_C15E8C94F2E3D738_DISPOSE_OFFSET))(this);
	}
};
