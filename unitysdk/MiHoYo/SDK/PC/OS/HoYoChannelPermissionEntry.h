#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::PC::OS { class HoYoChannelPermissionReason; }
namespace System { class String; }

#define MIHOYO_SDK_PC_OS_HOYOCHANNELPERMISSIONENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC94CA0)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int HoYoChannelPermissionEntry_TypeDefinitionIndex = 20438;

	class HoYoChannelPermissionEntry : public ::System::Object
	{
	public:
		::System::Boolean is_allowed; // 0x10
		::System::String* account_id; // 0x18
		::System::Int32 permission; // 0x20
		::System::Int32 anonymous; // 0x24
		::Il2CppArray<::MiHoYo::SDK::PC::OS::HoYoChannelPermissionReason*>* reason; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELPERMISSIONENTRY__CTOR_OFFSET))(this);
		}
	};
}
