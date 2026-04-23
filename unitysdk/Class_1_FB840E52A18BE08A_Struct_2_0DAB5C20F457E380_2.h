#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ELevelPerformanceType.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define CLASS_1_FB840E52A18BE08A_STRUCT_2_0DAB5C20F457E380_2_EQUALS_OFFSET UNITYSDK_OFFSET(0x22BA540)
#define CLASS_1_FB840E52A18BE08A_STRUCT_2_0DAB5C20F457E380_2_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x22BA560)
#define CLASS_1_FB840E52A18BE08A_STRUCT_2_0DAB5C20F457E380_2_TOSTRING_OFFSET UNITYSDK_OFFSET(0x22BB8C0)
#define CLASS_1_FB840E52A18BE08A_STRUCT_2_0DAB5C20F457E380_2__CTOR_OFFSET UNITYSDK_OFFSET(0x73E20)

inline static constexpr unsigned int Class_1_FB840E52A18BE08A_Struct_2_0DAB5C20F457E380_2_TypeDefinitionIndex = 13606;

struct alignas(4) Class_1_FB840E52A18BE08A_Struct_2_0DAB5C20F457E380_2
{
	::RPG::GameCore::ELevelPerformanceType Field_2_0; // 0x10
	::System::UInt32 Field_2_1; // 0x14

	::System::Void _ctor(::RPG::GameCore::ELevelPerformanceType a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ELevelPerformanceType, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FB840E52A18BE08A_STRUCT_2_0DAB5C20F457E380_2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FB840E52A18BE08A_STRUCT_2_0DAB5C20F457E380_2_TOSTRING_OFFSET))(this);
	}

	::System::Boolean Equals(::Class_1_FB840E52A18BE08A_Struct_2_0DAB5C20F457E380_2 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_FB840E52A18BE08A_Struct_2_0DAB5C20F457E380_2))((::PBYTE)hIl2Cpp + CLASS_1_FB840E52A18BE08A_STRUCT_2_0DAB5C20F457E380_2_EQUALS_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FB840E52A18BE08A_STRUCT_2_0DAB5C20F457E380_2_GETHASHCODE_OFFSET))(this);
	}
};
