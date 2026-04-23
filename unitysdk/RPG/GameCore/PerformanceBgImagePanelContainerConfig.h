#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PerformanceBgEffectFrameConfig; }
namespace RPG::GameCore { class PerformanceBgImagePanelConfig; }

#define RPG_GAMECORE_PERFORMANCEBGIMAGEPANELCONTAINERCONFIG_METHOD_2_C0E65E330FFBDF17_OFFSET UNITYSDK_OFFSET(0x18BDCEA0)
#define RPG_GAMECORE_PERFORMANCEBGIMAGEPANELCONTAINERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18BDCFE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PerformanceBgImagePanelContainerConfig_TypeDefinitionIndex = 18069;

	class PerformanceBgImagePanelContainerConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::PerformanceBgImagePanelConfig*>* PanelConfigs; // 0x10
		::Il2CppArray<::RPG::GameCore::PerformanceBgEffectFrameConfig*>* EffectFrameConfigs; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEBGIMAGEPANELCONTAINERCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_C0E65E330FFBDF17(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PerformanceBgImagePanelContainerConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PerformanceBgImagePanelContainerConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEBGIMAGEPANELCONTAINERCONFIG_METHOD_2_C0E65E330FFBDF17_OFFSET))(a1, a2);
		}
	};
}
