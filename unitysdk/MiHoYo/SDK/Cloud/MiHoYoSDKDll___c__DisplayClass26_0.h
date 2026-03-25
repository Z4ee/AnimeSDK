#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class InvokeResponseModel; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_CLOUD_MIHOYOSDKDLL___C__DISPLAYCLASS26_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15DF4060)
#define MIHOYO_SDK_CLOUD_MIHOYOSDKDLL___C__DISPLAYCLASS26_0__ONGETINVOKERESPONSE_B__0_OFFSET UNITYSDK_OFFSET(0x15DF6B40)

namespace MiHoYo::SDK::Cloud
{
	inline static constexpr unsigned int MiHoYoSDKDll___c__DisplayClass26_0_TypeDefinitionIndex = 7508;

	class MiHoYoSDKDll___c__DisplayClass26_0 : public ::System::Object
	{
	public:
		::System::Action_1<::System::String*>* callback; // 0x10
		::MiHoYo::SDK::InvokeResponseModel* resp; // 0x18
		::System::Int32 indexResp; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CLOUD_MIHOYOSDKDLL___C__DISPLAYCLASS26_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnGetInvokeResponse_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CLOUD_MIHOYOSDKDLL___C__DISPLAYCLASS26_0__ONGETINVOKERESPONSE_B__0_OFFSET))(this);
		}
	};
}
