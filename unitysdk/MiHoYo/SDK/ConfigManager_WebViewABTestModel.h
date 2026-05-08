#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class WebViewRenderMethodScene; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MIHOYO_SDK_CONFIGMANAGER_WEBVIEWABTESTMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x19FC3F30)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ConfigManager_WebViewABTestModel_TypeDefinitionIndex = 19072;

	class ConfigManager_WebViewABTestModel : public ::System::Object
	{
	public:
		::System::String* app_id; // 0x10
		::System::String* app_key; // 0x18
		::MiHoYo::SDK::WebViewRenderMethodScene* webview_render_method_scene; // 0x20
		::System::Collections::Generic::List_1<::System::Int32>* enable_envs; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGMANAGER_WEBVIEWABTESTMODEL__CTOR_OFFSET))(this);
		}
	};
}
