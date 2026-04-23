#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class InvokeResponseModel; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_MIHOYOCLOUD_MIHOYOSDKDLL___C__DISPLAYCLASS29_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1757A2C0)
#define MIHOYO_SDK_MIHOYOCLOUD_MIHOYOSDKDLL___C__DISPLAYCLASS29_0__ONGETINVOKERESPONSE_B__0_OFFSET UNITYSDK_OFFSET(0x1757C820)

namespace MiHoYo::SDK::MiHoYoCloud
{
	inline static constexpr unsigned int MiHoYoSDKDll___c__DisplayClass29_0_TypeDefinitionIndex = 7885;

	class MiHoYoSDKDll___c__DisplayClass29_0 : public ::System::Object
	{
	public:
		::System::Action_1<::System::String*>* callback; // 0x10
		::MiHoYo::SDK::InvokeResponseModel* resp; // 0x18
		::System::Int32 indexResp; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOCLOUD_MIHOYOSDKDLL___C__DISPLAYCLASS29_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnGetInvokeResponse_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOCLOUD_MIHOYOSDKDLL___C__DISPLAYCLASS29_0__ONGETINVOKERESPONSE_B__0_OFFSET))(this);
		}
	};
}
