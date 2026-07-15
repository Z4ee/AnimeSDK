#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices::Ecom { class CheckoutCallbackInfo; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }

#define MIHOYO_SDK_MIHOYOSDKEOSINTERFACE___C__DISPLAYCLASS34_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD1B600)
#define MIHOYO_SDK_MIHOYOSDKEOSINTERFACE___C__DISPLAYCLASS34_0__PAY_B__0_OFFSET UNITYSDK_OFFSET(0x1AD1DBC0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MiHoYoSDKEOSInterface___c__DisplayClass34_0_TypeDefinitionIndex = 44581;

	class MiHoYoSDKEOSInterface___c__DisplayClass34_0 : public ::System::Object
	{
	public:
		::System::Action_3<::System::Int32, ::System::String*, ::System::String*>* callback; // 0x10
		::System::String* payTrace; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKEOSINTERFACE___C__DISPLAYCLASS34_0__CTOR_OFFSET))(this);
		}

		::System::Void _Pay_b__0(::Epic::OnlineServices::Ecom::CheckoutCallbackInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Ecom::CheckoutCallbackInfo*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKEOSINTERFACE___C__DISPLAYCLASS34_0__PAY_B__0_OFFSET))(this, a1);
		}
	};
}
