#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PluginUI/MiHoYoSDKUIContainer.h"

namespace MoleMole { class UIReconnectingPopWindowController; }
namespace System { class String; }

#define CUSTOMSKIN_LOADING_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1A89B890)
#define CUSTOMSKIN_LOADING_ONCLOSE_OFFSET UNITYSDK_OFFSET(0x1A89BAE0)
#define CUSTOMSKIN_LOADING_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1A89BA50)
#define CUSTOMSKIN_LOADING__CTOR_OFFSET UNITYSDK_OFFSET(0x1A89B9C0)

inline static constexpr unsigned int CustomSkin_Loading_TypeDefinitionIndex = 68073;

class CustomSkin_Loading : public ::MiHoYo::SDK::PluginUI::MiHoYoSDKUIContainer
{
public:
	static ::CustomSkin_Loading** StaticGet__instance()
	{
		return (::CustomSkin_Loading**)Il2CppClass::FromTypeDefinitionIndex(CustomSkin_Loading_TypeDefinitionIndex)->GetStaticField(0x499D0);
	}
	// static const ::System::String* ActiveMaskTag_CustomSkin_Loading; // 0x0
	::MoleMole::UIReconnectingPopWindowController* reconnect; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_LOADING__CTOR_OFFSET))(this);
	}

	static ::CustomSkin_Loading* Instance()
	{
		return ((::CustomSkin_Loading*(*)())((::PBYTE)hIl2Cpp + CUSTOMSKIN_LOADING_INSTANCE_OFFSET))();
	}

	::System::Void OnShow()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_LOADING_ONSHOW_OFFSET))(this);
	}

	::System::Void OnClose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_LOADING_ONCLOSE_OFFSET))(this);
	}
};
