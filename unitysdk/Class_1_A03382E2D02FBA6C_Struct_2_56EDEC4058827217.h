#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_A03382E2D02FBA6C_STRUCT_2_56EDEC4058827217_COMPARETO_OFFSET UNITYSDK_OFFSET(0x2BCEC10)

inline static constexpr unsigned int Class_1_A03382E2D02FBA6C_Struct_2_56EDEC4058827217_TypeDefinitionIndex = 50628;

struct alignas(8) Class_1_A03382E2D02FBA6C_Struct_2_56EDEC4058827217
{
	::RPG::GameCore::GameEntity* Field_2_0; // 0x10
	::RPG::GameCore::FixPoint Field_2_1; // 0x18
	::System::Int32 Field_2_2; // 0x20

	::System::Int32 CompareTo(::Class_1_A03382E2D02FBA6C_Struct_2_56EDEC4058827217 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_A03382E2D02FBA6C_Struct_2_56EDEC4058827217))((::PBYTE)hIl2Cpp + CLASS_1_A03382E2D02FBA6C_STRUCT_2_56EDEC4058827217_COMPARETO_OFFSET))(this, a1);
	}
};
