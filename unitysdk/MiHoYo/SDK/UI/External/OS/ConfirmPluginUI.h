#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_UI_EXTERNAL_OS_CONFIRMPLUGINUI_GET_ONCANCELBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x176721C0)
#define MIHOYO_SDK_UI_EXTERNAL_OS_CONFIRMPLUGINUI_GET_ONCONFIRMBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x176721E0)
#define MIHOYO_SDK_UI_EXTERNAL_OS_CONFIRMPLUGINUI_HIDEPLUGINUI_OFFSET UNITYSDK_OFFSET(0x176725A0)
#define MIHOYO_SDK_UI_EXTERNAL_OS_CONFIRMPLUGINUI_HIDE_OFFSET UNITYSDK_OFFSET(0x17672650)
#define MIHOYO_SDK_UI_EXTERNAL_OS_CONFIRMPLUGINUI_SET_ONCANCELBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x176721D0)
#define MIHOYO_SDK_UI_EXTERNAL_OS_CONFIRMPLUGINUI_SET_ONCONFIRMBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x176721F0)
#define MIHOYO_SDK_UI_EXTERNAL_OS_CONFIRMPLUGINUI_SHOWPLUGINUI_OFFSET UNITYSDK_OFFSET(0x17672200)
#define MIHOYO_SDK_UI_EXTERNAL_OS_CONFIRMPLUGINUI_SHOW_OFFSET UNITYSDK_OFFSET(0x17672640)
#define MIHOYO_SDK_UI_EXTERNAL_OS_CONFIRMPLUGINUI__CTOR_OFFSET UNITYSDK_OFFSET(0x17672660)
#define MIHOYO_SDK_UI_EXTERNAL_OS_CONFIRMPLUGINUI__SHOWPLUGINUI_B__8_0_OFFSET UNITYSDK_OFFSET(0x17672670)
#define MIHOYO_SDK_UI_EXTERNAL_OS_CONFIRMPLUGINUI__SHOWPLUGINUI_B__8_1_OFFSET UNITYSDK_OFFSET(0x17672690)

namespace MiHoYo::SDK::UI::External::OS
{
	inline static constexpr unsigned int ConfirmPluginUI_TypeDefinitionIndex = 7429;

	class ConfirmPluginUI : public ::System::Object
	{
	public:
		::System::Action* _OnConfirmBtnClicked_k__BackingField; // 0x10
		::System::Action* _OnCancelBtnClicked_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_CONFIRMPLUGINUI__CTOR_OFFSET))(this);
		}

		::System::Action* get_OnCancelBtnClicked()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_CONFIRMPLUGINUI_GET_ONCANCELBTNCLICKED_OFFSET))(this);
		}

		::System::Void set_OnCancelBtnClicked(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_CONFIRMPLUGINUI_SET_ONCANCELBTNCLICKED_OFFSET))(this, value);
		}

		::System::Action* get_OnConfirmBtnClicked()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_CONFIRMPLUGINUI_GET_ONCONFIRMBTNCLICKED_OFFSET))(this);
		}

		::System::Void set_OnConfirmBtnClicked(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_CONFIRMPLUGINUI_SET_ONCONFIRMBTNCLICKED_OFFSET))(this, value);
		}

		::System::Boolean ShowPluginUI(::System::String* hintMessage, ::System::String* confirmMessage, ::System::String* cancelMessage)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_CONFIRMPLUGINUI_SHOWPLUGINUI_OFFSET))(this, hintMessage, confirmMessage, cancelMessage);
		}

		::System::Void HidePluginUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_CONFIRMPLUGINUI_HIDEPLUGINUI_OFFSET))(this);
		}

		::System::Void Show(::System::String* hintMessage, ::System::String* confirmMessage, ::System::String* cancelMessage)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_CONFIRMPLUGINUI_SHOW_OFFSET))(this, hintMessage, confirmMessage, cancelMessage);
		}

		::System::Void Hide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_CONFIRMPLUGINUI_HIDE_OFFSET))(this);
		}

		::System::Void _ShowPluginUI_b__8_0(::System::String* strArgs, ::System::Action_1<::System::String*>* okActionCallback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_CONFIRMPLUGINUI__SHOWPLUGINUI_B__8_0_OFFSET))(this, strArgs, okActionCallback);
		}

		::System::Void _ShowPluginUI_b__8_1(::System::String* strArgs, ::System::Action_1<::System::String*>* cancelActionCallback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_CONFIRMPLUGINUI__SHOWPLUGINUI_B__8_1_OFFSET))(this, strArgs, cancelActionCallback);
		}
	};
}
