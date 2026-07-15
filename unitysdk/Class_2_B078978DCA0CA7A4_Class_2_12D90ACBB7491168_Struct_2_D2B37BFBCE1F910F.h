#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::GameCore { class GameEntity; }

#define CLASS_2_B078978DCA0CA7A4_CLASS_2_12D90ACBB7491168_STRUCT_2_D2B37BFBCE1F910F_COMPARETO_OFFSET UNITYSDK_OFFSET(0x38FD200)

inline static constexpr unsigned int Class_2_B078978DCA0CA7A4_Class_2_12D90ACBB7491168_Struct_2_D2B37BFBCE1F910F_TypeDefinitionIndex = 51912;

struct alignas(8) Class_2_B078978DCA0CA7A4_Class_2_12D90ACBB7491168_Struct_2_D2B37BFBCE1F910F
{
	::RPG::GameCore::GameEntity* Field_2_0; // 0x10
	::RPG::GameCore::FixPoint Field_2_1; // 0x18

	::System::Int32 CompareTo(::Class_2_B078978DCA0CA7A4_Class_2_12D90ACBB7491168_Struct_2_D2B37BFBCE1F910F a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_B078978DCA0CA7A4_Class_2_12D90ACBB7491168_Struct_2_D2B37BFBCE1F910F))((::PBYTE)hIl2Cpp + CLASS_2_B078978DCA0CA7A4_CLASS_2_12D90ACBB7491168_STRUCT_2_D2B37BFBCE1F910F_COMPARETO_OFFSET))(this, a1);
	}
};
