#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class GameLevelHeartDialDialogueConfig; }

#define RPG_GAMECORE_GAMELEVELHEARTDIALSCRIPTCONFIG_METHOD_2_EEC601C6E173CA6E_OFFSET UNITYSDK_OFFSET(0x1894B160)
#define RPG_GAMECORE_GAMELEVELHEARTDIALSCRIPTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18953AF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GameLevelHeartDialScriptConfig_TypeDefinitionIndex = 16531;

	class GameLevelHeartDialScriptConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 ScriptID; // 0x10
		::Il2CppArray<::RPG::GameCore::GameLevelHeartDialDialogueConfig*>* DialogueConfigList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMELEVELHEARTDIALSCRIPTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_EEC601C6E173CA6E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GameLevelHeartDialScriptConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GameLevelHeartDialScriptConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMELEVELHEARTDIALSCRIPTCONFIG_METHOD_2_EEC601C6E173CA6E_OFFSET))(a1, a2);
		}
	};
}
