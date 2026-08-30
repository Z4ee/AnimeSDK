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

#define MIHOYO_SDK_CONSOLE_SDKUIDIALOG_FIREBUTTON_OFFSET UNITYSDK_OFFSET(0x1C5E25F0)
#define MIHOYO_SDK_CONSOLE_SDKUIDIALOG_FIREDROPDOWN_OFFSET UNITYSDK_OFFSET(0x1C5E2910)
#define MIHOYO_SDK_CONSOLE_SDKUIDIALOG_FIREINPUTFIELD_OFFSET UNITYSDK_OFFSET(0x1C5E26A0)
#define MIHOYO_SDK_CONSOLE_SDKUIDIALOG_FIRESLIDER_OFFSET UNITYSDK_OFFSET(0x1C5E2840)
#define MIHOYO_SDK_CONSOLE_SDKUIDIALOG_FIRETOGGLE_OFFSET UNITYSDK_OFFSET(0x1C5E2750)
#define MIHOYO_SDK_CONSOLE_SDKUIDIALOG_FIRE_OFFSET UNITYSDK_OFFSET(0x1C5DDD60)
#define MIHOYO_SDK_CONSOLE_SDKUIDIALOG_GET_HIGHLIGHTEDOBJECT_OFFSET UNITYSDK_OFFSET(0x1C5DE070)
#define MIHOYO_SDK_CONSOLE_SDKUIDIALOG_GET_ISFOCUSED_OFFSET UNITYSDK_OFFSET(0x1C5E2100)
#define MIHOYO_SDK_CONSOLE_SDKUIDIALOG_INITDROPDOWNCONTROL_OFFSET UNITYSDK_OFFSET(0x1C5E2EE0)
#define MIHOYO_SDK_CONSOLE_SDKUIDIALOG_ONIMEDIALOGCLOSECALLBACK_OFFSET UNITYSDK_OFFSET(0x1C5E37A0)
#define MIHOYO_SDK_CONSOLE_SDKUIDIALOG_ONIMEDIALOGCOMPLETECALLBACK_OFFSET UNITYSDK_OFFSET(0x1C5E37B0)
#define MIHOYO_SDK_CONSOLE_SDKUIDIALOG_OPENIME_OFFSET UNITYSDK_OFFSET(0x1C5E2A80)
#define MIHOYO_SDK_CONSOLE_SDKUIDIALOG_SETHIGHLIGHTOBJECT_OFFSET UNITYSDK_OFFSET(0x1C5E16D0)
#define MIHOYO_SDK_CONSOLE_SDKUIDIALOG_SET_HIGHLIGHTEDOBJECT_OFFSET UNITYSDK_OFFSET(0x1C5DE080)
#define MIHOYO_SDK_CONSOLE_SDKUIDIALOG_SET_ISFOCUSED_OFFSET UNITYSDK_OFFSET(0x1C5E2110)
#define MIHOYO_SDK_CONSOLE_SDKUIDIALOG_TOHOYOCHANNELINPUTSCOPE_OFFSET UNITYSDK_OFFSET(0x1C5E3780)
#define MIHOYO_SDK_CONSOLE_SDKUIDIALOG_UPDATEDROPDOWN_OFFSET UNITYSDK_OFFSET(0x1C5E24D0)
#define MIHOYO_SDK_CONSOLE_SDKUIDIALOG_UPDATEINPUTFIELD_OFFSET UNITYSDK_OFFSET(0x1C5E2180)
#define MIHOYO_SDK_CONSOLE_SDKUIDIALOG_UPDATESLIDER_OFFSET UNITYSDK_OFFSET(0x1C5E21C0)
#define MIHOYO_SDK_CONSOLE_SDKUIDIALOG_UPDATE_OFFSET UNITYSDK_OFFSET(0x1C5E2120)
#define MIHOYO_SDK_CONSOLE_SDKUIDIALOG__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C5E37F0)
#define MIHOYO_SDK_CONSOLE_SDKUIDIALOG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5E37E0)
#define MIHOYO_SDK_CONSOLE_SDKUIDIALOG__UPDATEDROPDOWN_B__27_1_OFFSET UNITYSDK_OFFSET(0x1C5E3820)
#define MIHOYO_SDK_CONSOLE_SDKUIDIALOG__UPDATEDROPDOWN_G__DEFOCUSED_27_0_OFFSET UNITYSDK_OFFSET(0x1C5E36D0)

namespace MiHoYo::SDK::Console
{
	inline static constexpr unsigned int SDKUIDialog_TypeDefinitionIndex = 8914;

	class SDKUIDialog : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::MiHoYo::SDK::Console::SDKUIDropdownControl** StaticGet_dropDownControl()
		{
			return (::MiHoYo::SDK::Console::SDKUIDropdownControl**)Il2CppClass::FromTypeDefinitionIndex(SDKUIDialog_TypeDefinitionIndex)->GetStaticField(0x10390);
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

		::System::Void set_HighlightedObject(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_SDKUIDIALOG_SET_HIGHLIGHTEDOBJECT_OFFSET))(this, a1);
		}

		::System::Boolean get_IsFocused()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_SDKUIDIALOG_GET_ISFOCUSED_OFFSET))(this);
		}

		::System::Void set_IsFocused(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_SDKUIDIALOG_SET_ISFOCUSED_OFFSET))(this, a1);
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

		::System::Void SetHighlightObject(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_SDKUIDIALOG_SETHIGHLIGHTOBJECT_OFFSET))(this, a1);
		}

		::System::Void OpenIme()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_SDKUIDIALOG_OPENIME_OFFSET))(this);
		}

		static ::MiHoYo::SDK::PC::OS::HoYoChannelShowTextEntryInputScope ToHoYoChannelInputScope(::UnityEngine::UI::InputField_ContentType a1)
		{
			return ((::MiHoYo::SDK::PC::OS::HoYoChannelShowTextEntryInputScope(*)(::UnityEngine::UI::InputField_ContentType))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_SDKUIDIALOG_TOHOYOCHANNELINPUTSCOPE_OFFSET))(a1);
		}

		::System::Void OnImeDialogCloseCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_SDKUIDIALOG_ONIMEDIALOGCLOSECALLBACK_OFFSET))(this);
		}

		::System::Void OnImeDialogCompleteCallback(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_SDKUIDIALOG_ONIMEDIALOGCOMPLETECALLBACK_OFFSET))(this, a1);
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
