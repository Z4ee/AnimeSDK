#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PluginUI/MiHoYoSDKUIContainer.h"

#define CUSTOMSKIN_LOGINSUCCESSTIP_INSTANCE_OFFSET UNITYSDK_OFFSET(0x10FA23D0)
#define CUSTOMSKIN_LOGINSUCCESSTIP_ONCLOSE_OFFSET UNITYSDK_OFFSET(0x10FA26F0)
#define CUSTOMSKIN_LOGINSUCCESSTIP_ONSHOW_OFFSET UNITYSDK_OFFSET(0x10FA2590)
#define CUSTOMSKIN_LOGINSUCCESSTIP__CTOR_OFFSET UNITYSDK_OFFSET(0x10FA2500)

inline static constexpr unsigned int CustomSkin_LoginSuccessTip_TypeDefinitionIndex = 42166;

class CustomSkin_LoginSuccessTip : public ::MiHoYo::SDK::PluginUI::MiHoYoSDKUIContainer
{
public:
	static ::CustomSkin_LoginSuccessTip** StaticGet__instance()
	{
		return (::CustomSkin_LoginSuccessTip**)Il2CppClass::FromTypeDefinitionIndex(CustomSkin_LoginSuccessTip_TypeDefinitionIndex)->GetStaticField(0x39500);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_LOGINSUCCESSTIP__CTOR_OFFSET))(this);
	}

	static ::CustomSkin_LoginSuccessTip* Instance()
	{
		return ((::CustomSkin_LoginSuccessTip*(*)())((::PBYTE)hIl2Cpp + CUSTOMSKIN_LOGINSUCCESSTIP_INSTANCE_OFFSET))();
	}

	::System::Void OnShow()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_LOGINSUCCESSTIP_ONSHOW_OFFSET))(this);
	}

	::System::Void OnClose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_LOGINSUCCESSTIP_ONCLOSE_OFFSET))(this);
	}
};
