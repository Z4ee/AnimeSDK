#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class AccountPlatABTestInfo; }

#define MIHOYO_SDK_ACCOUNTPLATCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x181DE2E0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int AccountPlatConfig_TypeDefinitionIndex = 7850;

	class AccountPlatConfig : public ::System::Object
	{
	public:
		::System::Boolean default_account_platform; // 0x10
		::System::Boolean default_new_user_center; // 0x11
		::MiHoYo::SDK::AccountPlatABTestInfo* abtest; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTPLATCONFIG__CTOR_OFFSET))(this);
		}
	};
}
