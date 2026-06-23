#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PC/OS/HoYoChannelShowTextEntryInputScope.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/UI/InputField_ContentType.h"

namespace MiHoYo::SDK::Console { class SDKUIDropdownControl; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class InputField; }
namespace UnityEngine::UI { class Slider; }

#define MIHOYO_SDK_CONSOLE_SDKUIDIALOG_FIREBUTTON_OFFSET UNITYSDK_OFFSET(0x1B9C9260)
#define MIHOYO_SDK_CONSOLE_SDKUIDIALOG_FIREDROPDOWN_OFFSET UNITYSDK_OFFSET(0x1B9C99A0)
#define MIHOYO_SDK_CONSOLE_SDKUIDIALOG_FIREINPUTFIELD_OFFSET UNITYSDK_OFFSET(0x1B9C9430)
#define MIHOYO_SDK_CONSOLE_SDKUIDIALOG_FIRESLIDER_OFFSET UNITYSDK_OFFSET(0x1B9C97F0)
#define MIHOYO_SDK_CONSOLE_SDKUIDIALOG_FIRETOGGLE_OFFSET UNITYSDK_OFFSET(0x1B9C95F0)
#define MIHOYO_SDK_CONSOLE_SDKUIDIALOG_FIRE_OFFSET UNITYSDK_OFFSET(0x1B9C8F70)
#define MIHOYO_SDK_CONSOLE_SDKUIDIALOG_GET_HIGHLIGHTEDOBJECT_OFFSET UNITYSDK_OFFSET(0x1B9C6E70)
#define MIHOYO_SDK_CONSOLE_SDKUIDIALOG_GET_ISFOCUSED_OFFSET UNITYSDK_OFFSET(0x1B9C87F0)
#define MIHOYO_SDK_CONSOLE_SDKUIDIALOG_INITDROPDOWNCONTROL_OFFSET UNITYSDK_OFFSET(0x1B9CA040)
#define MIHOYO_SDK_CONSOLE_SDKUIDIALOG_ONIMEDIALOGCLOSECALLBACK_OFFSET UNITYSDK_OFFSET(0x1B9CABD0)
#define MIHOYO_SDK_CONSOLE_SDKUIDIALOG_ONIMEDIALOGCOMPLETECALLBACK_OFFSET UNITYSDK_OFFSET(0x1B9CABE0)
#define MIHOYO_SDK_CONSOLE_SDKUIDIALOG_OPENIME_OFFSET UNITYSDK_OFFSET(0x1B9C9B90)
#define MIHOYO_SDK_CONSOLE_SDKUIDIALOG_SETHIGHLIGHTOBJECT_OFFSET UNITYSDK_OFFSET(0x1B9C6E90)
#define MIHOYO_SDK_CONSOLE_SDKUIDIALOG_SET_HIGHLIGHTEDOBJECT_OFFSET UNITYSDK_OFFSET(0x1B9C6E80)
#define MIHOYO_SDK_CONSOLE_SDKUIDIALOG_SET_ISFOCUSED_OFFSET UNITYSDK_OFFSET(0x1B9C8800)
#define MIHOYO_SDK_CONSOLE_SDKUIDIALOG_TOHOYOCHANNELINPUTSCOPE_OFFSET UNITYSDK_OFFSET(0x1B9CABB0)
#define MIHOYO_SDK_CONSOLE_SDKUIDIALOG_UPDATEDROPDOWN_OFFSET UNITYSDK_OFFSET(0x1B9C8DE0)
#define MIHOYO_SDK_CONSOLE_SDKUIDIALOG_UPDATEINPUTFIELD_OFFSET UNITYSDK_OFFSET(0x1B9C89A0)
#define MIHOYO_SDK_CONSOLE_SDKUIDIALOG_UPDATESLIDER_OFFSET UNITYSDK_OFFSET(0x1B9C8B10)
#define MIHOYO_SDK_CONSOLE_SDKUIDIALOG_UPDATE_OFFSET UNITYSDK_OFFSET(0x1B9C8810)
#define MIHOYO_SDK_CONSOLE_SDKUIDIALOG__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B9CADD0)
#define MIHOYO_SDK_CONSOLE_SDKUIDIALOG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9CAD70)
#define MIHOYO_SDK_CONSOLE_SDKUIDIALOG__UPDATEDROPDOWN_B__27_1_OFFSET UNITYSDK_OFFSET(0x1B9CADF0)
#define MIHOYO_SDK_CONSOLE_SDKUIDIALOG__UPDATEDROPDOWN_G__DEFOCUSED_27_0_OFFSET UNITYSDK_OFFSET(0x1B9CAB60)

