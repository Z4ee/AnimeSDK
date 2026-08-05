#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_688FBF6C0FC439E7_Class_2_D8B15E985D81CC11.h"
#include "unitysdk/Class_1_688FBF6C0FC439E7_Enum_3_771D25DE24EB14A9.h"

namespace System { class String; }

#define CLASS_1_688FBF6C0FC439E7_CLASS_3_E190156E60C8A95B_METHOD_3_83DA3EC57FF907F4_OFFSET UNITYSDK_OFFSET(0x13D3B110)
#define CLASS_1_688FBF6C0FC439E7_CLASS_3_E190156E60C8A95B__CTOR_OFFSET UNITYSDK_OFFSET(0x13D3B0F0)

inline static constexpr unsigned int Class_1_688FBF6C0FC439E7_Class_3_E190156E60C8A95B_TypeDefinitionIndex = 61116;

class Class_1_688FBF6C0FC439E7_Class_3_E190156E60C8A95B : public ::Class_1_688FBF6C0FC439E7_Class_2_D8B15E985D81CC11
{
public:
	::System::String* Field_3_2; // 0x28
	::System::String* Field_3_1; // 0x30
	::Class_1_688FBF6C0FC439E7_Enum_3_771D25DE24EB14A9 Field_3_0; // 0x38

	::System::Void _ctor(::System::String* a1, ::System::String* a2, ::Class_1_688FBF6C0FC439E7_Enum_3_771D25DE24EB14A9 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::Class_1_688FBF6C0FC439E7_Enum_3_771D25DE24EB14A9))((::PBYTE)hIl2Cpp + CLASS_1_688FBF6C0FC439E7_CLASS_3_E190156E60C8A95B__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_3_83DA3EC57FF907F4()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_688FBF6C0FC439E7_CLASS_3_E190156E60C8A95B_METHOD_3_83DA3EC57FF907F4_OFFSET))(this);
	}
};
