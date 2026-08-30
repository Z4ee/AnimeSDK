#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::PluginUI { class MiHoYoSDKBridgeUIElement; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MIHOYO_SDK_ACCOUNTPLATNATIVE_PLUGINUIARGS__CTOR_OFFSET UNITYSDK_OFFSET(0x16A80AE0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int AccountPlatNative_PluginUIArgs_TypeDefinitionIndex = 46536;

	class AccountPlatNative_PluginUIArgs : public ::System::Object
	{
	public:
		::System::String* event_name; // 0x10
		::System::Collections::Generic::List_1<::MiHoYo::SDK::PluginUI::MiHoYoSDKBridgeUIElement*>* element_data; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTPLATNATIVE_PLUGINUIARGS__CTOR_OFFSET))(this);
		}
	};
}
