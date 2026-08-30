#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TeamTowersRaceModeHeightlineConfig; }

#define RPG_GAMECORE_TEAMTOWERSRACEMODECONFIG_METHOD_2_BA35F4CC8B9AC8DB_OFFSET UNITYSDK_OFFSET(0x1E1CED70)
#define RPG_GAMECORE_TEAMTOWERSRACEMODECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1E1CF1A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TeamTowersRaceModeConfig_TypeDefinitionIndex = 18726;

	class TeamTowersRaceModeConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TeamTowersRaceModeHeightlineConfig*>* HeightlineConfigList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMTOWERSRACEMODECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_BA35F4CC8B9AC8DB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TeamTowersRaceModeConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TeamTowersRaceModeConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMTOWERSRACEMODECONFIG_METHOD_2_BA35F4CC8B9AC8DB_OFFSET))(a1, a2);
		}
	};
}
