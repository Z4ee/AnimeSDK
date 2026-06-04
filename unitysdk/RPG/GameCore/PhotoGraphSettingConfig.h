#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/PhotoGraphFuncBtnType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MazeDragCameraConfig; }
namespace RPG::GameCore { class PhotoGraphCommonConfig; }
namespace RPG::GameCore { class PhotoGraphFreeStyleDataConfig; }
namespace RPG::GameCore { class PhotoGraphRoamingConfig; }
namespace RPG::GameCore { class PhotoGraphSettingDataConfig; }
namespace RPG::GameCore { class PhotoGraphStealConfig; }
namespace RPG::GameCore { class PhotoGraphWaterMarkConfig; }
namespace RPG::GameCore { class PhotographToastTemplate; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_PHOTOGRAPHSETTINGCONFIG_METHOD_2_C569E7E7784921FF_OFFSET UNITYSDK_OFFSET(0x19A09510)
#define RPG_GAMECORE_PHOTOGRAPHSETTINGCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19A09870)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PhotoGraphSettingConfig_TypeDefinitionIndex = 18109;

	class PhotoGraphSettingConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::PhotoGraphCommonConfig* CommonConfig; // 0x10
		::Il2CppArray<::RPG::GameCore::PhotoGraphSettingDataConfig*>* SettingDatas; // 0x18
		::Il2CppArray<::RPG::GameCore::PhotoGraphRoamingConfig*>* RoamingConfigs; // 0x20
		::RPG::GameCore::PhotoGraphWaterMarkConfig* WaterMarkConfig; // 0x28
		::RPG::GameCore::PhotoGraphFreeStyleDataConfig* DefaultFreeStyleConfig; // 0x30
		::System::UInt32 DefaultEmotionConfigID; // 0x38
		::RPG::GameCore::PhotoGraphStealConfig* StealConfig; // 0x40
		::System::Boolean DefaultFirstPerson; // 0x48
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::PhotographToastTemplate*>* PhotographToast; // 0x50
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::PhotoGraphFuncBtnType, ::RPG::GameCore::PhotographToastTemplate*>* PhotographDefaultToast; // 0x58
		::RPG::GameCore::MazeDragCameraConfig* PhotographSwipeCameraConfig; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHSETTINGCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_C569E7E7784921FF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PhotoGraphSettingConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PhotoGraphSettingConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHSETTINGCONFIG_METHOD_2_C569E7E7784921FF_OFFSET))(a1, a2);
		}
	};
}
