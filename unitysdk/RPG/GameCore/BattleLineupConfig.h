#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BattleLineupSPPreset.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BattleLineupAvatarConfig; }
namespace RPG::GameCore { class LineupGridFightConfig; }
namespace System { class String; }

#define RPG_GAMECORE_BATTLELINEUPCONFIG_METHOD_2_CE3B5EDCD21307FE_OFFSET UNITYSDK_OFFSET(0x186FCB40)
#define RPG_GAMECORE_BATTLELINEUPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x186FCD80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleLineupConfig_TypeDefinitionIndex = 17231;

	class BattleLineupConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* SaveFile; // 0x10
		::System::String* Name; // 0x18
		::System::String* SkillTreePreset; // 0x20
		::RPG::GameCore::BattleLineupSPPreset SPPreset; // 0x28
		::Il2CppArray<::RPG::GameCore::BattleLineupAvatarConfig*>* LineupConfigList; // 0x30
		::RPG::GameCore::LineupGridFightConfig* RLGridFightData; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLELINEUPCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_CE3B5EDCD21307FE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BattleLineupConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BattleLineupConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLELINEUPCONFIG_METHOD_2_CE3B5EDCD21307FE_OFFSET))(a1, a2);
		}
	};
}
