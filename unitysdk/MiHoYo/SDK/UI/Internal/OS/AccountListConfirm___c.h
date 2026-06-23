#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::UI::Internal::OS { class AccountListConfirm; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLISTCONFIRM___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C39B8C0)
#define MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLISTCONFIRM___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1C39B900)
#define MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLISTCONFIRM___C__SHOW_B__28_0_OFFSET UNITYSDK_OFFSET(0x1C39B910)

namespace MiHoYo::SDK::UI::Internal::OS
{
	inline static constexpr unsigned int AccountListConfirm___c_TypeDefinitionIndex = 20199;

	class AccountListConfirm___c : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::UI::Internal::OS::AccountListConfirm___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::UI::Internal::OS::AccountListConfirm___c**)Il2CppClass::FromTypeDefinitionIndex(AccountListConfirm___c_TypeDefinitionIndex)->GetStaticField(0xAF60);
		}
		static ::System::Action_1<::MiHoYo::SDK::UI::Internal::OS::AccountListConfirm*>** StaticGet___9__28_0()
		{
			return (::System::Action_1<::MiHoYo::SDK::UI::Internal::OS::AccountListConfirm*>**)Il2CppClass::FromTypeDefinitionIndex(AccountListConfirm___c_TypeDefinitionIndex)->GetStaticField(0xAF68);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLISTCONFIRM___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLISTCONFIRM___C__CTOR_OFFSET))(this);
		}

		::System::Void _Show_b__28_0(::MiHoYo::SDK::UI::Internal::OS::AccountListConfirm* dialog)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::UI::Internal::OS::AccountListConfirm*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLISTCONFIRM___C__SHOW_B__28_0_OFFSET))(this, dialog);
		}
	};
}
