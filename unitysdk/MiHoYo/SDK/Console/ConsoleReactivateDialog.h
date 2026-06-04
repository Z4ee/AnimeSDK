#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/Console/ConsoleDialogBase.h"

namespace System { class Action; }
namespace System { class String; }

#define MIHOYO_SDK_CONSOLE_CONSOLEREACTIVATEDIALOG_AWAKE_OFFSET UNITYSDK_OFFSET(0x18236EA0)
#define MIHOYO_SDK_CONSOLE_CONSOLEREACTIVATEDIALOG_CANCELDIALOG_OFFSET UNITYSDK_OFFSET(0x18237AF0)
#define MIHOYO_SDK_CONSOLE_CONSOLEREACTIVATEDIALOG_CONFIRMDIALOG_OFFSET UNITYSDK_OFFSET(0x18237AC0)
#define MIHOYO_SDK_CONSOLE_CONSOLEREACTIVATEDIALOG_HIDE_OFFSET UNITYSDK_OFFSET(0x18236D80)
#define MIHOYO_SDK_CONSOLE_CONSOLEREACTIVATEDIALOG_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x18237A60)
#define MIHOYO_SDK_CONSOLE_CONSOLEREACTIVATEDIALOG_SETINTERACTABLE_OFFSET UNITYSDK_OFFSET(0x18236DF0)
#define MIHOYO_SDK_CONSOLE_CONSOLEREACTIVATEDIALOG_SHOW_OFFSET UNITYSDK_OFFSET(0x18236C80)
#define MIHOYO_SDK_CONSOLE_CONSOLEREACTIVATEDIALOG__CCTOR_OFFSET UNITYSDK_OFFSET(0x18237B60)
#define MIHOYO_SDK_CONSOLE_CONSOLEREACTIVATEDIALOG__CTOR_OFFSET UNITYSDK_OFFSET(0x18237B20)

namespace MiHoYo::SDK::Console
{
	inline static constexpr unsigned int ConsoleReactivateDialog_TypeDefinitionIndex = 8665;

	class ConsoleReactivateDialog : public ::MiHoYo::SDK::Console::ConsoleDialogBase
	{
	public:
		static ::MiHoYo::SDK::Console::ConsoleReactivateDialog** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::Console::ConsoleReactivateDialog**)Il2CppClass::FromTypeDefinitionIndex(ConsoleReactivateDialog_TypeDefinitionIndex)->GetStaticField(0xD9C0);
		}
		static ::System::Boolean* StaticGet_IsAccountPlatform()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ConsoleReactivateDialog_TypeDefinitionIndex)->GetStaticField(0x49B0);
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
