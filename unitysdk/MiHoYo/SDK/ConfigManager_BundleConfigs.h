#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class ConfigManager_EnvsConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MIHOYO_SDK_CONFIGMANAGER_BUNDLECONFIGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1888C900)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ConfigManager_BundleConfigs_TypeDefinitionIndex = 8154;

	class ConfigManager_BundleConfigs : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::MiHoYo::SDK::ConfigManager_EnvsConfig*>* all_env_config; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGMANAGER_BUNDLECONFIGS__CTOR_OFFSET))(this);
		}
	};
}
