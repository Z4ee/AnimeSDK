#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MIHOYO_SDK_PC_OS_DEVICEQUERYRESULT__CTOR_OFFSET UNITYSDK_OFFSET(0x1BDD6D60)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int DeviceQueryResult_TypeDefinitionIndex = 20734;

	class DeviceQueryResult : public ::System::Object
	{
	public:
		::System::Boolean isDeviceHandheld; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_DEVICEQUERYRESULT__CTOR_OFFSET))(this);
		}
	};
}
