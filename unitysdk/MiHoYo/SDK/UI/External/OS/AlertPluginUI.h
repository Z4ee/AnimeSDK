#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_UI_EXTERNAL_OS_ALERTPLUGINUI_GET_ONCLOSEBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x17671C90)
#define MIHOYO_SDK_UI_EXTERNAL_OS_ALERTPLUGINUI_GET_ONCONFIRMBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x17671CB0)
#define MIHOYO_SDK_UI_EXTERNAL_OS_ALERTPLUGINUI_HIDEPLUGINUI_OFFSET UNITYSDK_OFFSET(0x17672070)
#define MIHOYO_SDK_UI_EXTERNAL_OS_ALERTPLUGINUI_HIDE_OFFSET UNITYSDK_OFFSET(0x17672180)
#define MIHOYO_SDK_UI_EXTERNAL_OS_ALERTPLUGINUI_SET_ONCLOSEBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x17671CA0)
#define MIHOYO_SDK_UI_EXTERNAL_OS_ALERTPLUGINUI_SET_ONCONFIRMBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x17671CC0)
#define MIHOYO_SDK_UI_EXTERNAL_OS_ALERTPLUGINUI_SHOWPLUGINUI_OFFSET UNITYSDK_OFFSET(0x17671CD0)
#define MIHOYO_SDK_UI_EXTERNAL_OS_ALERTPLUGINUI_SHOW_OFFSET UNITYSDK_OFFSET(0x17672170)
#define MIHOYO_SDK_UI_EXTERNAL_OS_ALERTPLUGINUI__CTOR_OFFSET UNITYSDK_OFFSET(0x17672190)
#define MIHOYO_SDK_UI_EXTERNAL_OS_ALERTPLUGINUI__SHOWPLUGINUI_B__8_0_OFFSET UNITYSDK_OFFSET(0x176721A0)
#define MIHOYO_SDK_UI_EXTERNAL_OS_ALERTPLUGINUI__SHOWPLUGINUI_B__8_1_OFFSET UNITYSDK_OFFSET(0x176721B0)

namespace MiHoYo::SDK::UI::External::OS
{
	inline static constexpr unsigned int AlertPluginUI_TypeDefinitionIndex = 7428;

	class AlertPluginUI : public ::System::Object
	{
	public:
		::System::Action* _OnConfirmBtnClicked_k__BackingField; // 0x10
		::System::Action* _OnCloseBtnClicked_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_ALERTPLUGINUI__CTOR_OFFSET))(this);
		}

		::System::Action* get_OnCloseBtnClicked()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_ALERTPLUGINUI_GET_ONCLOSEBTNCLICKED_OFFSET))(this);
		}

		::System::Void set_OnCloseBtnClicked(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_ALERTPLUGINUI_SET_ONCLOSEBTNCLICKED_OFFSET))(this, value);
		}

		::System::Action* get_OnConfirmBtnClicked()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_ALERTPLUGINUI_GET_ONCONFIRMBTNCLICKED_OFFSET))(this);
		}

		::System::Void set_OnConfirmBtnClicked(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_ALERTPLUGINUI_SET_ONCONFIRMBTNCLICKED_OFFSET))(this, value);
		}

		::System::Boolean ShowPluginUI(::System::String* content, ::System::String* buttonTitle, ::System::Boolean isShowClose)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_ALERTPLUGINUI_SHOWPLUGINUI_OFFSET))(this, content, buttonTitle, isShowClose);
		}

		static ::System::Boolean HidePluginUI()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_ALERTPLUGINUI_HIDEPLUGINUI_OFFSET))();
		}

		::System::Void Show(::System::String* message, ::System::String* btnText, ::System::Boolean closeEnable)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_ALERTPLUGINUI_SHOW_OFFSET))(this, message, btnText, closeEnable);
		}

		::System::Void Hide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_ALERTPLUGINUI_HIDE_OFFSET))(this);
		}

		::System::Void _ShowPluginUI_b__8_0(::System::String* strArgs, ::System::Action_1<::System::String*>* closeActionCallback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_ALERTPLUGINUI__SHOWPLUGINUI_B__8_0_OFFSET))(this, strArgs, closeActionCallback);
		}

		::System::Void _ShowPluginUI_b__8_1(::System::String* strArgs, ::System::Action_1<::System::String*>* confirmActionCallback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_ALERTPLUGINUI__SHOWPLUGINUI_B__8_1_OFFSET))(this, strArgs, confirmActionCallback);
		}
	};
}
