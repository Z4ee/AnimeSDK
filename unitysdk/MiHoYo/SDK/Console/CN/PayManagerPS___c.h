#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_CONSOLE_CN_PAYMANAGERPS___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18223580)
#define MIHOYO_SDK_CONSOLE_CN_PAYMANAGERPS___C__CHECKCONSOLEPAY_B__9_1_OFFSET UNITYSDK_OFFSET(0x182235D0)
#define MIHOYO_SDK_CONSOLE_CN_PAYMANAGERPS___C__CTOR_OFFSET UNITYSDK_OFFSET(0x182235C0)

namespace MiHoYo::SDK::Console::CN
{
	inline static constexpr unsigned int PayManagerPS___c_TypeDefinitionIndex = 8779;

	class PayManagerPS___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>** StaticGet___9__9_1()
		{
			return (::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>**)Il2CppClass::FromTypeDefinitionIndex(PayManagerPS___c_TypeDefinitionIndex)->GetStaticField(0xF260);
		}
		static ::MiHoYo::SDK::Console::CN::PayManagerPS___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::Console::CN::PayManagerPS___c**)Il2CppClass::FromTypeDefinitionIndex(PayManagerPS___c_TypeDefinitionIndex)->GetStaticField(0xF268);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CN_PAYMANAGERPS___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CN_PAYMANAGERPS___C__CTOR_OFFSET))(this);
		}

		::System::Void _CheckConsolePay_b__9_1(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CN_PAYMANAGERPS___C__CHECKCONSOLEPAY_B__9_1_OFFSET))(this, a1);
		}
	};
}
