#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MIHOYO_SDK_PLUGINUI_UICONSTANTS__CTOR_OFFSET UNITYSDK_OFFSET(0xA1F8790)

namespace MiHoYo::SDK::PluginUI
{
	inline static constexpr unsigned int UIConstants_TypeDefinitionIndex = 44150;

	class UIConstants : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_UICONSTANTS__CTOR_OFFSET))(this);
		}
	};
}
