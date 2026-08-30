#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/Console/ConsoleProduct.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Base::GoodsPlatform { class PSProductManager; }
namespace System { template <typename T1, typename T2, typename T3, typename T4> class Action_4; }

#define MIHOYO_SDK_BASE_GOODSPLATFORM_PSPRODUCTMANAGER___C__DISPLAYCLASS15_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1A0970)
#define MIHOYO_SDK_BASE_GOODSPLATFORM_PSPRODUCTMANAGER___C__DISPLAYCLASS15_0__REQUESTPSPRODUCTSFROMSTORE_B__0_OFFSET UNITYSDK_OFFSET(0x1A1A13F0)

namespace MiHoYo::SDK::Base::GoodsPlatform
{
	inline static constexpr unsigned int PSProductManager___c__DisplayClass15_0_TypeDefinitionIndex = 8788;

	class PSProductManager___c__DisplayClass15_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::Base::GoodsPlatform::PSProductManager* __4__this; // 0x10
		::System::Action_4<::Il2CppArray<::MiHoYo::SDK::Console::ConsoleProduct>*, ::System::Boolean, ::System::Int32, ::System::Int64>* callback; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BASE_GOODSPLATFORM_PSPRODUCTMANAGER___C__DISPLAYCLASS15_0__CTOR_OFFSET))(this);
		}

		::System::Void _RequestPSProductsFromStore_b__0(::Il2CppArray<::MiHoYo::SDK::Console::ConsoleProduct>* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::MiHoYo::SDK::Console::ConsoleProduct>*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BASE_GOODSPLATFORM_PSPRODUCTMANAGER___C__DISPLAYCLASS15_0__REQUESTPSPRODUCTSFROMSTORE_B__0_OFFSET))(this, a1, a2);
		}
	};
}
