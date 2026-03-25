#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_1_E247724AC0B927B6_STRUCT_2_7AAAE9ED7761A3A5_COMPARETO_OFFSET UNITYSDK_OFFSET(0x74CA0)

inline static constexpr unsigned int Class_1_E247724AC0B927B6_Struct_2_7AAAE9ED7761A3A5_TypeDefinitionIndex = 49499;

struct alignas(4) Class_1_E247724AC0B927B6_Struct_2_7AAAE9ED7761A3A5
{
	::RPG::GameCore::TeamType Field_2_0; // 0x10
	::UnityEngine::Vector3 Field_2_1; // 0x14
	::System::Single Field_2_2; // 0x20

	::System::Int32 CompareTo(::Class_1_E247724AC0B927B6_Struct_2_7AAAE9ED7761A3A5 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_E247724AC0B927B6_Struct_2_7AAAE9ED7761A3A5))((::PBYTE)hIl2Cpp + CLASS_1_E247724AC0B927B6_STRUCT_2_7AAAE9ED7761A3A5_COMPARETO_OFFSET))(this, a1);
	}
};
