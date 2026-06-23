#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::PS { class PSWelcomeDialog; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_PS_PSWELCOMEDIALOG___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BA90D60)
#define MIHOYO_SDK_PS_PSWELCOMEDIALOG___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA90DA0)
#define MIHOYO_SDK_PS_PSWELCOMEDIALOG___C__SHOW_B__19_0_OFFSET UNITYSDK_OFFSET(0x1BA90DB0)

namespace MiHoYo::SDK::PS
{
	inline static constexpr unsigned int PSWelcomeDialog___c_TypeDefinitionIndex = 20690;

	class PSWelcomeDialog___c : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::PS::PSWelcomeDialog___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::PS::PSWelcomeDialog___c**)Il2CppClass::FromTypeDefinitionIndex(PSWelcomeDialog___c_TypeDefinitionIndex)->GetStaticField(0xA580);
		}
		static ::System::Action_1<::MiHoYo::SDK::PS::PSWelcomeDialog*>** StaticGet___9__19_0()
		{
			return (::System::Action_1<::MiHoYo::SDK::PS::PSWelcomeDialog*>**)Il2CppClass::FromTypeDefinitionIndex(PSWelcomeDialog___c_TypeDefinitionIndex)->GetStaticField(0xA588);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSWELCOMEDIALOG___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSWELCOMEDIALOG___C__CTOR_OFFSET))(this);
		}

		::System::Void _Show_b__19_0(::MiHoYo::SDK::PS::PSWelcomeDialog* dialog)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PS::PSWelcomeDialog*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSWELCOMEDIALOG___C__SHOW_B__19_0_OFFSET))(this, dialog);
		}
	};
}
