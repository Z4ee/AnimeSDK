#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/Console/ConsoleDialogBase.h"

namespace System { class Action; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class GameObject; }

#define MIHOYO_SDK_CONSOLE_PS4BINDRESULTDIALOG_AUTOCLOSECOUNTDOWN_OFFSET UNITYSDK_OFFSET(0x1B5B5260)
#define MIHOYO_SDK_CONSOLE_PS4BINDRESULTDIALOG_AWAKE_OFFSET UNITYSDK_OFFSET(0x1B5B4780)
#define MIHOYO_SDK_CONSOLE_PS4BINDRESULTDIALOG_CONFIRMDIALOG_OFFSET UNITYSDK_OFFSET(0x1B5B52D0)
#define MIHOYO_SDK_CONSOLE_PS4BINDRESULTDIALOG_HIDE_OFFSET UNITYSDK_OFFSET(0x1B5B4710)
#define MIHOYO_SDK_CONSOLE_PS4BINDRESULTDIALOG_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1B5B52B0)
#define MIHOYO_SDK_CONSOLE_PS4BINDRESULTDIALOG_SHOW_OFFSET UNITYSDK_OFFSET(0x1B5B45E0)
#define MIHOYO_SDK_CONSOLE_PS4BINDRESULTDIALOG_UPDATECOUNTDOWNTIPS_OFFSET UNITYSDK_OFFSET(0x1B5B4F30)
#define MIHOYO_SDK_CONSOLE_PS4BINDRESULTDIALOG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B5B5360)

namespace MiHoYo::SDK::Console
{
	inline static constexpr unsigned int PS4BindResultDialog_TypeDefinitionIndex = 20765;

	class PS4BindResultDialog : public ::MiHoYo::SDK::Console::ConsoleDialogBase
	{
	public:
		static ::MiHoYo::SDK::Console::PS4BindResultDialog** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::Console::PS4BindResultDialog**)Il2CppClass::FromTypeDefinitionIndex(PS4BindResultDialog_TypeDefinitionIndex)->GetStaticField(0x98E0);
		}
		// static const ::System::String* PrefabName; // 0x0
		// static const ::System::String* TitleTextPath; // 0x0
		// static const ::System::String* DescTextPath; // 0x0
		// static const ::System::String* FooterTextPath; // 0x0
		// static const ::System::Single AUTO_CLOSE_TIMEOUT_IN_SECONDS; // 0x0
		::UnityEngine::GameObject* FooterObj; // 0xC0
		::System::Action* OnConfirmed; // 0xC8
		::System::Single autoCloseLeftSeconds; // 0xD0
		::System::String* userName; // 0xD8
		::System::String* email; // 0xE0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_PS4BINDRESULTDIALOG__CTOR_OFFSET))(this);
		}

		static ::System::Void Show(::System::String* userName, ::System::String* email)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_PS4BINDRESULTDIALOG_SHOW_OFFSET))(userName, email);
		}

		static ::System::Void Hide()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_PS4BINDRESULTDIALOG_HIDE_OFFSET))();
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_PS4BINDRESULTDIALOG_AWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_PS4BINDRESULTDIALOG_ONDESTROY_OFFSET))(this);
		}

		::System::Void ConfirmDialog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_PS4BINDRESULTDIALOG_CONFIRMDIALOG_OFFSET))(this);
		}

		::System::Void UpdateCountdownTips(::System::Single left)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_PS4BINDRESULTDIALOG_UPDATECOUNTDOWNTIPS_OFFSET))(this, left);
		}

		::System::Collections::IEnumerator* AutoCloseCountdown()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_PS4BINDRESULTDIALOG_AUTOCLOSECOUNTDOWN_OFFSET))(this);
		}
	};
}
