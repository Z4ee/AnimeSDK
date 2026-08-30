#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class JSONArray; }
namespace MiHoYo::SDK { class JSONObject; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }

#define MIHOYO_SDK_BASE_GOODSPLATFORM_APIDATASOURCE_REQUESTGOODSLIST_OFFSET UNITYSDK_OFFSET(0x1B733D90)
#define MIHOYO_SDK_BASE_GOODSPLATFORM_APIDATASOURCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B734180)

namespace MiHoYo::SDK::Base::GoodsPlatform
{
	inline static constexpr unsigned int APIDataSource_TypeDefinitionIndex = 8774;

	class APIDataSource : public ::System::Object
	{
	public:
		// static const ::System::Int32 DefaultTimeoutInSeconds = 0x5; // 0x0
		// static const ::System::Int32 DefaultRetryLimit = 0x1; // 0x0
		// static const ::System::String* XRPC_HEADER_ROUTING_ACCOUNT; // 0x0
		// static const ::System::String* XRPC_HEADER_ROUTING_BIZ; // 0x0
		// static const ::System::String* PAY_LISTGOODS_API_RESPONSE; // 0x0
		// static const ::System::String* JSON_ERROR_CODE_KEY; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BASE_GOODSPLATFORM_APIDATASOURCE__CTOR_OFFSET))(this);
		}

		static ::System::Void RequestGoodsList(::MiHoYo::SDK::JSONObject* a1, ::System::Action_3<::System::Int32, ::System::String*, ::MiHoYo::SDK::JSONArray*>* a2)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::JSONObject*, ::System::Action_3<::System::Int32, ::System::String*, ::MiHoYo::SDK::JSONArray*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BASE_GOODSPLATFORM_APIDATASOURCE_REQUESTGOODSLIST_OFFSET))(a1, a2);
		}
	};
}
