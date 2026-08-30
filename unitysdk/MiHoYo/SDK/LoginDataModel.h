#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class AccountModel; }
namespace System { class String; }

#define MIHOYO_SDK_LOGINDATAMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1B995FF0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int LoginDataModel_TypeDefinitionIndex = 7821;

	class LoginDataModel : public ::System::Object
	{
	public:
		::MiHoYo::SDK::AccountModel* account; // 0x10
		::System::Boolean device_grant_required; // 0x18
		::System::Boolean safe_moblie_required; // 0x19
		::System::Boolean realperson_required; // 0x1A
		::System::Boolean reactivate_required; // 0x1B
		::System::String* realname_operation; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_LOGINDATAMODEL__CTOR_OFFSET))(this);
		}
	};
}
