#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PluginUI/MiHoYoSDKUIContainer.h"

namespace MoleMole { class UILoginMessageBoxPopWindowController; }

#define CUSTOMSKIN_SDKCONFIRM_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1A89D740)
#define CUSTOMSKIN_SDKCONFIRM_ONCLOSE_OFFSET UNITYSDK_OFFSET(0x1A89D900)
#define CUSTOMSKIN_SDKCONFIRM_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1A89D950)
#define CUSTOMSKIN_SDKCONFIRM__CTOR_OFFSET UNITYSDK_OFFSET(0x1A89D870)
#define CUSTOMSKIN_SDKCONFIRM__ONSHOW_B__4_0_OFFSET UNITYSDK_OFFSET(0x1A89DC50)
#define CUSTOMSKIN_SDKCONFIRM__ONSHOW_B__4_1_OFFSET UNITYSDK_OFFSET(0x1A89DC90)

inline static constexpr unsigned int CustomSkin_SDKConfirm_TypeDefinitionIndex = 53788;

class CustomSkin_SDKConfirm : public ::MiHoYo::SDK::PluginUI::MiHoYoSDKUIContainer
{
public:
	static ::CustomSkin_SDKConfirm** StaticGet__instance()
	{
		return (::CustomSkin_SDKConfirm**)Il2CppClass::FromTypeDefinitionIndex(CustomSkin_SDKConfirm_TypeDefinitionIndex)->GetStaticField(0x499F0);
	}
	::MoleMole::UILoginMessageBoxPopWindowController* tip; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_SDKCONFIRM__CTOR_OFFSET))(this);
	}

	static ::CustomSkin_SDKConfirm* Instance()
	{
		return ((::CustomSkin_SDKConfirm*(*)())((::PBYTE)hIl2Cpp + CUSTOMSKIN_SDKCONFIRM_INSTANCE_OFFSET))();
	}

	::System::Void OnClose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_SDKCONFIRM_ONCLOSE_OFFSET))(this);
	}

	::System::Void OnShow()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_SDKCONFIRM_ONSHOW_OFFSET))(this);
	}

	::System::Void _OnShow_b__4_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_SDKCONFIRM__ONSHOW_B__4_0_OFFSET))(this);
	}

	::System::Void _OnShow_b__4_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_SDKCONFIRM__ONSHOW_B__4_1_OFFSET))(this);
	}
};
