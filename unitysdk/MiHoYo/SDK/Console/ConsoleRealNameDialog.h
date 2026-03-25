#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/Console/ConsoleDialogBase.h"

namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class InputField; }

#define MIHOYO_SDK_CONSOLE_CONSOLEREALNAMEDIALOG_AWAKE_OFFSET UNITYSDK_OFFSET(0x15E38330)
#define MIHOYO_SDK_CONSOLE_CONSOLEREALNAMEDIALOG_CANCELDIALOG_OFFSET UNITYSDK_OFFSET(0x15E39990)
#define MIHOYO_SDK_CONSOLE_CONSOLEREALNAMEDIALOG_HIDE_OFFSET UNITYSDK_OFFSET(0x15E38260)
#define MIHOYO_SDK_CONSOLE_CONSOLEREALNAMEDIALOG_IDINPUTVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x15E39740)
#define MIHOYO_SDK_CONSOLE_CONSOLEREALNAMEDIALOG_NAMEINPUTVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x15E39500)
#define MIHOYO_SDK_CONSOLE_CONSOLEREALNAMEDIALOG_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x15E39460)
#define MIHOYO_SDK_CONSOLE_CONSOLEREALNAMEDIALOG_ONENABLE_OFFSET UNITYSDK_OFFSET(0x15E39240)
#define MIHOYO_SDK_CONSOLE_CONSOLEREALNAMEDIALOG_ONHIGHLIGHTEDOBJECTCHANGED_OFFSET UNITYSDK_OFFSET(0x15E39980)
#define MIHOYO_SDK_CONSOLE_CONSOLEREALNAMEDIALOG_ONMEETPROBLEM_OFFSET UNITYSDK_OFFSET(0x15E39400)
#define MIHOYO_SDK_CONSOLE_CONSOLEREALNAMEDIALOG_ONSUBMITBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x15E394A0)
#define MIHOYO_SDK_CONSOLE_CONSOLEREALNAMEDIALOG_SETINTERACTABLE_OFFSET UNITYSDK_OFFSET(0x15E382D0)
#define MIHOYO_SDK_CONSOLE_CONSOLEREALNAMEDIALOG_SHOW_OFFSET UNITYSDK_OFFSET(0x15E38130)
#define MIHOYO_SDK_CONSOLE_CONSOLEREALNAMEDIALOG_UPDATE_OFFSET UNITYSDK_OFFSET(0x15E39270)
#define MIHOYO_SDK_CONSOLE_CONSOLEREALNAMEDIALOG__CTOR_OFFSET UNITYSDK_OFFSET(0x15E399B0)

namespace MiHoYo::SDK::Console
{
	inline static constexpr unsigned int ConsoleRealNameDialog_TypeDefinitionIndex = 7623;

	class ConsoleRealNameDialog : public ::MiHoYo::SDK::Console::ConsoleDialogBase
	{
	public:
		static ::MiHoYo::SDK::Console::ConsoleRealNameDialog** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::Console::ConsoleRealNameDialog**)Il2CppClass::FromTypeDefinitionIndex(ConsoleRealNameDialog_TypeDefinitionIndex)->GetStaticField(0x11A30);
		}
		// static const ::System::String* PrefabName; // 0x0
		// static const ::System::String* TitleTextPath; // 0x0
		// static const ::System::String* DescTextPath; // 0x0
		// static const ::System::String* SubmitButtonPath; // 0x0
		// static const ::System::String* SubmitButtonTextPath; // 0x0
		// static const ::System::String* NameInputPath; // 0x0
		// static const ::System::String* IDInputPath; // 0x0
		::System::Action_2<::System::String*, ::System::String*>* OnRealName; // 0xC0
		::System::Action* OnBack; // 0xC8
		::UnityEngine::UI::InputField* nameInput; // 0xD0
		::UnityEngine::UI::InputField* idInput; // 0xD8
		::UnityEngine::GameObject* nameInputObj; // 0xE0
		::UnityEngine::GameObject* submitButtonObj; // 0xE8
		::UnityEngine::GameObject* submitButtonTextObj; // 0xF0
		::System::Boolean Interactable; // 0xF8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEREALNAMEDIALOG__CTOR_OFFSET))(this);
		}

		static ::System::Void Show()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEREALNAMEDIALOG_SHOW_OFFSET))();
		}

		static ::System::Void Hide()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEREALNAMEDIALOG_HIDE_OFFSET))();
		}

		static ::System::Void SetInteractable(::System::Boolean interactable)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEREALNAMEDIALOG_SETINTERACTABLE_OFFSET))(interactable);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEREALNAMEDIALOG_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEREALNAMEDIALOG_ONENABLE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEREALNAMEDIALOG_UPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEREALNAMEDIALOG_ONDESTROY_OFFSET))(this);
		}

		::System::Void OnSubmitBtnClicked()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEREALNAMEDIALOG_ONSUBMITBTNCLICKED_OFFSET))(this);
		}

		::System::Void NameInputValueChanged(::System::String* val)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEREALNAMEDIALOG_NAMEINPUTVALUECHANGED_OFFSET))(this, val);
		}

		::System::Void IdInputValueChanged(::System::String* val)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEREALNAMEDIALOG_IDINPUTVALUECHANGED_OFFSET))(this, val);
		}

		::System::Void OnHighlightedObjectChanged(::UnityEngine::GameObject* obj)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEREALNAMEDIALOG_ONHIGHLIGHTEDOBJECTCHANGED_OFFSET))(this, obj);
		}

		::System::Void CancelDialog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEREALNAMEDIALOG_CANCELDIALOG_OFFSET))(this);
		}

		::System::Void OnMeetProblem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEREALNAMEDIALOG_ONMEETPROBLEM_OFFSET))(this);
		}
	};
}
