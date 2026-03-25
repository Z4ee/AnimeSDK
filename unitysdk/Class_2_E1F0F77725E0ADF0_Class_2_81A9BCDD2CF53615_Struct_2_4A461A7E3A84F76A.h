#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::GameCore { class GameEntity; }

#define CLASS_2_E1F0F77725E0ADF0_CLASS_2_81A9BCDD2CF53615_STRUCT_2_4A461A7E3A84F76A_COMPARETO_OFFSET UNITYSDK_OFFSET(0x14EB8F0)

inline static constexpr unsigned int Class_2_E1F0F77725E0ADF0_Class_2_81A9BCDD2CF53615_Struct_2_4A461A7E3A84F76A_TypeDefinitionIndex = 43463;

struct alignas(8) Class_2_E1F0F77725E0ADF0_Class_2_81A9BCDD2CF53615_Struct_2_4A461A7E3A84F76A
{
	::RPG::GameCore::GameEntity* Field_2_0; // 0x10
	::RPG::GameCore::FixPoint Field_2_1; // 0x18

	::System::Int32 CompareTo(::Class_2_E1F0F77725E0ADF0_Class_2_81A9BCDD2CF53615_Struct_2_4A461A7E3A84F76A a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_E1F0F77725E0ADF0_Class_2_81A9BCDD2CF53615_Struct_2_4A461A7E3A84F76A))((::PBYTE)hIl2Cpp + CLASS_2_E1F0F77725E0ADF0_CLASS_2_81A9BCDD2CF53615_STRUCT_2_4A461A7E3A84F76A_COMPARETO_OFFSET))(this, a1);
	}
};
