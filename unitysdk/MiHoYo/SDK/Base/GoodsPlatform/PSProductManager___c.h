#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/Console/ConsoleProduct.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2, typename T3, typename T4> class Action_4; }

#define MIHOYO_SDK_BASE_GOODSPLATFORM_PSPRODUCTMANAGER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B739C60)
#define MIHOYO_SDK_BASE_GOODSPLATFORM_PSPRODUCTMANAGER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1B739CA0)
#define MIHOYO_SDK_BASE_GOODSPLATFORM_PSPRODUCTMANAGER___C__FORCEUPDATEPSPRODUCTSCACHE_B__12_0_OFFSET UNITYSDK_OFFSET(0x1B739CB0)

namespace MiHoYo::SDK::Base::GoodsPlatform
{
	inline static constexpr unsigned int PSProductManager___c_TypeDefinitionIndex = 8787;

	class PSProductManager___c : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Base::GoodsPlatform::PSProductManager___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::Base::GoodsPlatform::PSProductManager___c**)Il2CppClass::FromTypeDefinitionIndex(PSProductManager___c_TypeDefinitionIndex)->GetStaticField(0x4790);
		}
		static ::System::Action_4<::Il2CppArray<::MiHoYo::SDK::Console::ConsoleProduct>*, ::System::Boolean, ::System::Int32, ::System::Int64>** StaticGet___9__12_0()
		{
			return (::System::Action_4<::Il2CppArray<::MiHoYo::SDK::Console::ConsoleProduct>*, ::System::Boolean, ::System::Int32, ::System::Int64>**)Il2CppClass::FromTypeDefinitionIndex(PSProductManager___c_TypeDefinitionIndex)->GetStaticField(0x4798);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_BASE_GOODSPLATFORM_PSPRODUCTMANAGER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BASE_GOODSPLATFORM_PSPRODUCTMANAGER___C__CTOR_OFFSET))(this);
		}

		::System::Void _ForceUpdatePSProductsCache_b__12_0(::Il2CppArray<::MiHoYo::SDK::Console::ConsoleProduct>* a1, ::System::Boolean a2, ::System::Int32 a3, ::System::Int64 a4)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::MiHoYo::SDK::Console::ConsoleProduct>*, ::System::Boolean, ::System::Int32, ::System::Int64))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BASE_GOODSPLATFORM_PSPRODUCTMANAGER___C__FORCEUPDATEPSPRODUCTSCACHE_B__12_0_OFFSET))(this, a1, a2, a3, a4);
		}
	};
}
