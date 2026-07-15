#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MIHOYO_SDK_PLUGINUI_PLUGINUICONSTANTS__CTOR_OFFSET UNITYSDK_OFFSET(0x19464DA0)

namespace MiHoYo::SDK::PluginUI
{
	inline static constexpr unsigned int PluginUIConstants_TypeDefinitionIndex = 8841;

	class PluginUIConstants : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUICONSTANTS__CTOR_OFFSET))(this);
		}
	};
}
