#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::PS { class PSReactivateDialog; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_PS_PSREACTIVATEDIALOG___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C396760)
#define MIHOYO_SDK_PS_PSREACTIVATEDIALOG___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1C3967A0)
#define MIHOYO_SDK_PS_PSREACTIVATEDIALOG___C__SHOW_B__8_0_OFFSET UNITYSDK_OFFSET(0x1C3967B0)

namespace MiHoYo::SDK::PS
{
	inline static constexpr unsigned int PSReactivateDialog___c_TypeDefinitionIndex = 20684;

	class PSReactivateDialog___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::MiHoYo::SDK::PS::PSReactivateDialog*>** StaticGet___9__8_0()
		{
			return (::System::Action_1<::MiHoYo::SDK::PS::PSReactivateDialog*>**)Il2CppClass::FromTypeDefinitionIndex(PSReactivateDialog___c_TypeDefinitionIndex)->GetStaticField(0xAEE0);
		}
		static ::MiHoYo::SDK::PS::PSReactivateDialog___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::PS::PSReactivateDialog___c**)Il2CppClass::FromTypeDefinitionIndex(PSReactivateDialog___c_TypeDefinitionIndex)->GetStaticField(0xAEE8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSREACTIVATEDIALOG___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSREACTIVATEDIALOG___C__CTOR_OFFSET))(this);
		}

		::System::Void _Show_b__8_0(::MiHoYo::SDK::PS::PSReactivateDialog* dialog)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PS::PSReactivateDialog*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSREACTIVATEDIALOG___C__SHOW_B__8_0_OFFSET))(this, dialog);
		}
	};
}
