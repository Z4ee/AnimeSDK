#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_4D9CF89F354D176D.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace System { class Type; }

#define CLASS_1_BCD66C4EEA7B5CCD_STRUCT_2_A1A2B0FB87EEB484__CTOR_OFFSET UNITYSDK_OFFSET(0x846A40)

inline static constexpr unsigned int Class_1_BCD66C4EEA7B5CCD_Struct_2_A1A2B0FB87EEB484_TypeDefinitionIndex = 58856;

struct alignas(8) Class_1_BCD66C4EEA7B5CCD_Struct_2_A1A2B0FB87EEB484
{
	::System::String* Field_2_2; // 0x10
	::System::Type* Field_2_1; // 0x18
	::System::String* Field_2_0; // 0x20
	::Enum_3_4D9CF89F354D176D Field_2_7; // 0x28
	::System::Boolean Field_2_6; // 0x29

	::System::Void _ctor(::System::String* a1, ::System::String* a2, ::Enum_3_4D9CF89F354D176D a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::Enum_3_4D9CF89F354D176D, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_BCD66C4EEA7B5CCD_STRUCT_2_A1A2B0FB87EEB484__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}
};
