#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/Console/ConsoleDialogBase.h"

namespace System { class Action; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class Coroutine; }
namespace UnityEngine { class GameObject; }

#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDBINDINGSUCCESSDIALOG_AUTOCLOSECOUNTDOWN_OFFSET UNITYSDK_OFFSET(0x1A23E030)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDBINDINGSUCCESSDIALOG_AWAKE_OFFSET UNITYSDK_OFFSET(0x1A23D770)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDBINDINGSUCCESSDIALOG_CONFIRMDIALOG_OFFSET UNITYSDK_OFFSET(0x1A23E0A0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDBINDINGSUCCESSDIALOG_HIDE_OFFSET UNITYSDK_OFFSET(0x1A23D6D0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDBINDINGSUCCESSDIALOG_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1A23E080)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDBINDINGSUCCESSDIALOG_SETINTERACTABLE_OFFSET UNITYSDK_OFFSET(0x1A23D740)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDBINDINGSUCCESSDIALOG_SHOW_OFFSET UNITYSDK_OFFSET(0x1A23D5C0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDBINDINGSUCCESSDIALOG_UPDATECOUNTDOWNTIPS_OFFSET UNITYSDK_OFFSET(0x1A23DDA0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDBINDINGSUCCESSDIALOG__CTOR_OFFSET UNITYSDK_OFFSET(0x1A23E1F0)

namespace MiHoYo::SDK::PC::OS::CXHandheld
{
	inline static constexpr unsigned int HandheldBindingSuccessDialog_TypeDefinitionIndex = 8744;

	class HandheldBindingSuccessDialog : public ::MiHoYo::SDK::Console::ConsoleDialogBase
	{
	public:
		static ::MiHoYo::SDK::PC::OS::CXHandheld::HandheldBindingSuccessDialog** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::PC::OS::CXHandheld::HandheldBindingSuccessDialog**)Il2CppClass::FromTypeDefinitionIndex(HandheldBindingSuccessDialog_TypeDefinitionIndex)->GetStaticField(0x18B60);
		}
		// static const ::System::String* PrefabName; // 0x0
		// static const ::System::String* TitleTextPath; // 0x0
		// static const ::System::String* DescTextPath; // 0x0
		// static const ::System::String* FooterTextPath; // 0x0
		// static const ::System::Single AutoCloseTimeoutInSeconds; // 0x0
		::UnityEngine::GameObject* FooterObj; // 0xC0
		::System::Single autoCloseLeftSeconds; // 0xC8
		::System::String* consoleAccount; // 0xD0
		::System::String* hoyoAccount; // 0xD8
		::System::Boolean interactable; // 0xE0
		::System::Boolean confirmed; // 0xE1
		::UnityEngine::Coroutine* autoCloseCoroutine; // 0xE8
		::System::Action* OnConfirmed; // 0xF0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDBINDINGSUCCESSDIALOG__CTOR_OFFSET))(this);
		}

		static ::System::Void Show(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDBINDINGSUCCESSDIALOG_SHOW_OFFSET))(a1, a2);
		}

		static ::System::Void Hide()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDBINDINGSUCCESSDIALOG_HIDE_OFFSET))();
		}

		static ::System::Void SetInteractable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDBINDINGSUCCESSDIALOG_SETINTERACTABLE_OFFSET))(a1);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDBINDINGSUCCESSDIALOG_AWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDBINDINGSUCCESSDIALOG_ONDESTROY_OFFSET))(this);
		}

		::System::Void ConfirmDialog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDBINDINGSUCCESSDIALOG_CONFIRMDIALOG_OFFSET))(this);
		}

		::System::Void UpdateCountdownTips(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDBINDINGSUCCESSDIALOG_UPDATECOUNTDOWNTIPS_OFFSET))(this, a1);
		}

		::System::Collections::IEnumerator* AutoCloseCountdown()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDBINDINGSUCCESSDIALOG_AUTOCLOSECOUNTDOWN_OFFSET))(this);
		}
	};
}
