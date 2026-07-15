#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_CONFIGMANIFESTPATH_METHOD_2_E6048DD50E1B3CCC_OFFSET UNITYSDK_OFFSET(0x1BC2C3A0)
#define RPG_GAMECORE_CONFIGMANIFESTPATH__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC2C9F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ConfigManifestPath_TypeDefinitionIndex = 16443;

	class ConfigManifestPath : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::System::String*>* AdventureAbilityConfig; // 0x10
		::Il2CppArray<::System::String*>* TurnBasedAbilityConfig; // 0x18
		::Il2CppArray<::System::String*>* RtAbilityConfig; // 0x20
		::Il2CppArray<::System::String*>* BattleLineupConfig; // 0x28
		::Il2CppArray<::System::String*>* BattleLineupAvatarConfig; // 0x30
		::Il2CppArray<::System::String*>* BattleLineupMazeBuffConfig; // 0x38
		::Il2CppArray<::System::String*>* BattleLineupSkillTreePresetConfig; // 0x40
		::Il2CppArray<::System::String*>* BattleLineupCEPresetConfig; // 0x48
		::Il2CppArray<::System::String*>* GlobalModifierConfig; // 0x50
		::Il2CppArray<::System::String*>* AdventureModifierConfig; // 0x58
		::Il2CppArray<::System::String*>* GlobalRtModifierConfig; // 0x60
		::Il2CppArray<::System::String*>* ComplexSkillAIGlobalGroupConfig; // 0x68
		::Il2CppArray<::System::String*>* GlobalTaskTemplate; // 0x70
		::Il2CppArray<::System::String*>* CommonSkillPoolConfig; // 0x78
		::Il2CppArray<::System::String*>* GlobalFormationAsset; // 0x80
		::Il2CppArray<::System::String*>* TargetAliasConfig; // 0x88
		::Il2CppArray<::System::String*>* TargetOperationConfig; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONFIGMANIFESTPATH__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_E6048DD50E1B3CCC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ConfigManifestPath*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ConfigManifestPath*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONFIGMANIFESTPATH_METHOD_2_E6048DD50E1B3CCC_OFFSET))(a1, a2);
		}
	};
}
