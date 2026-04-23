#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class JSONArray; }
namespace MiHoYo::SDK { class JSONObject; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }

#define MIHOYO_SDK_BASE_GOODSPLATFORM_CDNDATASOURCE_FILTERGOODSLIST_OFFSET UNITYSDK_OFFSET(0x173DE3E0)
#define MIHOYO_SDK_BASE_GOODSPLATFORM_CDNDATASOURCE_REQUESTALLSONYPRODUCTID_OFFSET UNITYSDK_OFFSET(0x173DE1E0)
#define MIHOYO_SDK_BASE_GOODSPLATFORM_CDNDATASOURCE_REQUESTGOODSLIST_OFFSET UNITYSDK_OFFSET(0x173DD7C0)
#define MIHOYO_SDK_BASE_GOODSPLATFORM_CDNDATASOURCE__CTOR_OFFSET UNITYSDK_OFFSET(0x173DE900)

namespace MiHoYo::SDK::Base::GoodsPlatform
{
	inline static constexpr unsigned int CDNDataSource_TypeDefinitionIndex = 7594;

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

		static ::System::Void RequestGoodsList(::MiHoYo::SDK::JSONObject* queries, ::System::Action_3<::System::Int32, ::System::String*, ::MiHoYo::SDK::JSONArray*>* callback)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::JSONObject*, ::System::Action_3<::System::Int32, ::System::String*, ::MiHoYo::SDK::JSONArray*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BASE_GOODSPLATFORM_CDNDATASOURCE_REQUESTGOODSLIST_OFFSET))(queries, callback);
		}

		static ::System::Void RequestAllSonyProductID(::System::Action_3<::System::Int32, ::System::String*, ::MiHoYo::SDK::JSONArray*>* callback)
		{
			return ((::System::Void(*)(::System::Action_3<::System::Int32, ::System::String*, ::MiHoYo::SDK::JSONArray*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BASE_GOODSPLATFORM_CDNDATASOURCE_REQUESTALLSONYPRODUCTID_OFFSET))(callback);
		}

		static ::MiHoYo::SDK::JSONArray* FilterGoodsList(::MiHoYo::SDK::JSONObject* queries, ::MiHoYo::SDK::JSONArray* goods)
		{
			return ((::MiHoYo::SDK::JSONArray*(*)(::MiHoYo::SDK::JSONObject*, ::MiHoYo::SDK::JSONArray*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BASE_GOODSPLATFORM_CDNDATASOURCE_FILTERGOODSLIST_OFFSET))(queries, goods);
		}
	};
}
