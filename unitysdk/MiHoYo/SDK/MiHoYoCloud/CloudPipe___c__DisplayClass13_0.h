#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_MIHOYOCLOUD_CLOUDPIPE___C__DISPLAYCLASS13_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17577190)
#define MIHOYO_SDK_MIHOYOCLOUD_CLOUDPIPE___C__DISPLAYCLASS13_0__ONGETPIPEDATA_B__0_OFFSET UNITYSDK_OFFSET(0x17577C60)

namespace MiHoYo::SDK::MiHoYoCloud
{
	inline static constexpr unsigned int CloudPipe___c__DisplayClass13_0_TypeDefinitionIndex = 7893;

	class CloudPipe___c__DisplayClass13_0 : public ::System::Object
	{
	public:
		::System::String* dataString; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOCLOUD_CLOUDPIPE___C__DISPLAYCLASS13_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnGetPipeData_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOCLOUD_CLOUDPIPE___C__DISPLAYCLASS13_0__ONGETPIPEDATA_B__0_OFFSET))(this);
		}
	};
}
