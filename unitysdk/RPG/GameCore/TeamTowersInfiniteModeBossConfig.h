#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TeamTowersBossConfig; }

#define RPG_GAMECORE_TEAMTOWERSINFINITEMODEBOSSCONFIG_METHOD_2_70474F5345A958E0_OFFSET UNITYSDK_OFFSET(0x1D5C5B80)
#define RPG_GAMECORE_TEAMTOWERSINFINITEMODEBOSSCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5C5D30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TeamTowersInfiniteModeBossConfig_TypeDefinitionIndex = 18727;

	class TeamTowersInfiniteModeBossConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 BossID; // 0x10
		::System::Single BrickDownNormalSpeed; // 0x14
		::System::Single BrickDownMaxSpeed; // 0x18
		::RPG::GameCore::TeamTowersBossConfig* BossConfig; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMTOWERSINFINITEMODEBOSSCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_70474F5345A958E0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TeamTowersInfiniteModeBossConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TeamTowersInfiniteModeBossConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMTOWERSINFINITEMODEBOSSCONFIG_METHOD_2_70474F5345A958E0_OFFSET))(a1, a2);
		}
	};
}
