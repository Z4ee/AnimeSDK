#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::PS { class PSAccountBindingDialog; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_PS_PSACCOUNTBINDINGDIALOG___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15F7B150)
#define MIHOYO_SDK_PS_PSACCOUNTBINDINGDIALOG___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15F7B190)
#define MIHOYO_SDK_PS_PSACCOUNTBINDINGDIALOG___C__SHOW_B__58_0_OFFSET UNITYSDK_OFFSET(0x15F7B1A0)

namespace MiHoYo::SDK::PS
{
	inline static constexpr unsigned int PSAccountBindingDialog___c_TypeDefinitionIndex = 7548;

	class PSAccountBindingDialog___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::MiHoYo::SDK::PS::PSAccountBindingDialog*>** StaticGet___9__58_0()
		{
			return (::System::Action_1<::MiHoYo::SDK::PS::PSAccountBindingDialog*>**)Il2CppClass::FromTypeDefinitionIndex(PSAccountBindingDialog___c_TypeDefinitionIndex)->GetStaticField(0x15BE0);
		}
		static ::MiHoYo::SDK::PS::PSAccountBindingDialog___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::PS::PSAccountBindingDialog___c**)Il2CppClass::FromTypeDefinitionIndex(PSAccountBindingDialog___c_TypeDefinitionIndex)->GetStaticField(0x15BE8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSACCOUNTBINDINGDIALOG___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSACCOUNTBINDINGDIALOG___C__CTOR_OFFSET))(this);
		}

		::System::Void _Show_b__58_0(::MiHoYo::SDK::PS::PSAccountBindingDialog* dialog)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PS::PSAccountBindingDialog*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSACCOUNTBINDINGDIALOG___C__SHOW_B__58_0_OFFSET))(this, dialog);
		}
	};
}