namespace MiHoYo::SDK::Console
{
	inline static constexpr unsigned int SDKUIDialog_TypeDefinitionIndex = 20720;

	class SDKUIDialog : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::MiHoYo::SDK::Console::SDKUIDropdownControl** StaticGet_dropDownControl()
		{
			return (::MiHoYo::SDK::Console::SDKUIDropdownControl**)Il2CppClass::FromTypeDefinitionIndex(SDKUIDialog_TypeDefinitionIndex)->GetStaticField(0xAA30);
		}
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
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_SDKUIDIALOG__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_SDKUIDIALOG__CCTOR_OFFSET))();
		}

		::UnityEngine::GameObject* get_HighlightedObject()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_SDKUIDIALOG_GET_HIGHLIGHTEDOBJECT_OFFSET))(this);
		}

		::System::Void set_HighlightedObject(::UnityEngine::GameObject* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_SDKUIDIALOG_SET_HIGHLIGHTEDOBJECT_OFFSET))(this, value);
		}

		::System::Boolean get_IsFocused()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_SDKUIDIALOG_GET_ISFOCUSED_OFFSET))(this);
		}

		::System::Void set_IsFocused(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_SDKUIDIALOG_SET_ISFOCUSED_OFFSET))(this, value);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_SDKUIDIALOG_UPDATE_OFFSET))(this);
		}

		::System::Void Fire()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_SDKUIDIALOG_FIRE_OFFSET))(this);
		}

		::System::Boolean FireButton()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_SDKUIDIALOG_FIREBUTTON_OFFSET))(this);
		}

		::System::Boolean FireInputField()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_SDKUIDIALOG_FIREINPUTFIELD_OFFSET))(this);
		}

		::System::Boolean UpdateInputField()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_SDKUIDIALOG_UPDATEINPUTFIELD_OFFSET))(this);
		}

		::System::Boolean FireToggle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_SDKUIDIALOG_FIRETOGGLE_OFFSET))(this);
		}

		::System::Boolean FireSlider()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_SDKUIDIALOG_FIRESLIDER_OFFSET))(this);
		}

		static ::System::Void InitDropDownControl()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_SDKUIDIALOG_INITDROPDOWNCONTROL_OFFSET))();
		}

		::System::Boolean FireDropdown()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_SDKUIDIALOG_FIREDROPDOWN_OFFSET))(this);
		}

		::System::Boolean UpdateDropdown()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_SDKUIDIALOG_UPDATEDROPDOWN_OFFSET))(this);
		}

		::System::Boolean UpdateSlider()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_SDKUIDIALOG_UPDATESLIDER_OFFSET))(this);
		}

		::System::Void SetHighlightObject(::UnityEngine::GameObject* newObj)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_SDKUIDIALOG_SETHIGHLIGHTOBJECT_OFFSET))(this, newObj);
		}

		::System::Void OpenIme()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_SDKUIDIALOG_OPENIME_OFFSET))(this);
		}

		static ::MiHoYo::SDK::PC::OS::HoYoChannelShowTextEntryInputScope ToHoYoChannelInputScope(::UnityEngine::UI::InputField_ContentType contentType)
		{
			return ((::MiHoYo::SDK::PC::OS::HoYoChannelShowTextEntryInputScope(*)(::UnityEngine::UI::InputField_ContentType))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_SDKUIDIALOG_TOHOYOCHANNELINPUTSCOPE_OFFSET))(contentType);
		}

		::System::Void OnImeDialogCloseCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_SDKUIDIALOG_ONIMEDIALOGCLOSECALLBACK_OFFSET))(this);
		}

		::System::Void OnImeDialogCompleteCallback(::System::String* text)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_SDKUIDIALOG_ONIMEDIALOGCOMPLETECALLBACK_OFFSET))(this, text);
		}

		::System::Collections::IEnumerator* _UpdateDropdown_g__DeFocused_27_0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_SDKUIDIALOG__UPDATEDROPDOWN_G__DEFOCUSED_27_0_OFFSET))(this);
		}

		::System::Boolean _UpdateDropdown_b__27_1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_SDKUIDIALOG__UPDATEDROPDOWN_B__27_1_OFFSET))(this);
		}
	};
}
