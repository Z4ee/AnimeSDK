#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_WIN_PAYMANAGER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D3E6FB0)
#define MIHOYO_SDK_WIN_PAYMANAGER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3E6FF0)
#define MIHOYO_SDK_WIN_PAYMANAGER___C__ONCREATEORDER_B__29_4_OFFSET UNITYSDK_OFFSET(0x1D3E7000)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int PayManager___c_TypeDefinitionIndex = 21568;

	class PayManager___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::System::Boolean>** StaticGet___9__29_4()
		{
			return (::System::Action_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(PayManager___c_TypeDefinitionIndex)->GetStaticField(0xB570);
		}
		static ::MiHoYo::SDK::Win::PayManager___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::Win::PayManager___c**)Il2CppClass::FromTypeDefinitionIndex(PayManager___c_TypeDefinitionIndex)->GetStaticField(0xB578);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_PAYMANAGER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_PAYMANAGER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnCreateOrder_b__29_4(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_PAYMANAGER___C__ONCREATEORDER_B__29_4_OFFSET))(this, value);
		}
	};
}
