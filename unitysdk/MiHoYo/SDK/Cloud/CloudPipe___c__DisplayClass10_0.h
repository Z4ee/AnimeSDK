#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_CLOUD_CLOUDPIPE___C__DISPLAYCLASS10_0__CTOR_OFFSET UNITYSDK_OFFSET(0x188738F0)
#define MIHOYO_SDK_CLOUD_CLOUDPIPE___C__DISPLAYCLASS10_0__ONGETPIPEDATA_B__0_OFFSET UNITYSDK_OFFSET(0x18874060)

namespace MiHoYo::SDK::Cloud
{
	inline static constexpr unsigned int CloudPipe___c__DisplayClass10_0_TypeDefinitionIndex = 8559;

	class CloudPipe___c__DisplayClass10_0 : public ::System::Object
	{
	public:
		::System::String* dataString; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CLOUD_CLOUDPIPE___C__DISPLAYCLASS10_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnGetPipeData_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CLOUD_CLOUDPIPE___C__DISPLAYCLASS10_0__ONGETPIPEDATA_B__0_OFFSET))(this);
		}
	};
}
