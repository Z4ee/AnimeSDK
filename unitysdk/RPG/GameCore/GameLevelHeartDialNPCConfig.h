#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GAMELEVELHEARTDIALNPCCONFIG_METHOD_2_33BD625E2E822DB2_OFFSET UNITYSDK_OFFSET(0x1B9A1760)
#define RPG_GAMECORE_GAMELEVELHEARTDIALNPCCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9A18A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GameLevelHeartDialNPCConfig_TypeDefinitionIndex = 16722;

	class GameLevelHeartDialNPCConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 GroupID; // 0x10
		::System::UInt32 InstanceID; // 0x14
		::System::UInt32 ScriptID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMELEVELHEARTDIALNPCCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_33BD625E2E822DB2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GameLevelHeartDialNPCConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GameLevelHeartDialNPCConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMELEVELHEARTDIALNPCCONFIG_METHOD_2_33BD625E2E822DB2_OFFSET))(a1, a2);
		}
	};
}
