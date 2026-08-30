#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ELevelPerformanceType.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define CLASS_1_BBFA1176EE30CCBC_STRUCT_2_0DAB5C20F457E380_6_EQUALS_OFFSET UNITYSDK_OFFSET(0x3B7A7B0)
#define CLASS_1_BBFA1176EE30CCBC_STRUCT_2_0DAB5C20F457E380_6_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3B7A7D0)
#define CLASS_1_BBFA1176EE30CCBC_STRUCT_2_0DAB5C20F457E380_6_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3BBBC20)
#define CLASS_1_BBFA1176EE30CCBC_STRUCT_2_0DAB5C20F457E380_6__CTOR_OFFSET UNITYSDK_OFFSET(0x6B4C20)

inline static constexpr unsigned int Class_1_BBFA1176EE30CCBC_Struct_2_0DAB5C20F457E380_6_TypeDefinitionIndex = 14253;

struct alignas(4) Class_1_BBFA1176EE30CCBC_Struct_2_0DAB5C20F457E380_6
{
	::RPG::GameCore::ELevelPerformanceType DNGFHOEACBI; // 0x10
	::System::UInt32 HNPDLANHONH; // 0x14

	::System::Void _ctor(::RPG::GameCore::ELevelPerformanceType a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ELevelPerformanceType, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_BBFA1176EE30CCBC_STRUCT_2_0DAB5C20F457E380_6__CTOR_OFFSET))(this, a1, a2);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BBFA1176EE30CCBC_STRUCT_2_0DAB5C20F457E380_6_TOSTRING_OFFSET))(this);
	}

	::System::Boolean Equals(::Class_1_BBFA1176EE30CCBC_Struct_2_0DAB5C20F457E380_6 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_BBFA1176EE30CCBC_Struct_2_0DAB5C20F457E380_6))((::PBYTE)hIl2Cpp + CLASS_1_BBFA1176EE30CCBC_STRUCT_2_0DAB5C20F457E380_6_EQUALS_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BBFA1176EE30CCBC_STRUCT_2_0DAB5C20F457E380_6_GETHASHCODE_OFFSET))(this);
	}
};
