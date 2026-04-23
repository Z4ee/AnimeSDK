#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class Map3DIconConfig; }
namespace RPG::GameCore { class MapRotationAudioConfig; }
namespace RPG::GameCore { class MapRotationCameraConfig; }
namespace RPG::GameCore { class MapRotationEntityEffectConfig; }
namespace RPG::GameCore { class MapRotationGlobalTagConfig; }
namespace RPG::GameCore { class MapRotationMonsterEffectConfig; }
namespace RPG::GameCore { class MapRotationPerformanceConfig; }
namespace RPG::GameCore { class MapRotationTextConfig; }
namespace RPG::GameCore { class PlayerEnergyConfig; }
namespace RPG::GameCore { class SpecialNPCEffectConfig; }

#define RPG_GAMECORE_MAPROTATIONGLOBALCONFIG_METHOD_2_7043A8210F0F0D77_OFFSET UNITYSDK_OFFSET(0x18A8E430)
#define RPG_GAMECORE_MAPROTATIONGLOBALCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18A8E760)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MapRotationGlobalConfig_TypeDefinitionIndex = 16127;

	class MapRotationGlobalConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::MapRotationEntityEffectConfig* NPCEffectConfig; // 0x10
		::Il2CppArray<::RPG::GameCore::MapRotationMonsterEffectConfig*>* MonsterEffectConfig; // 0x18
		::Il2CppArray<::RPG::GameCore::SpecialNPCEffectConfig*>* SpecialNPCEffectConfig; // 0x20
		::RPG::GameCore::PlayerEnergyConfig* PlayerEnergyConfig; // 0x28
		::RPG::GameCore::MapRotationTextConfig* TextConfig; // 0x30
		::RPG::GameCore::MapRotationAudioConfig* AudioConfig; // 0x38
		::RPG::GameCore::MapRotationGlobalTagConfig* TagConfig; // 0x40
		::System::UInt32 AchievementID_FirstPoseSwitch; // 0x48
		::System::UInt32 AchievementID_CountPoseSwitch; // 0x4C
		::System::UInt32 AchievementID_RemoveUnusedPoseSwitcher; // 0x50
		::RPG::GameCore::MapRotationCameraConfig* CameraConfig; // 0x58
		::RPG::GameCore::Map3DIconConfig* Map3DIconConfig; // 0x60
		::RPG::GameCore::MapRotationPerformanceConfig* PerformanceConfig; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPROTATIONGLOBALCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_7043A8210F0F0D77(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MapRotationGlobalConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MapRotationGlobalConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPROTATIONGLOBALCONFIG_METHOD_2_7043A8210F0F0D77_OFFSET))(a1, a2);
		}
	};
}
