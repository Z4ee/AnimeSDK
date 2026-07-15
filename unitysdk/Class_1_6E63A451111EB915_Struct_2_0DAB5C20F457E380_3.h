#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ELevelPerformanceType.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define CLASS_1_6E63A451111EB915_STRUCT_2_0DAB5C20F457E380_3_EQUALS_OFFSET UNITYSDK_OFFSET(0x39E7D30)
#define CLASS_1_6E63A451111EB915_STRUCT_2_0DAB5C20F457E380_3_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x39EB180)
#define CLASS_1_6E63A451111EB915_STRUCT_2_0DAB5C20F457E380_3_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3A310E0)
#define CLASS_1_6E63A451111EB915_STRUCT_2_0DAB5C20F457E380_3__CTOR_OFFSET UNITYSDK_OFFSET(0x6E5720)

inline static constexpr unsigned int Class_1_6E63A451111EB915_Struct_2_0DAB5C20F457E380_3_TypeDefinitionIndex = 13827;

struct alignas(4) Class_1_6E63A451111EB915_Struct_2_0DAB5C20F457E380_3
{
	::RPG::GameCore::ELevelPerformanceType Field_2_0; // 0x10
	::System::UInt32 Field_2_1; // 0x14

	::System::Void _ctor(::RPG::GameCore::ELevelPerformanceType a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ELevelPerformanceType, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_6E63A451111EB915_STRUCT_2_0DAB5C20F457E380_3__CTOR_OFFSET))(this, a1, a2);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6E63A451111EB915_STRUCT_2_0DAB5C20F457E380_3_TOSTRING_OFFSET))(this);
	}

	::System::Boolean Equals(::Class_1_6E63A451111EB915_Struct_2_0DAB5C20F457E380_3 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_6E63A451111EB915_Struct_2_0DAB5C20F457E380_3))((::PBYTE)hIl2Cpp + CLASS_1_6E63A451111EB915_STRUCT_2_0DAB5C20F457E380_3_EQUALS_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6E63A451111EB915_STRUCT_2_0DAB5C20F457E380_3_GETHASHCODE_OFFSET))(this);
	}
};
