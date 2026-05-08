#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/WeLing/SDK/GyroType.h"

#define MIHOYO_SDK_CLOUD_CLOUDPIPE___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A05C220)
#define MIHOYO_SDK_CLOUD_CLOUDPIPE___C__DISPLAYCLASS7_0__ONSENSOR_B__0_OFFSET UNITYSDK_OFFSET(0x1A05C230)

namespace MiHoYo::SDK::Cloud
{
	inline static constexpr unsigned int CloudPipe___c__DisplayClass7_0_TypeDefinitionIndex = 19470;

	class CloudPipe___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Single>* data; // 0x10
		::WeLing::SDK::GyroType gyroType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CLOUD_CLOUDPIPE___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnSensor_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CLOUD_CLOUDPIPE___C__DISPLAYCLASS7_0__ONSENSOR_B__0_OFFSET))(this);
		}
	};
}
