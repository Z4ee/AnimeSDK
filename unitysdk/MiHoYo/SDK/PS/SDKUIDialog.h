#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class InputField; }
namespace UnityEngine::UI { class Slider; }

#define MIHOYO_SDK_PS_SDKUIDIALOG_FIREBUTTON_OFFSET UNITYSDK_OFFSET(0x1BA92B60)
#define MIHOYO_SDK_PS_SDKUIDIALOG_FIREINPUTFIELD_OFFSET UNITYSDK_OFFSET(0x1BA92D30)
#define MIHOYO_SDK_PS_SDKUIDIALOG_FIRESLIDER_OFFSET UNITYSDK_OFFSET(0x1BA930F0)
#define MIHOYO_SDK_PS_SDKUIDIALOG_FIRETOGGLE_OFFSET UNITYSDK_OFFSET(0x1BA92EF0)
#define MIHOYO_SDK_PS_SDKUIDIALOG_FIRE_OFFSET UNITYSDK_OFFSET(0x1BA92870)
#define MIHOYO_SDK_PS_SDKUIDIALOG_GET_HIGHLIGHTEDOBJECT_OFFSET UNITYSDK_OFFSET(0x1BA910E0)
#define MIHOYO_SDK_PS_SDKUIDIALOG_GET_ISFOCUSED_OFFSET UNITYSDK_OFFSET(0x1BA92300)
#define MIHOYO_SDK_PS_SDKUIDIALOG_ONIMEDIALOGCLOSECALLBACK_OFFSET UNITYSDK_OFFSET(0x1BA934D0)
#define MIHOYO_SDK_PS_SDKUIDIALOG_ONIMEDIALOGCOMPLETECALLBACK_OFFSET UNITYSDK_OFFSET(0x1BA93770)
#define MIHOYO_SDK_PS_SDKUIDIALOG_OPENIME_OFFSET UNITYSDK_OFFSET(0x1BA932A0)
#define MIHOYO_SDK_PS_SDKUIDIALOG_SETHIGHLIGHTOBJECT_OFFSET UNITYSDK_OFFSET(0x1BA91100)
#define MIHOYO_SDK_PS_SDKUIDIALOG_SET_HIGHLIGHTEDOBJECT_OFFSET UNITYSDK_OFFSET(0x1BA910F0)
#define MIHOYO_SDK_PS_SDKUIDIALOG_SET_ISFOCUSED_OFFSET UNITYSDK_OFFSET(0x1BA92310)
#define MIHOYO_SDK_PS_SDKUIDIALOG_UPDATEINPUTFIELD_OFFSET UNITYSDK_OFFSET(0x1BA92490)
#define MIHOYO_SDK_PS_SDKUIDIALOG_UPDATESLIDER_OFFSET UNITYSDK_OFFSET(0x1BA92600)
#define MIHOYO_SDK_PS_SDKUIDIALOG_UPDATE_OFFSET UNITYSDK_OFFSET(0x1BA92320)
#define MIHOYO_SDK_PS_SDKUIDIALOG__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA93B50)

namespace MiHoYo::SDK::PS
{
	inline static constexpr unsigned int SDKUIDialog_TypeDefinitionIndex = 20674;

	class SDKUIDialog : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean _IsFocused_k__BackingField; // 0x18
		::System::Action* OnCancel; // 0x20
		::System::Action* OnFire; // 0x28
		::System::Action_1<::UnityEngine::GameObject*>* OnHighlightedChanged; // 0x30
		::UnityEngine::GameObject* highlightedObject; // 0x38
		::UnityEngine::UI::InputField* focusedInputField; // 0x40
		::UnityEngine::UI::Slider* focusedSlider; // 0x48
		::System::Boolean isImeEditing; // 0x50
		::System::Boolean needRestore; // 0x51
		::UnityEngine::Color originalOutlineColor; // 0x54
		::UnityEngine::Color originalTextColor; // 0x64

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_SDKUIDIALOG__CTOR_OFFSET))(this);
		}

		::UnityEngine::GameObject* get_HighlightedObject()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_SDKUIDIALOG_GET_HIGHLIGHTEDOBJECT_OFFSET))(this);
		}

		::System::Void set_HighlightedObject(::UnityEngine::GameObject* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_SDKUIDIALOG_SET_HIGHLIGHTEDOBJECT_OFFSET))(this, value);
		}

		::System::Boolean get_IsFocused()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_SDKUIDIALOG_GET_ISFOCUSED_OFFSET))(this);
		}

		::System::Void set_IsFocused(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_SDKUIDIALOG_SET_ISFOCUSED_OFFSET))(this, value);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_SDKUIDIALOG_UPDATE_OFFSET))(this);
		}

		::System::Void Fire()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_SDKUIDIALOG_FIRE_OFFSET))(this);
		}

		::System::Boolean FireButton()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_SDKUIDIALOG_FIREBUTTON_OFFSET))(this);
		}

		::System::Boolean FireInputField()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_SDKUIDIALOG_FIREINPUTFIELD_OFFSET))(this);
		}

		::System::Boolean UpdateInputField()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_SDKUIDIALOG_UPDATEINPUTFIELD_OFFSET))(this);
		}

		::System::Boolean FireToggle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_SDKUIDIALOG_FIRETOGGLE_OFFSET))(this);
		}

		::System::Boolean FireSlider()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_SDKUIDIALOG_FIRESLIDER_OFFSET))(this);
		}

		::System::Boolean UpdateSlider()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_SDKUIDIALOG_UPDATESLIDER_OFFSET))(this);
		}

		::System::Void SetHighlightObject(::UnityEngine::GameObject* newObj)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_SDKUIDIALOG_SETHIGHLIGHTOBJECT_OFFSET))(this, newObj);
		}

		::System::Void OpenIme()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_SDKUIDIALOG_OPENIME_OFFSET))(this);
		}

		static ::System::Void OnImeDialogCloseCallback()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_SDKUIDIALOG_ONIMEDIALOGCLOSECALLBACK_OFFSET))();
		}

		static ::System::Void OnImeDialogCompleteCallback(::System::String* text)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_SDKUIDIALOG_ONIMEDIALOGCOMPLETECALLBACK_OFFSET))(text);
		}
	};
}
