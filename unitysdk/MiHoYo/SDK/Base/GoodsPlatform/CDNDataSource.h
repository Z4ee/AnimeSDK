#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class JSONArray; }
namespace MiHoYo::SDK { class JSONObject; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }

#define MIHOYO_SDK_BASE_GOODSPLATFORM_CDNDATASOURCE_FILTERGOODSLIST_OFFSET UNITYSDK_OFFSET(0x18864E50)
#define MIHOYO_SDK_BASE_GOODSPLATFORM_CDNDATASOURCE_REQUESTALLSONYPRODUCTID_OFFSET UNITYSDK_OFFSET(0x18864C40)
#define MIHOYO_SDK_BASE_GOODSPLATFORM_CDNDATASOURCE_REQUESTGOODSLIST_OFFSET UNITYSDK_OFFSET(0x18864340)
#define MIHOYO_SDK_BASE_GOODSPLATFORM_CDNDATASOURCE__CTOR_OFFSET UNITYSDK_OFFSET(0x188652F0)

namespace MiHoYo::SDK::Base::GoodsPlatform
{
	inline static constexpr unsigned int CDNDataSource_TypeDefinitionIndex = 8509;

	class CDNDataSource : public ::System::Object
	{
	public:
		// static const ::System::Int32 CDN_DATA_RESPONSE_OK = 0x3E8; // 0x0
		// static const ::System::String* PAY_LISTGOODS_CND_RESPONSE; // 0x0
		// static const ::System::String* SONY; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BASE_GOODSPLATFORM_CDNDATASOURCE__CTOR_OFFSET))(this);
		}

		static ::System::Void RequestGoodsList(::MiHoYo::SDK::JSONObject* a1, ::System::Action_3<::System::Int32, ::System::String*, ::MiHoYo::SDK::JSONArray*>* a2)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::JSONObject*, ::System::Action_3<::System::Int32, ::System::String*, ::MiHoYo::SDK::JSONArray*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BASE_GOODSPLATFORM_CDNDATASOURCE_REQUESTGOODSLIST_OFFSET))(a1, a2);
		}

		static ::System::Void RequestAllSonyProductID(::System::Action_3<::System::Int32, ::System::String*, ::MiHoYo::SDK::JSONArray*>* a1)
		{
			return ((::System::Void(*)(::System::Action_3<::System::Int32, ::System::String*, ::MiHoYo::SDK::JSONArray*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BASE_GOODSPLATFORM_CDNDATASOURCE_REQUESTALLSONYPRODUCTID_OFFSET))(a1);
		}

		static ::MiHoYo::SDK::JSONArray* FilterGoodsList(::MiHoYo::SDK::JSONObject* a1, ::MiHoYo::SDK::JSONArray* a2)
		{
			return ((::MiHoYo::SDK::JSONArray*(*)(::MiHoYo::SDK::JSONObject*, ::MiHoYo::SDK::JSONArray*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BASE_GOODSPLATFORM_CDNDATASOURCE_FILTERGOODSLIST_OFFSET))(a1, a2);
		}
	};
}
