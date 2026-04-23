#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameConstConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FiveDimAchievementConfig; }
namespace RPG::GameCore { class FiveDimAudioConfig; }
namespace RPG::GameCore { class FiveDimAvatarConfig; }
namespace RPG::GameCore { class FiveDimGlobalCameraConfig; }
namespace RPG::GameCore { class FiveDimLevelGlobalConfig; }
namespace RPG::GameCore { class FiveDimMiniGameCollectionConfig; }
namespace RPG::GameCore { class FiveDimMiscConfig; }
namespace RPG::GameCore { class FiveDimPhysicsConfig; }
namespace RPG::GameCore { class FiveDimPlayerConfig; }
namespace RPG::GameCore { class FiveDimScrollConfig; }

#define RPG_GAMECORE_FIVEDIMGAMECONFIG_METHOD_3_445C7CE7D8182CA9_OFFSET UNITYSDK_OFFSET(0x18902DE0)
#define RPG_GAMECORE_FIVEDIMGAMECONFIG_METHOD_3_4E1C773EFDD663FC_OFFSET UNITYSDK_OFFSET(0x18902DA0)
#define RPG_GAMECORE_FIVEDIMGAMECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18902DD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimGameConfig_TypeDefinitionIndex = 15835;

	class FiveDimGameConfig : public ::RPG::GameCore::LittleGameConstConfig
	{
	public:
		::RPG::GameCore::FiveDimScrollConfig* ScrollConfig; // 0x10
		::RPG::GameCore::FiveDimPlayerConfig* PlayerConfig; // 0x18
		::RPG::GameCore::FiveDimGlobalCameraConfig* CameraConfig; // 0x20
		::RPG::GameCore::FiveDimPhysicsConfig* PhysicsConfig; // 0x28
		::Il2CppArray<::RPG::GameCore::FiveDimAvatarConfig*>* AvatarConfigs; // 0x30
		::RPG::GameCore::FiveDimLevelGlobalConfig* LevelConfig; // 0x38
		::RPG::GameCore::FiveDimAudioConfig* AudioConfig; // 0x40
		::RPG::GameCore::FiveDimMiniGameCollectionConfig* MiniGameCollectionConfig; // 0x48
		::RPG::GameCore::FiveDimAchievementConfig* AchievementConfig; // 0x50
		::RPG::GameCore::FiveDimMiscConfig* MiscConfig; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMGAMECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_4E1C773EFDD663FC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimGameConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimGameConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMGAMECONFIG_METHOD_3_4E1C773EFDD663FC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_445C7CE7D8182CA9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimGameConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimGameConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMGAMECONFIG_METHOD_3_445C7CE7D8182CA9_OFFSET))(a1, a2);
		}
	};
}
