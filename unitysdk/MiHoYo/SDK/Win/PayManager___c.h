#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_WIN_PAYMANAGER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1612B2B0)
#define MIHOYO_SDK_WIN_PAYMANAGER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1612B2F0)
#define MIHOYO_SDK_WIN_PAYMANAGER___C__ONCREATEORDER_B__29_4_OFFSET UNITYSDK_OFFSET(0x1612B300)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int PayManager___c_TypeDefinitionIndex = 8074;

	class PayManager___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::System::Boolean>** StaticGet___9__29_4()
		{
			return (::System::Action_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(PayManager___c_TypeDefinitionIndex)->GetStaticField(0x16160);
		}
		static ::MiHoYo::SDK::Win::PayManager___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::Win::PayManager___c**)Il2CppClass::FromTypeDefinitionIndex(PayManager___c_TypeDefinitionIndex)->GetStaticField(0x16168);
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
