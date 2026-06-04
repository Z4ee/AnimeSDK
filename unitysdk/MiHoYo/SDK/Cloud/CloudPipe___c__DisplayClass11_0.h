#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Cloud { class CloudPipe_PipeSendData; }
namespace System { class String; }

#define MIHOYO_SDK_CLOUD_CLOUDPIPE___C__DISPLAYCLASS11_0__CTOR_OFFSET UNITYSDK_OFFSET(0x181F4710)
#define MIHOYO_SDK_CLOUD_CLOUDPIPE___C__DISPLAYCLASS11_0__ONGETRESPONSE_B__0_OFFSET UNITYSDK_OFFSET(0x181F4BF0)
#define MIHOYO_SDK_CLOUD_CLOUDPIPE___C__DISPLAYCLASS11_0__ONGETRESPONSE_B__1_OFFSET UNITYSDK_OFFSET(0x181F4C50)
#define MIHOYO_SDK_CLOUD_CLOUDPIPE___C__DISPLAYCLASS11_0__ONGETRESPONSE_B__2_OFFSET UNITYSDK_OFFSET(0x181F4CA0)
#define MIHOYO_SDK_CLOUD_CLOUDPIPE___C__DISPLAYCLASS11_0__ONGETRESPONSE_B__3_OFFSET UNITYSDK_OFFSET(0x181F4CF0)

namespace MiHoYo::SDK::Cloud
{
	inline static constexpr unsigned int CloudPipe___c__DisplayClass11_0_TypeDefinitionIndex = 8548;

	class CloudPipe___c__DisplayClass11_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::Cloud::CloudPipe_PipeSendData* responseData; // 0x10
		::System::String* f; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CLOUD_CLOUDPIPE___C__DISPLAYCLASS11_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnGetResponse_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CLOUD_CLOUDPIPE___C__DISPLAYCLASS11_0__ONGETRESPONSE_B__0_OFFSET))(this);
		}

		::System::Void _OnGetResponse_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CLOUD_CLOUDPIPE___C__DISPLAYCLASS11_0__ONGETRESPONSE_B__1_OFFSET))(this);
		}

		::System::Void _OnGetResponse_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CLOUD_CLOUDPIPE___C__DISPLAYCLASS11_0__ONGETRESPONSE_B__2_OFFSET))(this);
		}

		::System::Void _OnGetResponse_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CLOUD_CLOUDPIPE___C__DISPLAYCLASS11_0__ONGETRESPONSE_B__3_OFFSET))(this);
		}
	};
}
