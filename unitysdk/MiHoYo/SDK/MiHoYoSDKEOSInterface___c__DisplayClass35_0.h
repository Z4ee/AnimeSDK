#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices::Ecom { class QueryEntitlementsCallbackInfo; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define MIHOYO_SDK_MIHOYOSDKEOSINTERFACE___C__DISPLAYCLASS35_0__CHECKOUTENTITLEMENTS_B__0_OFFSET UNITYSDK_OFFSET(0x1E5E2010)
#define MIHOYO_SDK_MIHOYOSDKEOSINTERFACE___C__DISPLAYCLASS35_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1E5E2000)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MiHoYoSDKEOSInterface___c__DisplayClass35_0_TypeDefinitionIndex = 37358;

	class MiHoYoSDKEOSInterface___c__DisplayClass35_0 : public ::System::Object
	{
	public:
		::System::Action_2<::System::String*, ::System::String*>* callback; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKEOSINTERFACE___C__DISPLAYCLASS35_0__CTOR_OFFSET))(this);
		}

		::System::Void _CheckoutEntitlements_b__0(::Epic::OnlineServices::Ecom::QueryEntitlementsCallbackInfo* queryEntitlementsCallbackInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Ecom::QueryEntitlementsCallbackInfo*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKEOSINTERFACE___C__DISPLAYCLASS35_0__CHECKOUTENTITLEMENTS_B__0_OFFSET))(this, queryEntitlementsCallbackInfo);
		}
	};
}
