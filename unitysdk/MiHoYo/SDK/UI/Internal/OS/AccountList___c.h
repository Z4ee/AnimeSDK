#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::UI::Internal::OS { class AccountList; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLIST___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D7727B0)
#define MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLIST___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1D7727F0)
#define MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLIST___C__SHOW_B__43_0_OFFSET UNITYSDK_OFFSET(0x1D772800)

namespace MiHoYo::SDK::UI::Internal::OS
{
	inline static constexpr unsigned int AccountList___c_TypeDefinitionIndex = 20544;

	class AccountList___c : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::UI::Internal::OS::AccountList___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::UI::Internal::OS::AccountList___c**)Il2CppClass::FromTypeDefinitionIndex(AccountList___c_TypeDefinitionIndex)->GetStaticField(0xAB30);
		}
		static ::System::Action_1<::MiHoYo::SDK::UI::Internal::OS::AccountList*>** StaticGet___9__43_0()
		{
			return (::System::Action_1<::MiHoYo::SDK::UI::Internal::OS::AccountList*>**)Il2CppClass::FromTypeDefinitionIndex(AccountList___c_TypeDefinitionIndex)->GetStaticField(0xAB38);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLIST___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLIST___C__CTOR_OFFSET))(this);
		}

		::System::Void _Show_b__43_0(::MiHoYo::SDK::UI::Internal::OS::AccountList* dialog)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::UI::Internal::OS::AccountList*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLIST___C__SHOW_B__43_0_OFFSET))(this, dialog);
		}
	};
}
