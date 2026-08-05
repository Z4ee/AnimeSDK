#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_CONSOLE_OS_PAYMANAGERPS___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D4A0680)
#define MIHOYO_SDK_CONSOLE_OS_PAYMANAGERPS___C__CHECKCONSOLEPAY_B__8_1_OFFSET UNITYSDK_OFFSET(0x1D4A06D0)
#define MIHOYO_SDK_CONSOLE_OS_PAYMANAGERPS___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4A06C0)

namespace MiHoYo::SDK::Console::OS
{
	inline static constexpr unsigned int PayManagerPS___c_TypeDefinitionIndex = 21184;

	class PayManagerPS___c : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Console::OS::PayManagerPS___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::Console::OS::PayManagerPS___c**)Il2CppClass::FromTypeDefinitionIndex(PayManagerPS___c_TypeDefinitionIndex)->GetStaticField(0xAC00);
		}
		static ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>** StaticGet___9__8_1()
		{
			return (::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>**)Il2CppClass::FromTypeDefinitionIndex(PayManagerPS___c_TypeDefinitionIndex)->GetStaticField(0xAC08);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_PAYMANAGERPS___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_PAYMANAGERPS___C__CTOR_OFFSET))(this);
		}

		::System::Void _CheckConsolePay_b__8_1(::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_PAYMANAGERPS___C__CHECKCONSOLEPAY_B__8_1_OFFSET))(this, response);
		}
	};
}
