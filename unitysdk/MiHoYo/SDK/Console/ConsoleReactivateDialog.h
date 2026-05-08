#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/Console/ConsoleDialogBase.h"

namespace System { class Action; }
namespace System { class String; }

#define MIHOYO_SDK_CONSOLE_CONSOLEREACTIVATEDIALOG_AWAKE_OFFSET UNITYSDK_OFFSET(0x19926E50)
#define MIHOYO_SDK_CONSOLE_CONSOLEREACTIVATEDIALOG_CANCELDIALOG_OFFSET UNITYSDK_OFFSET(0x19927700)
#define MIHOYO_SDK_CONSOLE_CONSOLEREACTIVATEDIALOG_CONFIRMDIALOG_OFFSET UNITYSDK_OFFSET(0x199276E0)
#define MIHOYO_SDK_CONSOLE_CONSOLEREACTIVATEDIALOG_HIDE_OFFSET UNITYSDK_OFFSET(0x19926510)
#define MIHOYO_SDK_CONSOLE_CONSOLEREACTIVATEDIALOG_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x19927680)
#define MIHOYO_SDK_CONSOLE_CONSOLEREACTIVATEDIALOG_SETINTERACTABLE_OFFSET UNITYSDK_OFFSET(0x19926CB0)
#define MIHOYO_SDK_CONSOLE_CONSOLEREACTIVATEDIALOG_SHOW_OFFSET UNITYSDK_OFFSET(0x199253A0)
#define MIHOYO_SDK_CONSOLE_CONSOLEREACTIVATEDIALOG__CCTOR_OFFSET UNITYSDK_OFFSET(0x19927730)
#define MIHOYO_SDK_CONSOLE_CONSOLEREACTIVATEDIALOG__CTOR_OFFSET UNITYSDK_OFFSET(0x19927720)

namespace MiHoYo::SDK::Console
{
	inline static constexpr unsigned int ConsoleReactivateDialog_TypeDefinitionIndex = 19589;

	class ConsoleReactivateDialog : public ::MiHoYo::SDK::Console::ConsoleDialogBase
	{
	public:
		static ::MiHoYo::SDK::Console::ConsoleReactivateDialog** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::Console::ConsoleReactivateDialog**)Il2CppClass::FromTypeDefinitionIndex(ConsoleReactivateDialog_TypeDefinitionIndex)->GetStaticField(0x96F0);
		}
		static ::System::Boolean* StaticGet_IsAccountPlatform()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ConsoleReactivateDialog_TypeDefinitionIndex)->GetStaticField(0x4460);
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

		static ::System::Void Show(::System::Boolean isAccountPlatform)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEREACTIVATEDIALOG_SHOW_OFFSET))(isAccountPlatform);
		}

		static ::System::Void Hide()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEREACTIVATEDIALOG_HIDE_OFFSET))();
		}

		static ::System::Void SetInteractable(::System::Boolean interactable)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEREACTIVATEDIALOG_SETINTERACTABLE_OFFSET))(interactable);
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
