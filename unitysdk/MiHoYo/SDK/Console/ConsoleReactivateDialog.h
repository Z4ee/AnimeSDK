#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/Console/ConsoleDialogBase.h"

namespace System { class Action; }
namespace System { class String; }

#define MIHOYO_SDK_CONSOLE_CONSOLEREACTIVATEDIALOG_AWAKE_OFFSET UNITYSDK_OFFSET(0x1B7902F0)
#define MIHOYO_SDK_CONSOLE_CONSOLEREACTIVATEDIALOG_CANCELDIALOG_OFFSET UNITYSDK_OFFSET(0x1B790E40)
#define MIHOYO_SDK_CONSOLE_CONSOLEREACTIVATEDIALOG_CONFIRMDIALOG_OFFSET UNITYSDK_OFFSET(0x1B790E10)
#define MIHOYO_SDK_CONSOLE_CONSOLEREACTIVATEDIALOG_HIDE_OFFSET UNITYSDK_OFFSET(0x1B76D9D0)
#define MIHOYO_SDK_CONSOLE_CONSOLEREACTIVATEDIALOG_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1B790DB0)
#define MIHOYO_SDK_CONSOLE_CONSOLEREACTIVATEDIALOG_SETINTERACTABLE_OFFSET UNITYSDK_OFFSET(0x1B76C290)
#define MIHOYO_SDK_CONSOLE_CONSOLEREACTIVATEDIALOG_SHOW_OFFSET UNITYSDK_OFFSET(0x1B7901F0)
#define MIHOYO_SDK_CONSOLE_CONSOLEREACTIVATEDIALOG__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B790EB0)
#define MIHOYO_SDK_CONSOLE_CONSOLEREACTIVATEDIALOG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B790E70)

namespace MiHoYo::SDK::Console
{
	inline static constexpr unsigned int ConsoleReactivateDialog_TypeDefinitionIndex = 8945;

	class ConsoleReactivateDialog : public ::MiHoYo::SDK::Console::ConsoleDialogBase
	{
	public:
		static ::MiHoYo::SDK::Console::ConsoleReactivateDialog** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::Console::ConsoleReactivateDialog**)Il2CppClass::FromTypeDefinitionIndex(ConsoleReactivateDialog_TypeDefinitionIndex)->GetStaticField(0x7290);
		}
		static ::System::Boolean* StaticGet_IsAccountPlatform()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ConsoleReactivateDialog_TypeDefinitionIndex)->GetStaticField(0x1EE0);
		}
		// static const ::System::String* PrefabName; // 0x0
		// static const ::System::String* TitleTextPath; // 0x0
		// static const ::System::String* DescTextPath; // 0x0
		// static const ::System::String* FooterTextPath; // 0x0
		::System::Action* OnReactivateAccount; // 0xC0
		::System::Action* OnBack; // 0xC8
		::System::Boolean Interactable; // 0xD0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEREACTIVATEDIALOG__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEREACTIVATEDIALOG__CCTOR_OFFSET))();
		}

		static ::System::Void Show(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEREACTIVATEDIALOG_SHOW_OFFSET))(a1);
		}

		static ::System::Void Hide()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEREACTIVATEDIALOG_HIDE_OFFSET))();
		}

		static ::System::Void SetInteractable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEREACTIVATEDIALOG_SETINTERACTABLE_OFFSET))(a1);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEREACTIVATEDIALOG_AWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEREACTIVATEDIALOG_ONDESTROY_OFFSET))(this);
		}

		::System::Void ConfirmDialog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEREACTIVATEDIALOG_CONFIRMDIALOG_OFFSET))(this);
		}

		::System::Void CancelDialog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEREACTIVATEDIALOG_CANCELDIALOG_OFFSET))(this);
		}
	};
}
