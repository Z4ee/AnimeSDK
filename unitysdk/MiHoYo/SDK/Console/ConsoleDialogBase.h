#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/UIElement.h"

namespace MiHoYo::SDK::Console { class SDKUIController; }
namespace MiHoYo::SDK::Console { class SDKUIDialog; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class GameObject; }

#define MIHOYO_SDK_CONSOLE_CONSOLEDIALOGBASE_ADJUSTBUTTONSIZEONXCLOUD_OFFSET UNITYSDK_OFFSET(0x1733A3A0)
#define MIHOYO_SDK_CONSOLE_CONSOLEDIALOGBASE_AWAKE_OFFSET UNITYSDK_OFFSET(0x17330740)
#define MIHOYO_SDK_CONSOLE_CONSOLEDIALOGBASE_CANCELBUTTONCLICKED_OFFSET UNITYSDK_OFFSET(0x1733A7C0)
#define MIHOYO_SDK_CONSOLE_CONSOLEDIALOGBASE_CONFIRMBUTTONCLICKED_OFFSET UNITYSDK_OFFSET(0x1733A8A0)
#define MIHOYO_SDK_CONSOLE_CONSOLEDIALOGBASE_GET_CANCELBUTTONTEXT_OFFSET UNITYSDK_OFFSET(0x1733A190)
#define MIHOYO_SDK_CONSOLE_CONSOLEDIALOGBASE_GET_CONFIRMBUTTONTEXT_OFFSET UNITYSDK_OFFSET(0x1733A040)
#define MIHOYO_SDK_CONSOLE_CONSOLEDIALOGBASE_HIGHLIGHTEDCHANGED_OFFSET UNITYSDK_OFFSET(0x1733A980)
#define MIHOYO_SDK_CONSOLE_CONSOLEDIALOGBASE_ISFOCUS_OFFSET UNITYSDK_OFFSET(0x1733A9A0)
#define MIHOYO_SDK_CONSOLE_CONSOLEDIALOGBASE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x173315B0)
#define MIHOYO_SDK_CONSOLE_CONSOLEDIALOGBASE_REGISTERINPUTFIELDTOUCHHANDLER_OFFSET UNITYSDK_OFFSET(0x1733A9C0)
#define MIHOYO_SDK_CONSOLE_CONSOLEDIALOGBASE_REVERTPS4BUTTONIMAGES_OFFSET UNITYSDK_OFFSET(0x1733A2E0)
#define MIHOYO_SDK_CONSOLE_CONSOLEDIALOGBASE_SETHIGHLIGHTEDOBJECT_OFFSET UNITYSDK_OFFSET(0x1732C660)
#define MIHOYO_SDK_CONSOLE_CONSOLEDIALOGBASE_SET_CANCELBUTTONTEXT_OFFSET UNITYSDK_OFFSET(0x17330D70)
#define MIHOYO_SDK_CONSOLE_CONSOLEDIALOGBASE_SET_CONFIRMBUTTONTEXT_OFFSET UNITYSDK_OFFSET(0x17330C20)
#define MIHOYO_SDK_CONSOLE_CONSOLEDIALOGBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x17333E70)

namespace MiHoYo::SDK::Console
{
	inline static constexpr unsigned int ConsoleDialogBase_TypeDefinitionIndex = 8943;

	class ConsoleDialogBase : public ::MiHoYo::SDK::UIElement
	{
	public:
		// static const ::System::String* AgreeButtonPath; // 0x0
		// static const ::System::String* AgreeTextPath; // 0x0
		// static const ::System::String* AgreeImagePath; // 0x0
		// static const ::System::String* AgreeRevertedImagePath; // 0x0
		// static const ::System::String* RefuseButtonPath; // 0x0
		// static const ::System::String* RefuseTextPath; // 0x0
		// static const ::System::String* RefuseImagePath; // 0x0
		// static const ::System::String* RefuseRevertedImagePath; // 0x0
		// static const ::System::Int32 xcloud_button_width = 0x2C; // 0x0
		::System::Action* OnDialogConfirmed; // 0x58
		::System::Action* OnDialogCanceled; // 0x60
		::System::Action_1<::UnityEngine::GameObject*>* OnDialogHighlightedChanged; // 0x68
		::UnityEngine::GameObject* ConfirmButtonObject; // 0x70
		::UnityEngine::GameObject* CancelButtonObject; // 0x78
		::MiHoYo::SDK::Console::SDKUIController* controller; // 0x80
		::MiHoYo::SDK::Console::SDKUIDialog* dialog; // 0x88
		::UnityEngine::GameObject* ConfirmButtonTextObj; // 0x90
		::UnityEngine::GameObject* ConfirmButtonImageObj; // 0x98
		::UnityEngine::GameObject* ConfirmButtonRevertedImageObj; // 0xA0
		::UnityEngine::GameObject* CancelButtonTextObj; // 0xA8
		::UnityEngine::GameObject* CancelButtonImageObj; // 0xB0
		::UnityEngine::GameObject* CancelButtonRevertedImageObj; // 0xB8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEDIALOGBASE__CTOR_OFFSET))(this);
		}

		::System::Void set_ConfirmButtonText(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEDIALOGBASE_SET_CONFIRMBUTTONTEXT_OFFSET))(this, a1);
		}

		::System::String* get_ConfirmButtonText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEDIALOGBASE_GET_CONFIRMBUTTONTEXT_OFFSET))(this);
		}

		::System::Void set_CancelButtonText(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEDIALOGBASE_SET_CANCELBUTTONTEXT_OFFSET))(this, a1);
		}

		::System::String* get_CancelButtonText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEDIALOGBASE_GET_CANCELBUTTONTEXT_OFFSET))(this);
		}

		::System::Void SetHighlightedObject(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEDIALOGBASE_SETHIGHLIGHTEDOBJECT_OFFSET))(this, a1);
		}

		::System::Void RevertPS4ButtonImages()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEDIALOGBASE_REVERTPS4BUTTONIMAGES_OFFSET))(this);
		}

		::System::Void AdjustButtonSizeOnXcloud()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEDIALOGBASE_ADJUSTBUTTONSIZEONXCLOUD_OFFSET))(this);
		}

		::System::Void CancelButtonClicked()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEDIALOGBASE_CANCELBUTTONCLICKED_OFFSET))(this);
		}

		::System::Void ConfirmButtonClicked()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEDIALOGBASE_CONFIRMBUTTONCLICKED_OFFSET))(this);
		}

		::System::Void HighlightedChanged(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEDIALOGBASE_HIGHLIGHTEDCHANGED_OFFSET))(this, a1);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEDIALOGBASE_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEDIALOGBASE_ONENABLE_OFFSET))(this);
		}

		::System::Boolean isFocus()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEDIALOGBASE_ISFOCUS_OFFSET))(this);
		}

		::System::Void RegisterInputFieldTouchHandler(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEDIALOGBASE_REGISTERINPUTFIELDTOUCHHANDLER_OFFSET))(this, a1);
		}
	};
}
