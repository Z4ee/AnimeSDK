#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TeamTowersInfiniteModeBossConfig; }

#define RPG_GAMECORE_TEAMTOWERSINFINITEMODECONFIG_METHOD_2_BC419E27DF82B8D2_OFFSET UNITYSDK_OFFSET(0x1D5C5D40)
#define RPG_GAMECORE_TEAMTOWERSINFINITEMODECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5C5E30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TeamTowersInfiniteModeConfig_TypeDefinitionIndex = 18728;

	class TeamTowersInfiniteModeConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TeamTowersInfiniteModeBossConfig*>* BossConfigList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMTOWERSINFINITEMODECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_BC419E27DF82B8D2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TeamTowersInfiniteModeConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TeamTowersInfiniteModeConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMTOWERSINFINITEMODECONFIG_METHOD_2_BC419E27DF82B8D2_OFFSET))(a1, a2);
		}
	};
}
