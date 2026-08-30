#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ELevelPerformanceType.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define CLASS_1_E0BD222FF9364CEF_STRUCT_2_0DAB5C20F457E380_4_EQUALS_OFFSET UNITYSDK_OFFSET(0x3B7A7B0)
#define CLASS_1_E0BD222FF9364CEF_STRUCT_2_0DAB5C20F457E380_4_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3B7A7D0)
#define CLASS_1_E0BD222FF9364CEF_STRUCT_2_0DAB5C20F457E380_4_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3BC4090)
#define CLASS_1_E0BD222FF9364CEF_STRUCT_2_0DAB5C20F457E380_4__CTOR_OFFSET UNITYSDK_OFFSET(0x6B4C20)

inline static constexpr unsigned int Class_1_E0BD222FF9364CEF_Struct_2_0DAB5C20F457E380_4_TypeDefinitionIndex = 14247;

struct alignas(4) Class_1_E0BD222FF9364CEF_Struct_2_0DAB5C20F457E380_4
{
	::RPG::GameCore::ELevelPerformanceType DNGFHOEACBI; // 0x10
	::System::UInt32 HNPDLANHONH; // 0x14

	::System::Void _ctor(::RPG::GameCore::ELevelPerformanceType a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ELevelPerformanceType, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_E0BD222FF9364CEF_STRUCT_2_0DAB5C20F457E380_4__CTOR_OFFSET))(this, a1, a2);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E0BD222FF9364CEF_STRUCT_2_0DAB5C20F457E380_4_TOSTRING_OFFSET))(this);
	}

	::System::Boolean Equals(::Class_1_E0BD222FF9364CEF_Struct_2_0DAB5C20F457E380_4 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_E0BD222FF9364CEF_Struct_2_0DAB5C20F457E380_4))((::PBYTE)hIl2Cpp + CLASS_1_E0BD222FF9364CEF_STRUCT_2_0DAB5C20F457E380_4_EQUALS_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E0BD222FF9364CEF_STRUCT_2_0DAB5C20F457E380_4_GETHASHCODE_OFFSET))(this);
	}
};
