#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class ConfigManager_WebViewABTestModel; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MIHOYO_SDK_CONFIGMANAGER_WEBVIEWCONFIGMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1C4E40)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ConfigManager_WebViewConfigModel_TypeDefinitionIndex = 8163;

	class ConfigManager_WebViewConfigModel : public ::System::Object
	{
	public:
		::System::Boolean available; // 0x10
		::System::Collections::Generic::List_1<::MiHoYo::SDK::ConfigManager_WebViewABTestModel*>* abtest; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGMANAGER_WEBVIEWCONFIGMODEL__CTOR_OFFSET))(this);
		}
	};
}
