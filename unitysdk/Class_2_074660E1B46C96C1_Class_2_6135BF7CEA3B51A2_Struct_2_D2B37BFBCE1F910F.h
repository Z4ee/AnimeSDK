#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::GameCore { class GameEntity; }

#define CLASS_2_074660E1B46C96C1_CLASS_2_6135BF7CEA3B51A2_STRUCT_2_D2B37BFBCE1F910F_COMPARETO_OFFSET UNITYSDK_OFFSET(0x133830)

inline static constexpr unsigned int Class_2_074660E1B46C96C1_Class_2_6135BF7CEA3B51A2_Struct_2_D2B37BFBCE1F910F_TypeDefinitionIndex = 50827;

struct alignas(8) Class_2_074660E1B46C96C1_Class_2_6135BF7CEA3B51A2_Struct_2_D2B37BFBCE1F910F
{
	::RPG::GameCore::GameEntity* Field_2_0; // 0x10
	::RPG::GameCore::FixPoint Field_2_1; // 0x18

	::System::Int32 CompareTo(::Class_2_074660E1B46C96C1_Class_2_6135BF7CEA3B51A2_Struct_2_D2B37BFBCE1F910F a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_074660E1B46C96C1_Class_2_6135BF7CEA3B51A2_Struct_2_D2B37BFBCE1F910F))((::PBYTE)hIl2Cpp + CLASS_2_074660E1B46C96C1_CLASS_2_6135BF7CEA3B51A2_STRUCT_2_D2B37BFBCE1F910F_COMPARETO_OFFSET))(this, a1);
	}
};
