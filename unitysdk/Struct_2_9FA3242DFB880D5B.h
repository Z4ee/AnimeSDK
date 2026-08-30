#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateRinBattleHudAreaType.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_9FA3242DFB880D5B__CTOR_OFFSET UNITYSDK_OFFSET(0x88130)

inline static constexpr unsigned int Struct_2_9FA3242DFB880D5B_TypeDefinitionIndex = 79252;

struct alignas(4) Struct_2_9FA3242DFB880D5B
{
	::RPG::GameCore::FateRinBattleHudAreaType ANKBAKDHDJD; // 0x10
	::System::Boolean GNDCCBNILML; // 0x14

	::System::Void _ctor(::RPG::GameCore::FateRinBattleHudAreaType a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FateRinBattleHudAreaType, ::System::Boolean))((::PBYTE)hIl2Cpp + STRUCT_2_9FA3242DFB880D5B__CTOR_OFFSET))(this, a1, a2);
	}
};
