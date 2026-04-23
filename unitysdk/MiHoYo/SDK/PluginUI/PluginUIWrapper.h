#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::PluginUI { class PluginUIBridgeElement; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MIHOYO_SDK_PLUGINUI_PLUGINUIWRAPPER_CREATEBRIDGEELEMENT_OFFSET UNITYSDK_OFFSET(0x1760DD00)
#define MIHOYO_SDK_PLUGINUI_PLUGINUIWRAPPER_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0x17616170)
#define MIHOYO_SDK_PLUGINUI_PLUGINUIWRAPPER_NOTIFYELEMENTSTATUSCHANGED_OFFSET UNITYSDK_OFFSET(0x176168F0)
#define MIHOYO_SDK_PLUGINUI_PLUGINUIWRAPPER_NOTIFYGETCAPTCHAFAILED_OFFSET UNITYSDK_OFFSET(0x176165A0)
#define MIHOYO_SDK_PLUGINUI_PLUGINUIWRAPPER_NOTIFYGETCAPTCHASUCCESS_OFFSET UNITYSDK_OFFSET(0x176163C0)
#define MIHOYO_SDK_PLUGINUI_PLUGINUIWRAPPER_NOTIFYHIDEELEMENTS_OFFSET UNITYSDK_OFFSET(0x176168E0)
#define MIHOYO_SDK_PLUGINUI_PLUGINUIWRAPPER_NOTIFYSHOWELEMENTS_OFFSET UNITYSDK_OFFSET(0x17616670)
#define MIHOYO_SDK_PLUGINUI_PLUGINUIWRAPPER_NOTIFYSHOWORHIDEELEMENTS_OFFSET UNITYSDK_OFFSET(0x17616680)
#define MIHOYO_SDK_PLUGINUI_PLUGINUIWRAPPER_UPDATEGETCAPTCHAELEMENTTEXT_OFFSET UNITYSDK_OFFSET(0x17616510)
#define MIHOYO_SDK_PLUGINUI_PLUGINUIWRAPPER_UPDATEPLUGINUIELEMENT_OFFSET UNITYSDK_OFFSET(0x17616250)
#define MIHOYO_SDK_PLUGINUI_PLUGINUIWRAPPER__CCTOR_OFFSET UNITYSDK_OFFSET(0x17616A20)
#define MIHOYO_SDK_PLUGINUI_PLUGINUIWRAPPER__CTOR_OFFSET UNITYSDK_OFFSET(0x17616160)

namespace MiHoYo::SDK::PluginUI
{
	inline static constexpr unsigned int PluginUIWrapper_TypeDefinitionIndex = 7912;

	class PluginUIWrapper : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::PluginUI::PluginUIWrapper** StaticGet_sm_instance()
		{
			return (::MiHoYo::SDK::PluginUI::PluginUIWrapper**)Il2CppClass::FromTypeDefinitionIndex(PluginUIWrapper_TypeDefinitionIndex)->GetStaticField(0x21560);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUIWRAPPER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUIWRAPPER__CCTOR_OFFSET))();
		}

		static ::MiHoYo::SDK::PluginUI::PluginUIWrapper* GetInstance()
		{
			return ((::MiHoYo::SDK::PluginUI::PluginUIWrapper*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUIWRAPPER_GETINSTANCE_OFFSET))();
		}

		::System::Void UpdatePluginUIElement(::System::String* strUIName, ::System::String* strElementID, ::System::String* strElementNewText)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUIWRAPPER_UPDATEPLUGINUIELEMENT_OFFSET))(this, strUIName, strElementID, strElementNewText);
		}

		::System::Void NotifyGetCaptchaSuccess(::System::Action_1<::System::String*>* callback, ::System::String* strUIName, ::System::String* strGetCaptchaElementID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUIWRAPPER_NOTIFYGETCAPTCHASUCCESS_OFFSET))(this, callback, strUIName, strGetCaptchaElementID);
		}

		::System::Void NotifyGetCaptchaFailed(::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUIWRAPPER_NOTIFYGETCAPTCHAFAILED_OFFSET))(this, callback);
		}

		static ::MiHoYo::SDK::PluginUI::PluginUIBridgeElement* CreateBridgeElement(::System::String* id, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>* action, ::System::String* text, ::System::String* hint, ::System::Boolean isVisible, ::System::Boolean isChecked, ::System::Int16 type)
		{
			return ((::MiHoYo::SDK::PluginUI::PluginUIBridgeElement*(*)(::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*, ::System::String*, ::System::String*, ::System::Boolean, ::System::Boolean, ::System::Int16))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUIWRAPPER_CREATEBRIDGEELEMENT_OFFSET))(id, action, text, hint, isVisible, isChecked, type);
		}

		::System::Void NotifyShowElements(::System::String* strUIName, ::System::Collections::Generic::List_1<::System::String*>* lstElementIds)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUIWRAPPER_NOTIFYSHOWELEMENTS_OFFSET))(this, strUIName, lstElementIds);
		}

		::System::Void NotifyHideElements(::System::String* strUIName, ::System::Collections::Generic::List_1<::System::String*>* lstElementIds)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUIWRAPPER_NOTIFYHIDEELEMENTS_OFFSET))(this, strUIName, lstElementIds);
		}

		::System::Void NotifyShowOrHideElements(::System::String* strUIName, ::System::Collections::Generic::List_1<::System::String*>* lstElementIds, ::System::Boolean bIsShow)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUIWRAPPER_NOTIFYSHOWORHIDEELEMENTS_OFFSET))(this, strUIName, lstElementIds, bIsShow);
		}

		::System::Void NotifyElementStatusChanged(::System::String* strUIName, ::System::String* strElementID, ::System::String* strStatusName, ::System::String* strStatusValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUIWRAPPER_NOTIFYELEMENTSTATUSCHANGED_OFFSET))(this, strUIName, strElementID, strStatusName, strStatusValue);
		}

		::System::Void UpdateGetCaptchaElementText(::System::String* strUIName, ::System::String* strGetCaptchaElementID)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUIWRAPPER_UPDATEGETCAPTCHAELEMENTTEXT_OFFSET))(this, strUIName, strGetCaptchaElementID);
		}
	};
}
