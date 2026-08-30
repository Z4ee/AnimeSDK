#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceCellType.h"
#include "unitysdk/System/ValueType.h"

#define CLASS_2_F71D85F68E612E5E_STRUCT_2_FD8898F19E6BA539__CTOR_OFFSET UNITYSDK_OFFSET(0x3B04230)

inline static constexpr unsigned int Class_2_F71D85F68E612E5E_Struct_2_FD8898F19E6BA539_TypeDefinitionIndex = 36541;

struct alignas(4) Class_2_F71D85F68E612E5E_Struct_2_FD8898F19E6BA539
{
	::System::Int32 IDGNLJPNCFD; // 0x10
	::RPG::GameCore::CakeRaceCellType JDDKEGDBPDK; // 0x14
	::System::Boolean DDPJHJEGADC; // 0x18

	::System::Void _ctor(::System::Int32 a1, ::RPG::GameCore::CakeRaceCellType a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::GameCore::CakeRaceCellType))((::PBYTE)hIl2Cpp + CLASS_2_F71D85F68E612E5E_STRUCT_2_FD8898F19E6BA539__CTOR_OFFSET))(this, a1, a2);
	}
};
