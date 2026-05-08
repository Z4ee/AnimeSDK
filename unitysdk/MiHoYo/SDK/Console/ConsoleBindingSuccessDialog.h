#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/Console/ConsoleDialogBase.h"

namespace System { class Action; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class GameObject; }

#define MIHOYO_SDK_CONSOLE_CONSOLEBINDINGSUCCESSDIALOG_AUTOCLOSECOUNTDOWN_OFFSET UNITYSDK_OFFSET(0x1A50DD80)
#define MIHOYO_SDK_CONSOLE_CONSOLEBINDINGSUCCESSDIALOG_AWAKE_OFFSET UNITYSDK_OFFSET(0x1A50D450)
#define MIHOYO_SDK_CONSOLE_CONSOLEBINDINGSUCCESSDIALOG_CONFIRMDIALOG_OFFSET UNITYSDK_OFFSET(0x1A50DDF0)
#define MIHOYO_SDK_CONSOLE_CONSOLEBINDINGSUCCESSDIALOG_HIDE_OFFSET UNITYSDK_OFFSET(0x1A50D3E0)
#define MIHOYO_SDK_CONSOLE_CONSOLEBINDINGSUCCESSDIALOG_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1A50DDD0)
#define MIHOYO_SDK_CONSOLE_CONSOLEBINDINGSUCCESSDIALOG_SHOW_OFFSET UNITYSDK_OFFSET(0x1A50D2F0)
#define MIHOYO_SDK_CONSOLE_CONSOLEBINDINGSUCCESSDIALOG_UPDATECOUNTDOWNTIPS_OFFSET UNITYSDK_OFFSET(0x1A50DA50)
#define MIHOYO_SDK_CONSOLE_CONSOLEBINDINGSUCCESSDIALOG__CTOR_OFFSET UNITYSDK_OFFSET(0x1A50DE10)

namespace MiHoYo::SDK::Console
{
	inline static constexpr unsigned int ConsoleBindingSuccessDialog_TypeDefinitionIndex = 19584;

	class ConsoleBindingSuccessDialog : public ::MiHoYo::SDK::Console::ConsoleDialogBase
	{
	public:
		static ::MiHoYo::SDK::Console::ConsoleBindingSuccessDialog** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::Console::ConsoleBindingSuccessDialog**)Il2CppClass::FromTypeDefinitionIndex(ConsoleBindingSuccessDialog_TypeDefinitionIndex)->GetStaticField(0x8FA0);
		}
		// static const ::System::String* PrefabName; // 0x0
		// static const ::System::String* TitleTextPath; // 0x0
		// static const ::System::String* DescTextPath; // 0x0
		// static const ::System::String* FooterTextPath; // 0x0
		// static const ::System::Single AUTO_CLOSE_TIMEOUT_IN_SECONDS; // 0x0
		::UnityEngine::GameObject* FooterObj; // 0xC0
		::System::Action* OnConfirmed; // 0xC8
		::System::Single autoCloseLeftSeconds; // 0xD0
		::System::String* PSNAccount; // 0xD8
		::System::String* HoYoAccount; // 0xE0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEBINDINGSUCCESSDIALOG__CTOR_OFFSET))(this);
		}

		static ::System::Void Show(::System::String* psnAccount, ::System::String* hoyoAccount)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEBINDINGSUCCESSDIALOG_SHOW_OFFSET))(psnAccount, hoyoAccount);
		}

		static ::System::Void Hide()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEBINDINGSUCCESSDIALOG_HIDE_OFFSET))();
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEBINDINGSUCCESSDIALOG_AWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEBINDINGSUCCESSDIALOG_ONDESTROY_OFFSET))(this);
		}

		::System::Void ConfirmDialog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEBINDINGSUCCESSDIALOG_CONFIRMDIALOG_OFFSET))(this);
		}

		::System::Void UpdateCountdownTips(::System::Single left)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEBINDINGSUCCESSDIALOG_UPDATECOUNTDOWNTIPS_OFFSET))(this, left);
		}

		::System::Collections::IEnumerator* AutoCloseCountdown()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEBINDINGSUCCESSDIALOG_AUTOCLOSECOUNTDOWN_OFFSET))(this);
		}
	};
}
