#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class JSONArray; }
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace MiHoYo::SDK::Win { class SteamManager; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_WIN_STEAMMANAGER___C__DISPLAYCLASS16_0__CTOR_OFFSET UNITYSDK_OFFSET(0x174CACE0)
#define MIHOYO_SDK_WIN_STEAMMANAGER___C__DISPLAYCLASS16_0__GETPRODUCTLIST_B__0_OFFSET UNITYSDK_OFFSET(0x174CE510)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int SteamManager___c__DisplayClass16_0_TypeDefinitionIndex = 8122;

	class SteamManager___c__DisplayClass16_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::JSONArray* productArray; // 0x10
		::System::Action_1<::System::String*>* callback; // 0x18
		::MiHoYo::SDK::Win::SteamManager* __4__this; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_STEAMMANAGER___C__DISPLAYCLASS16_0__CTOR_OFFSET))(this);
		}

		::System::Void _GetProductList_b__0(::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_STEAMMANAGER___C__DISPLAYCLASS16_0__GETPRODUCTLIST_B__0_OFFSET))(this, response);
		}
	};
}
