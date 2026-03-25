#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class JSONNode; }
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace MiHoYo::SDK::Win { class GooglePCManager; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MIHOYO_SDK_WIN_GOOGLEPCMANAGER___C__DISPLAYCLASS25_0__CTOR_OFFSET UNITYSDK_OFFSET(0x160A2D50)
#define MIHOYO_SDK_WIN_GOOGLEPCMANAGER___C__DISPLAYCLASS25_0__PAY_B__0_OFFSET UNITYSDK_OFFSET(0x160A56D0)
#define MIHOYO_SDK_WIN_GOOGLEPCMANAGER___C__DISPLAYCLASS25_0__PAY_B__1_OFFSET UNITYSDK_OFFSET(0x160A5F90)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int GooglePCManager___c__DisplayClass25_0_TypeDefinitionIndex = 7947;

	class GooglePCManager___c__DisplayClass25_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::JSONNode* payInfo; // 0x10
		::System::Action_1<::System::String*>* callback; // 0x18
		::System::Collections::Generic::List_1<::System::String*>* goodsIdList; // 0x20
		::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* OnGetGoogleQueryGoods; // 0x28
		::MiHoYo::SDK::Win::GooglePCManager* __4__this; // 0x30
		::System::String* token; // 0x38
		::System::String* payGoodsId; // 0x40
		::System::String* accountId; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GOOGLEPCMANAGER___C__DISPLAYCLASS25_0__CTOR_OFFSET))(this);
		}

		::System::Void _Pay_b__0(::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GOOGLEPCMANAGER___C__DISPLAYCLASS25_0__PAY_B__0_OFFSET))(this, response);
		}

		::System::Void _Pay_b__1(::System::Boolean canPay)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GOOGLEPCMANAGER___C__DISPLAYCLASS25_0__PAY_B__1_OFFSET))(this, canPay);
		}
	};
}
