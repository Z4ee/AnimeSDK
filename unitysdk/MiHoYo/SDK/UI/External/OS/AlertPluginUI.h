#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_UI_EXTERNAL_OS_ALERTPLUGINUI_GET_ONCLOSEBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x18442E40)
#define MIHOYO_SDK_UI_EXTERNAL_OS_ALERTPLUGINUI_GET_ONCONFIRMBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x18442E60)
#define MIHOYO_SDK_UI_EXTERNAL_OS_ALERTPLUGINUI_HIDEPLUGINUI_OFFSET UNITYSDK_OFFSET(0x18443350)
#define MIHOYO_SDK_UI_EXTERNAL_OS_ALERTPLUGINUI_HIDE_OFFSET UNITYSDK_OFFSET(0x18443460)
#define MIHOYO_SDK_UI_EXTERNAL_OS_ALERTPLUGINUI_SET_ONCLOSEBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x18442E50)
#define MIHOYO_SDK_UI_EXTERNAL_OS_ALERTPLUGINUI_SET_ONCONFIRMBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x18442E70)
#define MIHOYO_SDK_UI_EXTERNAL_OS_ALERTPLUGINUI_SHOWPLUGINUI_OFFSET UNITYSDK_OFFSET(0x18442E80)
#define MIHOYO_SDK_UI_EXTERNAL_OS_ALERTPLUGINUI_SHOW_OFFSET UNITYSDK_OFFSET(0x18443450)
#define MIHOYO_SDK_UI_EXTERNAL_OS_ALERTPLUGINUI__CTOR_OFFSET UNITYSDK_OFFSET(0x18443470)
#define MIHOYO_SDK_UI_EXTERNAL_OS_ALERTPLUGINUI__SHOWPLUGINUI_B__8_0_OFFSET UNITYSDK_OFFSET(0x18443480)
#define MIHOYO_SDK_UI_EXTERNAL_OS_ALERTPLUGINUI__SHOWPLUGINUI_B__8_1_OFFSET UNITYSDK_OFFSET(0x184434A0)

namespace MiHoYo::SDK::UI::External::OS
{
	inline static constexpr unsigned int AlertPluginUI_TypeDefinitionIndex = 8331;

	class AlertPluginUI : public ::System::Object
	{
	public:
		::System::Action* _OnCloseBtnClicked_k__BackingField; // 0x10
		::System::Action* _OnConfirmBtnClicked_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_ALERTPLUGINUI__CTOR_OFFSET))(this);
		}

		::System::Action* get_OnCloseBtnClicked()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_ALERTPLUGINUI_GET_ONCLOSEBTNCLICKED_OFFSET))(this);
		}

		::System::Void set_OnCloseBtnClicked(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_ALERTPLUGINUI_SET_ONCLOSEBTNCLICKED_OFFSET))(this, a1);
		}

		::System::Action* get_OnConfirmBtnClicked()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_ALERTPLUGINUI_GET_ONCONFIRMBTNCLICKED_OFFSET))(this);
		}

		::System::Void set_OnConfirmBtnClicked(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_ALERTPLUGINUI_SET_ONCONFIRMBTNCLICKED_OFFSET))(this, a1);
		}

		::System::Boolean ShowPluginUI(::System::String* a1, ::System::String* a2, ::System::Boolean a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_ALERTPLUGINUI_SHOWPLUGINUI_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Boolean HidePluginUI()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_ALERTPLUGINUI_HIDEPLUGINUI_OFFSET))();
		}

		::System::Void Show(::System::String* a1, ::System::String* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_ALERTPLUGINUI_SHOW_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Hide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_ALERTPLUGINUI_HIDE_OFFSET))(this);
		}

		::System::Void _ShowPluginUI_b__8_0(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_ALERTPLUGINUI__SHOWPLUGINUI_B__8_0_OFFSET))(this, a1, a2);
		}

		::System::Void _ShowPluginUI_b__8_1(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_ALERTPLUGINUI__SHOWPLUGINUI_B__8_1_OFFSET))(this, a1, a2);
		}
	};
}
