#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class UIAdaptiveDeviceConfigItem; }

#define RPG_GAMECORE_UIADAPTIVEDEVICECONFIG_METHOD_2_9D8C7690CC837A60_OFFSET UNITYSDK_OFFSET(0x1B87BFF0)
#define RPG_GAMECORE_UIADAPTIVEDEVICECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B87C0E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int UIAdaptiveDeviceConfig_TypeDefinitionIndex = 23563;

	class UIAdaptiveDeviceConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::UIAdaptiveDeviceConfigItem*>* DeviceConfigList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UIADAPTIVEDEVICECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_9D8C7690CC837A60(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::UIAdaptiveDeviceConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::UIAdaptiveDeviceConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UIADAPTIVEDEVICECONFIG_METHOD_2_9D8C7690CC837A60_OFFSET))(a1, a2);
		}
	};
}
