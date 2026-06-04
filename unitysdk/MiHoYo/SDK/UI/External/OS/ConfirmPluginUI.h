#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_UI_EXTERNAL_OS_CONFIRMPLUGINUI_GET_ONCANCELBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x184434C0)
#define MIHOYO_SDK_UI_EXTERNAL_OS_CONFIRMPLUGINUI_GET_ONCONFIRMBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x184434E0)
#define MIHOYO_SDK_UI_EXTERNAL_OS_CONFIRMPLUGINUI_HIDEPLUGINUI_OFFSET UNITYSDK_OFFSET(0x184439D0)
#define MIHOYO_SDK_UI_EXTERNAL_OS_CONFIRMPLUGINUI_HIDE_OFFSET UNITYSDK_OFFSET(0x18443A80)
#define MIHOYO_SDK_UI_EXTERNAL_OS_CONFIRMPLUGINUI_SET_ONCANCELBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x184434D0)
#define MIHOYO_SDK_UI_EXTERNAL_OS_CONFIRMPLUGINUI_SET_ONCONFIRMBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x184434F0)
#define MIHOYO_SDK_UI_EXTERNAL_OS_CONFIRMPLUGINUI_SHOWPLUGINUI_OFFSET UNITYSDK_OFFSET(0x18443500)
#define MIHOYO_SDK_UI_EXTERNAL_OS_CONFIRMPLUGINUI_SHOW_OFFSET UNITYSDK_OFFSET(0x18443A70)
#define MIHOYO_SDK_UI_EXTERNAL_OS_CONFIRMPLUGINUI__CTOR_OFFSET UNITYSDK_OFFSET(0x18443A90)
#define MIHOYO_SDK_UI_EXTERNAL_OS_CONFIRMPLUGINUI__SHOWPLUGINUI_B__8_0_OFFSET UNITYSDK_OFFSET(0x18443AA0)
#define MIHOYO_SDK_UI_EXTERNAL_OS_CONFIRMPLUGINUI__SHOWPLUGINUI_B__8_1_OFFSET UNITYSDK_OFFSET(0x18443AD0)

namespace MiHoYo::SDK::UI::External::OS
{
	inline static constexpr unsigned int ConfirmPluginUI_TypeDefinitionIndex = 8332;

	class ConfirmPluginUI : public ::System::Object
	{
	public:
		::System::Action* _OnCancelBtnClicked_k__BackingField; // 0x10
		::System::Action* _OnConfirmBtnClicked_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_CONFIRMPLUGINUI__CTOR_OFFSET))(this);
		}

		::System::Action* get_OnCancelBtnClicked()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_CONFIRMPLUGINUI_GET_ONCANCELBTNCLICKED_OFFSET))(this);
		}

		::System::Void set_OnCancelBtnClicked(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_CONFIRMPLUGINUI_SET_ONCANCELBTNCLICKED_OFFSET))(this, a1);
		}

		::System::Action* get_OnConfirmBtnClicked()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_CONFIRMPLUGINUI_GET_ONCONFIRMBTNCLICKED_OFFSET))(this);
		}

		::System::Void set_OnConfirmBtnClicked(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_CONFIRMPLUGINUI_SET_ONCONFIRMBTNCLICKED_OFFSET))(this, a1);
		}

		::System::Boolean ShowPluginUI(::System::String* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_CONFIRMPLUGINUI_SHOWPLUGINUI_OFFSET))(this, a1, a2, a3);
		}

		::System::Void HidePluginUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_CONFIRMPLUGINUI_HIDEPLUGINUI_OFFSET))(this);
		}

		::System::Void Show(::System::String* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_CONFIRMPLUGINUI_SHOW_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Hide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_CONFIRMPLUGINUI_HIDE_OFFSET))(this);
		}

		::System::Void _ShowPluginUI_b__8_0(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_CONFIRMPLUGINUI__SHOWPLUGINUI_B__8_0_OFFSET))(this, a1, a2);
		}

		::System::Void _ShowPluginUI_b__8_1(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_CONFIRMPLUGINUI__SHOWPLUGINUI_B__8_1_OFFSET))(this, a1, a2);
		}
	};
}
