#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PluginUI/MiHoYoSDKUIContainer.h"

namespace MoleMole { class UILoginMessageBoxPopWindowController; }

#define CUSTOMSKIN_SDKALERT_INSTANCE_OFFSET UNITYSDK_OFFSET(0x12219440)
#define CUSTOMSKIN_SDKALERT_ONCLICKCANCEL_OFFSET UNITYSDK_OFFSET(0x12219A90)
#define CUSTOMSKIN_SDKALERT_ONCLICKCONFIRM_OFFSET UNITYSDK_OFFSET(0x12219A10)
#define CUSTOMSKIN_SDKALERT_ONCLOSE_OFFSET UNITYSDK_OFFSET(0x12219600)
#define CUSTOMSKIN_SDKALERT_ONSHOW_OFFSET UNITYSDK_OFFSET(0x12219710)
#define CUSTOMSKIN_SDKALERT__CTOR_OFFSET UNITYSDK_OFFSET(0x12219570)

inline static constexpr unsigned int CustomSkin_SDKAlert_TypeDefinitionIndex = 41636;

class CustomSkin_SDKAlert : public ::MiHoYo::SDK::PluginUI::MiHoYoSDKUIContainer
{
public:
	static ::CustomSkin_SDKAlert** StaticGet__instance()
	{
		return (::CustomSkin_SDKAlert**)Il2CppClass::FromTypeDefinitionIndex(CustomSkin_SDKAlert_TypeDefinitionIndex)->GetStaticField(0x4A880);
	}
	::MoleMole::UILoginMessageBoxPopWindowController* tip; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_SDKALERT__CTOR_OFFSET))(this);
	}

	static ::CustomSkin_SDKAlert* Instance()
	{
		return ((::CustomSkin_SDKAlert*(*)())((::PBYTE)hIl2Cpp + CUSTOMSKIN_SDKALERT_INSTANCE_OFFSET))();
	}

	::System::Void OnClose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_SDKALERT_ONCLOSE_OFFSET))(this);
	}

	::System::Void OnShow()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_SDKALERT_ONSHOW_OFFSET))(this);
	}

	::System::Void OnClickConfirm()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_SDKALERT_ONCLICKCONFIRM_OFFSET))(this);
	}

	::System::Void OnClickCancel()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_SDKALERT_ONCLICKCANCEL_OFFSET))(this);
	}
};
