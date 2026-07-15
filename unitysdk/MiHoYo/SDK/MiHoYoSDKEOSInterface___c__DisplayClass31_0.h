#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices::Ecom { class QueryOffersCallbackInfo; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_MIHOYOSDKEOSINTERFACE___C__DISPLAYCLASS31_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD19BD0)
#define MIHOYO_SDK_MIHOYOSDKEOSINTERFACE___C__DISPLAYCLASS31_0__QUERYPRODUCTS_B__0_OFFSET UNITYSDK_OFFSET(0x1AD1C840)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MiHoYoSDKEOSInterface___c__DisplayClass31_0_TypeDefinitionIndex = 44578;

	class MiHoYoSDKEOSInterface___c__DisplayClass31_0 : public ::System::Object
	{
	public:
		::System::String* traceId; // 0x10
		::System::Action_1<::System::Boolean>* callback; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKEOSINTERFACE___C__DISPLAYCLASS31_0__CTOR_OFFSET))(this);
		}

		::System::Void _QueryProducts_b__0(::Epic::OnlineServices::Ecom::QueryOffersCallbackInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Ecom::QueryOffersCallbackInfo*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKEOSINTERFACE___C__DISPLAYCLASS31_0__QUERYPRODUCTS_B__0_OFFSET))(this, a1);
		}
	};
}
