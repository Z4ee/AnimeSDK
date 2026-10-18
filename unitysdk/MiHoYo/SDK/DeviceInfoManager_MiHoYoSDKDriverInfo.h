#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_DEVICEINFOMANAGER_MIHOYOSDKDRIVERINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xAF76080)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int DeviceInfoManager_MiHoYoSDKDriverInfo_TypeDefinitionIndex = 46470;

	class DeviceInfoManager_MiHoYoSDKDriverInfo : public ::System::Object
	{
	public:
		::System::String* m_strDriveName; // 0x10
		::System::Int64 m_lAvailableFreeSpace; // 0x18
		::System::Int64 m_lTotalSize; // 0x20
		::System::Int64 m_lTotalFreeSpace; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DEVICEINFOMANAGER_MIHOYOSDKDRIVERINFO__CTOR_OFFSET))(this);
		}
	};
}
