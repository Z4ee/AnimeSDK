#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class JSONArray; }
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }

#define MIHOYO_SDK_BASE_GOODSPLATFORM_CDNDATASOURCE___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15DE0B80)
#define MIHOYO_SDK_BASE_GOODSPLATFORM_CDNDATASOURCE___C__DISPLAYCLASS4_0__REQUESTALLSONYPRODUCTID_B__0_OFFSET UNITYSDK_OFFSET(0x15DE12D0)

namespace MiHoYo::SDK::Base::GoodsPlatform
{
	inline static constexpr unsigned int CDNDataSource___c__DisplayClass4_0_TypeDefinitionIndex = 7455;

	class CDNDataSource___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::System::Action_3<::System::Int32, ::System::String*, ::MiHoYo::SDK::JSONArray*>* callback; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BASE_GOODSPLATFORM_CDNDATASOURCE___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
		}

		::System::Void _RequestAllSonyProductID_b__0(::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BASE_GOODSPLATFORM_CDNDATASOURCE___C__DISPLAYCLASS4_0__REQUESTALLSONYPRODUCTID_B__0_OFFSET))(this, response);
		}
	};
}
