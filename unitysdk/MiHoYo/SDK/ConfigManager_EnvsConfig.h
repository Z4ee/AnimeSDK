#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class LocalConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MIHOYO_SDK_CONFIGMANAGER_ENVSCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1820A8B0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ConfigManager_EnvsConfig_TypeDefinitionIndex = 8143;

	class ConfigManager_EnvsConfig : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* envs; // 0x10
		::MiHoYo::SDK::LocalConfig* client_config; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGMANAGER_ENVSCONFIG__CTOR_OFFSET))(this);
		}
	};
}
