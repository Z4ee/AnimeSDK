#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_CONSOLE_CN_PAYMANAGERPS___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D1B6610)
#define MIHOYO_SDK_CONSOLE_CN_PAYMANAGERPS___C__CHECKCONSOLEPAY_B__9_1_OFFSET UNITYSDK_OFFSET(0x1D1B6660)
#define MIHOYO_SDK_CONSOLE_CN_PAYMANAGERPS___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1B6650)

namespace MiHoYo::SDK::Console::CN
{
	inline static constexpr unsigned int PayManagerPS___c_TypeDefinitionIndex = 21213;

	class PayManagerPS___c : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Console::CN::PayManagerPS___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::Console::CN::PayManagerPS___c**)Il2CppClass::FromTypeDefinitionIndex(PayManagerPS___c_TypeDefinitionIndex)->GetStaticField(0x9010);
		}
		static ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>** StaticGet___9__9_1()
		{
			return (::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>**)Il2CppClass::FromTypeDefinitionIndex(PayManagerPS___c_TypeDefinitionIndex)->GetStaticField(0x9018);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CN_PAYMANAGERPS___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CN_PAYMANAGERPS___C__CTOR_OFFSET))(this);
		}

		::System::Void _CheckConsolePay_b__9_1(::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CN_PAYMANAGERPS___C__CHECKCONSOLEPAY_B__9_1_OFFSET))(this, response);
		}
	};
}
