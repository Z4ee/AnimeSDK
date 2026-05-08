#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MiHoYo/SDK/PluginUI/MiHoYoSDKUIContainer.h"

namespace System { class String; }

#define CUSTOMSKIN_LOADINGTOAST_INSTANCE_OFFSET UNITYSDK_OFFSET(0x139DF200)
#define CUSTOMSKIN_LOADINGTOAST_ONCLOSE_OFFSET UNITYSDK_OFFSET(0x139DF730)
#define CUSTOMSKIN_LOADINGTOAST_ONSHOW_OFFSET UNITYSDK_OFFSET(0x139DF4A0)
#define CUSTOMSKIN_LOADINGTOAST__CTOR_OFFSET UNITYSDK_OFFSET(0x139DF3A0)

inline static constexpr unsigned int CustomSkin_LoadingToast_TypeDefinitionIndex = 49998;

class CustomSkin_LoadingToast : public ::MiHoYo::SDK::PluginUI::MiHoYoSDKUIContainer
{
public:
	static ::CustomSkin_LoadingToast** StaticGet__instance()
	{
		return (::CustomSkin_LoadingToast**)Il2CppClass::FromTypeDefinitionIndex(CustomSkin_LoadingToast_TypeDefinitionIndex)->GetStaticField(0x306A0);
	}
	// static const ::System::String* BlockTagCustomPUILoadingToast; // 0x0
	::Foundation::Coroutine::CoroutineHandle blockHandle; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_LOADINGTOAST__CTOR_OFFSET))(this);
	}

	static ::CustomSkin_LoadingToast* Instance()
	{
		return ((::CustomSkin_LoadingToast*(*)())((::PBYTE)hIl2Cpp + CUSTOMSKIN_LOADINGTOAST_INSTANCE_OFFSET))();
	}

	::System::Void OnShow()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_LOADINGTOAST_ONSHOW_OFFSET))(this);
	}

	::System::Void OnClose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_LOADINGTOAST_ONCLOSE_OFFSET))(this);
	}
};
