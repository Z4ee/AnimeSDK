#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BATTLELINEUPEQUIPMENTCONFIG_METHOD_2_7D3B139F2D449D3D_OFFSET UNITYSDK_OFFSET(0x1B2FE120)
#define RPG_GAMECORE_BATTLELINEUPEQUIPMENTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2FE290)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleLineupEquipmentConfig_TypeDefinitionIndex = 17910;

	class BattleLineupEquipmentConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 Id; // 0x10
		::System::UInt32 Level; // 0x14
		::System::UInt32 Rank; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLELINEUPEQUIPMENTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_7D3B139F2D449D3D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BattleLineupEquipmentConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BattleLineupEquipmentConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLELINEUPEQUIPMENTCONFIG_METHOD_2_7D3B139F2D449D3D_OFFSET))(a1, a2);
		}
	};
}
