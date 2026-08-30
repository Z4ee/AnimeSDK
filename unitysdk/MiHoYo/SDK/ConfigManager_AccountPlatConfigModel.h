#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class AccountPlatABTestInfo; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MIHOYO_SDK_CONFIGMANAGER_ACCOUNTPLATCONFIGMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1C4DA0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ConfigManager_AccountPlatConfigModel_TypeDefinitionIndex = 8160;

	class ConfigManager_AccountPlatConfigModel : public ::System::Object
	{
	public:
		::System::Boolean available; // 0x10
		::System::Boolean default_account_platform; // 0x11
		::System::Boolean default_account_center; // 0x12
		::System::Collections::Generic::List_1<::MiHoYo::SDK::AccountPlatABTestInfo*>* abtest; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGMANAGER_ACCOUNTPLATCONFIGMODEL__CTOR_OFFSET))(this);
		}
	};
}
