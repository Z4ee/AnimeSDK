#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AvatarAssetPreloadConfig; }
namespace RPG::GameCore { class DeviceRelatedAvatarAssetPreloadConfig; }
namespace RPG::GameCore { class DeviceRelatedBool; }
namespace RPG::GameCore { class DeviceRelatedFrameTimeBudgetConfig; }
namespace RPG::GameCore { class DeviceRelatedGameObjectPoolConfig; }
namespace RPG::GameCore { class DeviceRelatedMonsterAssetPreloadConfig; }
namespace RPG::GameCore { class FrameTimeBudgetInfo; }
namespace RPG::GameCore { class GameObjectPoolSetting; }
namespace RPG::GameCore { class MonsterAssetPreloadConfig; }
namespace System { class String; }

#define RPG_GAMECORE_DEVICESETTINGCONFIG_METHOD_2_837EA88F306F98DA_OFFSET UNITYSDK_OFFSET(0x17157540)
#define RPG_GAMECORE_DEVICESETTINGCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x17157AA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DeviceSettingConfig_TypeDefinitionIndex = 15086;

	class DeviceSettingConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::DeviceRelatedGameObjectPoolConfig*>* GameObjectPool; // 0x10
		::Il2CppArray<::RPG::GameCore::DeviceRelatedFrameTimeBudgetConfig*>* FrameTimeBudget; // 0x18
		::Il2CppArray<::RPG::GameCore::DeviceRelatedBool*>* StreamingEnable; // 0x20
		::Il2CppArray<::RPG::GameCore::DeviceRelatedBool*>* ChessRogueEnterBattleUnloadMap; // 0x28
		::Il2CppArray<::RPG::GameCore::DeviceRelatedAvatarAssetPreloadConfig*>* AvatarAssetPreload; // 0x30
		::Il2CppArray<::RPG::GameCore::DeviceRelatedMonsterAssetPreloadConfig*>* MonsterAssetPreload; // 0x38
		::Il2CppArray<::RPG::GameCore::GameObjectPoolSetting*>* GameObjectPoolConfigs; // 0x40
		::Il2CppArray<::RPG::GameCore::FrameTimeBudgetInfo*>* FrameTimeBudgetConfigs; // 0x48
		::Il2CppArray<::RPG::GameCore::AvatarAssetPreloadConfig*>* AvatarAssetPreloadConfigs; // 0x50
		::Il2CppArray<::RPG::GameCore::MonsterAssetPreloadConfig*>* MonsterAssetPreloadConfigs; // 0x58
		::System::Boolean ForceDelaySpawnInAdv; // 0x60
		::System::Boolean ForceDelaySpawnInBattle; // 0x61
		::Il2CppArray<::System::String*>* ForceDelaySpawnPathList; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEVICESETTINGCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_837EA88F306F98DA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DeviceSettingConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DeviceSettingConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEVICESETTINGCONFIG_METHOD_2_837EA88F306F98DA_OFFSET))(a1, a2);
		}
	};
}
