#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PluginUI/MiHoYoSDKUIContainer.h"

#define CUSTOMSKIN_TOAST_INSTANCE_OFFSET UNITYSDK_OFFSET(0x11709FF0)
#define CUSTOMSKIN_TOAST_ONCLOSE_OFFSET UNITYSDK_OFFSET(0x1170A310)
#define CUSTOMSKIN_TOAST_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1170A1B0)
#define CUSTOMSKIN_TOAST__CTOR_OFFSET UNITYSDK_OFFSET(0x1170A120)

inline static constexpr unsigned int CustomSkin_Toast_TypeDefinitionIndex = 62379;

class CustomSkin_Toast : public ::MiHoYo::SDK::PluginUI::MiHoYoSDKUIContainer
{
public:
	static ::CustomSkin_Toast** StaticGet__instance()
	{
		return (::CustomSkin_Toast**)Il2CppClass::FromTypeDefinitionIndex(CustomSkin_Toast_TypeDefinitionIndex)->GetStaticField(0x43E30);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_TOAST__CTOR_OFFSET))(this);
	}

	static ::CustomSkin_Toast* Instance()
	{
		return ((::CustomSkin_Toast*(*)())((::PBYTE)hIl2Cpp + CUSTOMSKIN_TOAST_INSTANCE_OFFSET))();
	}

	::System::Void OnShow()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_TOAST_ONSHOW_OFFSET))(this);
	}

	::System::Void OnClose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_TOAST_ONCLOSE_OFFSET))(this);
	}
};
