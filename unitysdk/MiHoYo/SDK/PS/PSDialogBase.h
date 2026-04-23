#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/UIElement.h"

namespace MiHoYo::SDK::PS { class SDKUIController; }
namespace MiHoYo::SDK::PS { class SDKUIDialog; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class GameObject; }

#define MIHOYO_SDK_PS_PSDIALOGBASE_AWAKE_OFFSET UNITYSDK_OFFSET(0x175E1A20)
#define MIHOYO_SDK_PS_PSDIALOGBASE_CANCELBUTTONCLICKED_OFFSET UNITYSDK_OFFSET(0x175E71F0)
#define MIHOYO_SDK_PS_PSDIALOGBASE_CONFIRMBUTTONCLICKED_OFFSET UNITYSDK_OFFSET(0x175E72C0)
#define MIHOYO_SDK_PS_PSDIALOGBASE_GET_CANCELBUTTONTEXT_OFFSET UNITYSDK_OFFSET(0x175E6D50)
#define MIHOYO_SDK_PS_PSDIALOGBASE_GET_CONFIRMBUTTONTEXT_OFFSET UNITYSDK_OFFSET(0x175E6C70)
#define MIHOYO_SDK_PS_PSDIALOGBASE_HIGHLIGHTEDCHANGED_OFFSET UNITYSDK_OFFSET(0x175E7390)
#define MIHOYO_SDK_PS_PSDIALOGBASE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x175E73B0)
#define MIHOYO_SDK_PS_PSDIALOGBASE_REVERTPS4BUTTONIMAGES_OFFSET UNITYSDK_OFFSET(0x175E6E40)
#define MIHOYO_SDK_PS_PSDIALOGBASE_SETHIGHLIGHTEDOBJECT_OFFSET UNITYSDK_OFFSET(0x175DE950)
#define MIHOYO_SDK_PS_PSDIALOGBASE_SET_CANCELBUTTONTEXT_OFFSET UNITYSDK_OFFSET(0x175E1EC0)
#define MIHOYO_SDK_PS_PSDIALOGBASE_SET_CONFIRMBUTTONTEXT_OFFSET UNITYSDK_OFFSET(0x175E1DE0)
#define MIHOYO_SDK_PS_PSDIALOGBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x175E3940)

namespace MiHoYo::SDK::PS
{
	inline static constexpr unsigned int PSDialogBase_TypeDefinitionIndex = 7703;

	class PSDialogBase : public ::MiHoYo::SDK::UIElement
	{
	public:
		// static const ::System::String* AgreeButtonPath; // 0x0
		// static const ::System::String* AgreeTextPath; // 0x0
		// static const ::System::String* AgreeRevertedImagePath; // 0x0
		// static const ::System::String* RefuseButtonPath; // 0x0
		// static const ::System::String* RefuseTextPath; // 0x0
		// static const ::System::String* RefuseRevertedImagePath; // 0x0
		::System::Action* OnDialogConfirmed; // 0x58
		::System::Action* OnDialogCanceled; // 0x60
		::System::Action_1<::UnityEngine::GameObject*>* OnDialogHighlightedChanged; // 0x68
		::UnityEngine::GameObject* ConfirmButtonObject; // 0x70
		::UnityEngine::GameObject* CancelButtonObject; // 0x78
		::MiHoYo::SDK::PS::SDKUIController* controller; // 0x80
		::MiHoYo::SDK::PS::SDKUIDialog* dialog; // 0x88
		::UnityEngine::GameObject* ConfirmButtonTextObj; // 0x90
		::UnityEngine::GameObject* ConfirmButtonRevertedImageObj; // 0x98
		::UnityEngine::GameObject* CancelButtonTextObj; // 0xA0
		::UnityEngine::GameObject* CancelButtonRevertedImageObj; // 0xA8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSDIALOGBASE__CTOR_OFFSET))(this);
		}

		::System::Void set_ConfirmButtonText(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSDIALOGBASE_SET_CONFIRMBUTTONTEXT_OFFSET))(this, value);
		}

		::System::String* get_ConfirmButtonText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSDIALOGBASE_GET_CONFIRMBUTTONTEXT_OFFSET))(this);
		}

		::System::Void set_CancelButtonText(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSDIALOGBASE_SET_CANCELBUTTONTEXT_OFFSET))(this, value);
		}

		::System::String* get_CancelButtonText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSDIALOGBASE_GET_CANCELBUTTONTEXT_OFFSET))(this);
		}

		::System::Void SetHighlightedObject(::UnityEngine::GameObject* obj)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSDIALOGBASE_SETHIGHLIGHTEDOBJECT_OFFSET))(this, obj);
		}

		::System::Void RevertPS4ButtonImages()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSDIALOGBASE_REVERTPS4BUTTONIMAGES_OFFSET))(this);
		}

		::System::Void CancelButtonClicked()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSDIALOGBASE_CANCELBUTTONCLICKED_OFFSET))(this);
		}

		::System::Void ConfirmButtonClicked()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSDIALOGBASE_CONFIRMBUTTONCLICKED_OFFSET))(this);
		}

		::System::Void HighlightedChanged(::UnityEngine::GameObject* obj)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSDIALOGBASE_HIGHLIGHTEDCHANGED_OFFSET))(this, obj);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSDIALOGBASE_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSDIALOGBASE_ONENABLE_OFFSET))(this);
		}
	};
}
