#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class ABTestInfo; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MIHOYO_SDK_CONFIGMANAGER_PAYPLATCONFIGMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x15E08F00)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ConfigManager_PayPlatConfigModel_TypeDefinitionIndex = 7200;

	class ConfigManager_PayPlatConfigModel : public ::System::Object
	{
	public:
		::System::Boolean available; // 0x10
		::System::Boolean default_pay_platform; // 0x11
		::System::Collections::Generic::List_1<::MiHoYo::SDK::ABTestInfo*>* abtest; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGMANAGER_PAYPLATCONFIGMODEL__CTOR_OFFSET))(this);
		}
	};
}
