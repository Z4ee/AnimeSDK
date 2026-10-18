#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_PC_OS_EPICENTITLEMENTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF0FD50)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int EpicEntitlementData_TypeDefinitionIndex = 8533;

	class EpicEntitlementData : public ::System::Object
	{
	public:
		::System::String* entitlementName; // 0x10
		::System::String* entitlementId; // 0x18
		::System::String* catalogItemId; // 0x20
		::System::Boolean redeemed; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_EPICENTITLEMENTDATA__CTOR_OFFSET))(this);
		}
	};
}
