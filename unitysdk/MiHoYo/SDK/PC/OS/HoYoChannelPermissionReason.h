#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MIHOYO_SDK_PC_OS_HOYOCHANNELPERMISSIONREASON__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3C3010)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int HoYoChannelPermissionReason_TypeDefinitionIndex = 20786;

	class HoYoChannelPermissionReason : public ::System::Object
	{
	public:
		::System::Int32 reason; // 0x10
		::System::Int32 restricted_privilege; // 0x14
		::System::Int32 restricted_privacy_setting; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELPERMISSIONREASON__CTOR_OFFSET))(this);
		}
	};
}
