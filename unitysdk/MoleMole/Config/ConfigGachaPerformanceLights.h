#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"
#include "unitysdk/MoleMole/Config/ConfigCGCustomGlobalAnimation.h"
#include "unitysdk/MoleMole/Config/ConfigGachaPerformMisc_ItemRarity.h"
#include "unitysdk/MoleMole/UIGachaPerformance3DModelController_GachaStageType.h"
#include "unitysdk/UnityEngine/Color.h"

namespace MoleMole::Config { class ConfigGachaPerformanceLight; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_CONFIGGACHAPERFORMANCELIGHTS__CTOR_OFFSET UNITYSDK_OFFSET(0x114707A0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigGachaPerformanceLights_TypeDefinitionIndex = 87132;

	class ConfigGachaPerformanceLights : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Single ShowLightsColorDelay; // 0x58
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::ConfigGachaPerformanceLight*>* LightConfigs; // 0x60
		::System::Collections::Generic::Dictionary_2<::MoleMole::UIGachaPerformance3DModelController_GachaStageType, ::MoleMole::Config::ConfigCGCustomGlobalAnimation>* CGCustomGlobalAnimationConfigs; // 0x68
		::System::Collections::Generic::Dictionary_2<::MoleMole::UIGachaPerformance3DModelController_GachaStageType, ::System::String*>* StageLightTimelines; // 0x70
		::System::Collections::Generic::Dictionary_2<::MoleMole::Config::ConfigGachaPerformMisc_ItemRarity, ::UnityEngine::Color>* ItemRarityLightColors; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGGACHAPERFORMANCELIGHTS__CTOR_OFFSET))(this);
		}
	};
}
