#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/Console/ConsoleProduct.h"
#include "unitysdk/MiHoYo/SDK/PS/PayManager_PSProduct.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_PS_PAYMANAGER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BC9A610)
#define MIHOYO_SDK_PS_PAYMANAGER___C__CHECKPSPAY_B__17_1_OFFSET UNITYSDK_OFFSET(0x1BC9A680)
#define MIHOYO_SDK_PS_PAYMANAGER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC9A650)
#define MIHOYO_SDK_PS_PAYMANAGER___C__REFRESHPRODUCTCACHE_B__16_0_OFFSET UNITYSDK_OFFSET(0x1BC9A660)

namespace MiHoYo::SDK::PS
{
	inline static constexpr unsigned int PayManager___c_TypeDefinitionIndex = 20660;

	class PayManager___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::MiHoYo::SDK::PS::PayManager_PSProduct, ::MiHoYo::SDK::Console::ConsoleProduct>** StaticGet___9__16_0()
		{
			return (::System::Func_2<::MiHoYo::SDK::PS::PayManager_PSProduct, ::MiHoYo::SDK::Console::ConsoleProduct>**)Il2CppClass::FromTypeDefinitionIndex(PayManager___c_TypeDefinitionIndex)->GetStaticField(0x9D70);
		}
		static ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>** StaticGet___9__17_1()
		{
			return (::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>**)Il2CppClass::FromTypeDefinitionIndex(PayManager___c_TypeDefinitionIndex)->GetStaticField(0x9D78);
		}
		static ::MiHoYo::SDK::PS::PayManager___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::PS::PayManager___c**)Il2CppClass::FromTypeDefinitionIndex(PayManager___c_TypeDefinitionIndex)->GetStaticField(0x9D80);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PAYMANAGER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PAYMANAGER___C__CTOR_OFFSET))(this);
		}

		::MiHoYo::SDK::Console::ConsoleProduct _RefreshProductCache_b__16_0(::MiHoYo::SDK::PS::PayManager_PSProduct t)
		{
			return ((::MiHoYo::SDK::Console::ConsoleProduct(*)(::PVOID, ::MiHoYo::SDK::PS::PayManager_PSProduct))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PAYMANAGER___C__REFRESHPRODUCTCACHE_B__16_0_OFFSET))(this, t);
		}

		::System::Void _CheckPSPay_b__17_1(::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PAYMANAGER___C__CHECKPSPAY_B__17_1_OFFSET))(this, response);
		}
	};
}
