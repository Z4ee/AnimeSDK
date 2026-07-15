#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LockSource.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/LittleGameType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class LevelGraphValueSource; }
namespace RPG::GameCore { class LittleGameEntityConfig; }
namespace RPG::GameCore { class LittleGameLevelSettings; }
namespace RPG::GameCore { class LittleGameLevelVariableCollection; }
namespace System { class String; }

#define RPG_GAMECORE_LITTLEGAMELEVELCONFIG_METHOD_2_E6CDF1EC05183A6B_OFFSET UNITYSDK_OFFSET(0x1BCC1FA0)
#define RPG_GAMECORE_LITTLEGAMELEVELCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1BCC2230)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameLevelConfig_TypeDefinitionIndex = 18107;

	class LittleGameLevelConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::LittleGameEntityConfig*>* Entities; // 0x10
		::RPG::GameCore::LittleGameType GameType; // 0x18
		::System::String* LevelGraph; // 0x20
		::RPG::GameCore::LevelGraphValueSource* LevelGraphValueSource; // 0x28
		::System::Boolean WaitStreaming; // 0x30
		::Il2CppArray<::RPG::Client::LockSource>* LockSources; // 0x38
		::RPG::GameCore::LittleGameLevelVariableCollection* LevelVariables; // 0x40
		::RPG::GameCore::LittleGameLevelSettings* LevelSettings; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMELEVELCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_E6CDF1EC05183A6B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameLevelConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameLevelConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMELEVELCONFIG_METHOD_2_E6CDF1EC05183A6B_OFFSET))(a1, a2);
		}
	};
}
