#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/Console/ConsoleProduct.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2, typename T3, typename T4> class Action_4; }

#define MIHOYO_SDK_BASE_GOODSPLATFORM_PSPRODUCTMANAGER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BC6D770)
#define MIHOYO_SDK_BASE_GOODSPLATFORM_PSPRODUCTMANAGER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC6D7B0)
#define MIHOYO_SDK_BASE_GOODSPLATFORM_PSPRODUCTMANAGER___C__FORCEUPDATEPSPRODUCTSCACHE_B__12_0_OFFSET UNITYSDK_OFFSET(0x1BC6D7C0)

namespace MiHoYo::SDK::Base::GoodsPlatform
{
	inline static constexpr unsigned int PSProductManager___c_TypeDefinitionIndex = 20593;

	class PSProductManager___c : public ::System::Object
	{
	public:
		static ::System::Action_4<::Il2CppArray<::MiHoYo::SDK::Console::ConsoleProduct>*, ::System::Boolean, ::System::Int32, ::System::Int64>** StaticGet___9__12_0()
		{
			return (::System::Action_4<::Il2CppArray<::MiHoYo::SDK::Console::ConsoleProduct>*, ::System::Boolean, ::System::Int32, ::System::Int64>**)Il2CppClass::FromTypeDefinitionIndex(PSProductManager___c_TypeDefinitionIndex)->GetStaticField(0xB000);
		}
		static ::MiHoYo::SDK::Base::GoodsPlatform::PSProductManager___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::Base::GoodsPlatform::PSProductManager___c**)Il2CppClass::FromTypeDefinitionIndex(PSProductManager___c_TypeDefinitionIndex)->GetStaticField(0xB008);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_BASE_GOODSPLATFORM_PSPRODUCTMANAGER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BASE_GOODSPLATFORM_PSPRODUCTMANAGER___C__CTOR_OFFSET))(this);
		}

		::System::Void _ForceUpdatePSProductsCache_b__12_0(::Il2CppArray<::MiHoYo::SDK::Console::ConsoleProduct>* products, ::System::Boolean fromCache, ::System::Int32 errorCode, ::System::Int64 time)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::MiHoYo::SDK::Console::ConsoleProduct>*, ::System::Boolean, ::System::Int32, ::System::Int64))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BASE_GOODSPLATFORM_PSPRODUCTMANAGER___C__FORCEUPDATEPSPRODUCTSCACHE_B__12_0_OFFSET))(this, products, fromCache, errorCode, time);
		}
	};
}
