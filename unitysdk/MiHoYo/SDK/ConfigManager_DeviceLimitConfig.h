#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define MIHOYO_SDK_CONFIGMANAGER_DEVICELIMITCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1944A370)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ConfigManager_DeviceLimitConfig_TypeDefinitionIndex = 19075;

	class ConfigManager_DeviceLimitConfig : public ::System::Object
	{
	public:
		::System::Boolean available; // 0x10
		::System::Collections::Generic::List_1<::System::Int32>* enable_envs; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGMANAGER_DEVICELIMITCONFIG__CTOR_OFFSET))(this);
		}
	};
}
