#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class JSONArray; }
namespace MiHoYo::SDK { class JSONObject; }
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }

#define MIHOYO_SDK_BASE_GOODSPLATFORM_CDNDATASOURCE___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0x173DE000)
#define MIHOYO_SDK_BASE_GOODSPLATFORM_CDNDATASOURCE___C__DISPLAYCLASS3_0__REQUESTGOODSLIST_B__0_OFFSET UNITYSDK_OFFSET(0x173DE910)

namespace MiHoYo::SDK::Base::GoodsPlatform
{
	inline static constexpr unsigned int CDNDataSource___c__DisplayClass3_0_TypeDefinitionIndex = 7595;

	class CDNDataSource___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::System::Action_3<::System::Int32, ::System::String*, ::MiHoYo::SDK::JSONArray*>* callback; // 0x10
		::MiHoYo::SDK::JSONObject* queries; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BASE_GOODSPLATFORM_CDNDATASOURCE___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
		}

		::System::Void _RequestGoodsList_b__0(::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BASE_GOODSPLATFORM_CDNDATASOURCE___C__DISPLAYCLASS3_0__REQUESTGOODSLIST_B__0_OFFSET))(this, response);
		}
	};
}
