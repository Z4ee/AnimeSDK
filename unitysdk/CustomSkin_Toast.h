#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PluginUI/MiHoYoSDKUIContainer.h"

#define CUSTOMSKIN_TOAST_INSTANCE_OFFSET UNITYSDK_OFFSET(0x12F1D650)
#define CUSTOMSKIN_TOAST_ONCLOSE_OFFSET UNITYSDK_OFFSET(0x12F1D970)
#define CUSTOMSKIN_TOAST_ONSHOW_OFFSET UNITYSDK_OFFSET(0x12F1D810)
#define CUSTOMSKIN_TOAST__CTOR_OFFSET UNITYSDK_OFFSET(0x12F1D780)

inline static constexpr unsigned int CustomSkin_Toast_TypeDefinitionIndex = 85201;

class CustomSkin_Toast : public ::MiHoYo::SDK::PluginUI::MiHoYoSDKUIContainer
{
public:
	static ::CustomSkin_Toast** StaticGet__instance()
	{
		return (::CustomSkin_Toast**)Il2CppClass::FromTypeDefinitionIndex(CustomSkin_Toast_TypeDefinitionIndex)->GetStaticField(0x513B0);
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
