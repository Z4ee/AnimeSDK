#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class JSONArray; }
namespace MiHoYo::SDK::Win { class EOSManager; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_WIN_EOSMANAGER___C__DISPLAYCLASS9_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1DA1E130)
#define MIHOYO_SDK_WIN_EOSMANAGER___C__DISPLAYCLASS9_0__GETPRODUCTLIST_B__0_OFFSET UNITYSDK_OFFSET(0x1DA1E140)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int EOSManager___c__DisplayClass9_0_TypeDefinitionIndex = 21410;

	class EOSManager___c__DisplayClass9_0 : public ::System::Object
	{
	public:
		::System::String* productTrace; // 0x10
		::MiHoYo::SDK::Win::EOSManager* __4__this; // 0x18
		::System::Action_1<::System::String*>* callback; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_EOSMANAGER___C__DISPLAYCLASS9_0__CTOR_OFFSET))(this);
		}

		::System::Void _GetProductList_b__0(::MiHoYo::SDK::JSONArray* products)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::JSONArray*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_EOSMANAGER___C__DISPLAYCLASS9_0__GETPRODUCTLIST_B__0_OFFSET))(this, products);
		}
	};
}
