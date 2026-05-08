#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/Console/ConsoleDialogBase.h"

namespace MiHoYo::SDK::Console { class UserGameServerInfo; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MIHOYO_SDK_CONSOLE_CONSOLEACCOUNTINFODIALOG_AWAKE_OFFSET UNITYSDK_OFFSET(0x1A05E9A0)
#define MIHOYO_SDK_CONSOLE_CONSOLEACCOUNTINFODIALOG_CANCELDIALOG_OFFSET UNITYSDK_OFFSET(0x1A060D20)
#define MIHOYO_SDK_CONSOLE_CONSOLEACCOUNTINFODIALOG_CONFIRMDIALOG_OFFSET UNITYSDK_OFFSET(0x1A060D00)
#define MIHOYO_SDK_CONSOLE_CONSOLEACCOUNTINFODIALOG_HIDE_OFFSET UNITYSDK_OFFSET(0x1A05E7E0)
#define MIHOYO_SDK_CONSOLE_CONSOLEACCOUNTINFODIALOG_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1A060CE0)
#define MIHOYO_SDK_CONSOLE_CONSOLEACCOUNTINFODIALOG_SETINTERACTABLE_OFFSET UNITYSDK_OFFSET(0x1A05E850)
#define MIHOYO_SDK_CONSOLE_CONSOLEACCOUNTINFODIALOG_SHOW_OFFSET UNITYSDK_OFFSET(0x1A05E6E0)
#define MIHOYO_SDK_CONSOLE_CONSOLEACCOUNTINFODIALOG__CTOR_OFFSET UNITYSDK_OFFSET(0x1A060D40)

namespace MiHoYo::SDK::Console
{
	inline static constexpr unsigned int ConsoleAccountInfoDialog_TypeDefinitionIndex = 19582;

	class ConsoleAccountInfoDialog : public ::MiHoYo::SDK::Console::ConsoleDialogBase
	{
	public:
		static ::MiHoYo::SDK::Console::ConsoleAccountInfoDialog** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::Console::ConsoleAccountInfoDialog**)Il2CppClass::FromTypeDefinitionIndex(ConsoleAccountInfoDialog_TypeDefinitionIndex)->GetStaticField(0xA870);
		}
		// static const ::System::String* PrefabName; // 0x0
		// static const ::System::String* TitleTextPath; // 0x0
		// static const ::System::String* DescTextPath; // 0x0
		// static const ::System::String* FooterTextPath; // 0x0
		// static const ::System::String* ConsoleAccountTextPath; // 0x0
		// static const ::System::String* HoYoAccountTextPath; // 0x0
		// static const ::System::String* RoleServerPath; // 0x0
		// static const ::System::String* RoleServerLabelTextPath; // 0x0
		// static const ::System::String* RoleServerValueTextPath; // 0x0
		// static const ::System::String* RoleUIDPath; // 0x0
		// static const ::System::String* RoleUIDLabelTextPath; // 0x0
		// static const ::System::String* RoleUIDValueTextPath; // 0x0
		// static const ::System::String* RoleNamePath; // 0x0
		// static const ::System::String* RoleNameLabelTextPath; // 0x0
		// static const ::System::String* RoleNameValueTextPath; // 0x0
		// static const ::System::String* RoleLevelPath; // 0x0
		// static const ::System::String* RoleLevelLabelTextPath; // 0x0
		// static const ::System::String* RoleLevelValueTextPath; // 0x0
		// static const ::System::String* EmptyRoleTipPath; // 0x0
		::System::Action* OnContinueToBind; // 0xC0
		::System::Action* OnSwitchHoYoAccount; // 0xC8
		::System::Boolean Interactable; // 0xD0
		::System::String* ConsoleAccountName; // 0xD8
		::System::String* HoYoAccountName; // 0xE0
		::MiHoYo::SDK::Console::UserGameServerInfo* CurrentServerInfo; // 0xE8
		::MiHoYo::SDK::Console::UserGameServerInfo* OtherServerInfo; // 0xF0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEACCOUNTINFODIALOG__CTOR_OFFSET))(this);
		}

		static ::System::Void Show(::System::String* consoleAccountName, ::System::String* hoyoAccountName, ::System::String* currentZone, ::System::Collections::Generic::List_1<::MiHoYo::SDK::Console::UserGameServerInfo*>* userGameInfoList)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::System::Collections::Generic::List_1<::MiHoYo::SDK::Console::UserGameServerInfo*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEACCOUNTINFODIALOG_SHOW_OFFSET))(consoleAccountName, hoyoAccountName, currentZone, userGameInfoList);
		}

		static ::System::Void Hide()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEACCOUNTINFODIALOG_HIDE_OFFSET))();
		}

		static ::System::Void SetInteractable(::System::Boolean interactable)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEACCOUNTINFODIALOG_SETINTERACTABLE_OFFSET))(interactable);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEACCOUNTINFODIALOG_AWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEACCOUNTINFODIALOG_ONDESTROY_OFFSET))(this);
		}

		::System::Void ConfirmDialog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEACCOUNTINFODIALOG_CONFIRMDIALOG_OFFSET))(this);
		}

		::System::Void CancelDialog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEACCOUNTINFODIALOG_CANCELDIALOG_OFFSET))(this);
		}
	};
}
