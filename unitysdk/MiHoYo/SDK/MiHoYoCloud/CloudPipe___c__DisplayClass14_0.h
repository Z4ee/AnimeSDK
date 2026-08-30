#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::MiHoYoCloud { class CloudPipe_PipeSendData; }
namespace System { class String; }

#define MIHOYO_SDK_MIHOYOCLOUD_CLOUDPIPE___C__DISPLAYCLASS14_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B99B140)
#define MIHOYO_SDK_MIHOYOCLOUD_CLOUDPIPE___C__DISPLAYCLASS14_0__ONGETRESPONSE_B__0_OFFSET UNITYSDK_OFFSET(0x1B99BA60)
#define MIHOYO_SDK_MIHOYOCLOUD_CLOUDPIPE___C__DISPLAYCLASS14_0__ONGETRESPONSE_B__1_OFFSET UNITYSDK_OFFSET(0x1B99BB80)
#define MIHOYO_SDK_MIHOYOCLOUD_CLOUDPIPE___C__DISPLAYCLASS14_0__ONGETRESPONSE_B__2_OFFSET UNITYSDK_OFFSET(0x1B99BBD0)
#define MIHOYO_SDK_MIHOYOCLOUD_CLOUDPIPE___C__DISPLAYCLASS14_0__ONGETRESPONSE_B__3_OFFSET UNITYSDK_OFFSET(0x1B99BC20)

namespace MiHoYo::SDK::MiHoYoCloud
{
	inline static constexpr unsigned int CloudPipe___c__DisplayClass14_0_TypeDefinitionIndex = 9079;

	class CloudPipe___c__DisplayClass14_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::MiHoYoCloud::CloudPipe_PipeSendData* responseData; // 0x10
		::System::String* f; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOCLOUD_CLOUDPIPE___C__DISPLAYCLASS14_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnGetResponse_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOCLOUD_CLOUDPIPE___C__DISPLAYCLASS14_0__ONGETRESPONSE_B__0_OFFSET))(this);
		}

		::System::Void _OnGetResponse_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOCLOUD_CLOUDPIPE___C__DISPLAYCLASS14_0__ONGETRESPONSE_B__1_OFFSET))(this);
		}

		::System::Void _OnGetResponse_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOCLOUD_CLOUDPIPE___C__DISPLAYCLASS14_0__ONGETRESPONSE_B__2_OFFSET))(this);
		}

		::System::Void _OnGetResponse_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOCLOUD_CLOUDPIPE___C__DISPLAYCLASS14_0__ONGETRESPONSE_B__3_OFFSET))(this);
		}
	};
}
