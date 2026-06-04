#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/Console/ConsoleProduct.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class JSONArray; }
namespace System { template <typename T1, typename T2, typename T3, typename T4> class Action_4; }

#define MIHOYO_SDK_BASE_GOODSPLATFORM_THIRDPARTYSTORE___C__DISPLAYCLASS16_0__CTOR_OFFSET UNITYSDK_OFFSET(0x181EB880)
#define MIHOYO_SDK_BASE_GOODSPLATFORM_THIRDPARTYSTORE___C__DISPLAYCLASS16_0__EXCHANGESONYSTOREITEMINFO_B__0_OFFSET UNITYSDK_OFFSET(0x181EC680)

namespace MiHoYo::SDK::Base::GoodsPlatform
{
	inline static constexpr unsigned int ThirdpartyStore___c__DisplayClass16_0_TypeDefinitionIndex = 8511;

	class ThirdpartyStore___c__DisplayClass16_0 : public ::System::Object
	{
	public:
		::System::Action_4<::MiHoYo::SDK::JSONArray*, ::System::Boolean, ::System::Int32, ::System::Int64>* callback; // 0x10
		::MiHoYo::SDK::JSONArray* goods; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BASE_GOODSPLATFORM_THIRDPARTYSTORE___C__DISPLAYCLASS16_0__CTOR_OFFSET))(this);
		}

		::System::Void _ExchangeSonyStoreItemInfo_b__0(::Il2CppArray<::MiHoYo::SDK::Console::ConsoleProduct>* a1, ::System::Boolean a2, ::System::Int32 a3, ::System::Int64 a4)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::MiHoYo::SDK::Console::ConsoleProduct>*, ::System::Boolean, ::System::Int32, ::System::Int64))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BASE_GOODSPLATFORM_THIRDPARTYSTORE___C__DISPLAYCLASS16_0__EXCHANGESONYSTOREITEMINFO_B__0_OFFSET))(this, a1, a2, a3, a4);
		}
	};
}
