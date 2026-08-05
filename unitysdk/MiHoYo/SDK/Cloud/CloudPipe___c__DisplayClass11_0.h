#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Cloud { class CloudPipe_PipeSendData; }
namespace System { class String; }

#define MIHOYO_SDK_CLOUD_CLOUDPIPE___C__DISPLAYCLASS11_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD35750)
#define MIHOYO_SDK_CLOUD_CLOUDPIPE___C__DISPLAYCLASS11_0__ONGETRESPONSE_B__0_OFFSET UNITYSDK_OFFSET(0x1DD35760)
#define MIHOYO_SDK_CLOUD_CLOUDPIPE___C__DISPLAYCLASS11_0__ONGETRESPONSE_B__1_OFFSET UNITYSDK_OFFSET(0x1DD357F0)
#define MIHOYO_SDK_CLOUD_CLOUDPIPE___C__DISPLAYCLASS11_0__ONGETRESPONSE_B__2_OFFSET UNITYSDK_OFFSET(0x1DD35830)
#define MIHOYO_SDK_CLOUD_CLOUDPIPE___C__DISPLAYCLASS11_0__ONGETRESPONSE_B__3_OFFSET UNITYSDK_OFFSET(0x1DD35870)

namespace MiHoYo::SDK::Cloud
{
	inline static constexpr unsigned int CloudPipe___c__DisplayClass11_0_TypeDefinitionIndex = 20980;

	class CloudPipe___c__DisplayClass11_0 : public ::System::Object
	{
	public:
		::System::String* f; // 0x10
		::MiHoYo::SDK::Cloud::CloudPipe_PipeSendData* responseData; // 0x18

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
