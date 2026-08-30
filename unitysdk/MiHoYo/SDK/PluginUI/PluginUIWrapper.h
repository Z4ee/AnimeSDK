#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::PluginUI { class PluginUIBridgeElement; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MIHOYO_SDK_PLUGINUI_PLUGINUIWRAPPER_CREATEBRIDGEELEMENT_OFFSET UNITYSDK_OFFSET(0x1BA7A9B0)
#define MIHOYO_SDK_PLUGINUI_PLUGINUIWRAPPER_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0x1BA9C190)
#define MIHOYO_SDK_PLUGINUI_PLUGINUIWRAPPER_NOTIFYELEMENTSTATUSCHANGED_OFFSET UNITYSDK_OFFSET(0x1BA9C9C0)
#define MIHOYO_SDK_PLUGINUI_PLUGINUIWRAPPER_NOTIFYGETCAPTCHAFAILED_OFFSET UNITYSDK_OFFSET(0x1BA9C610)
#define MIHOYO_SDK_PLUGINUI_PLUGINUIWRAPPER_NOTIFYGETCAPTCHASUCCESS_OFFSET UNITYSDK_OFFSET(0x1BA9C430)
#define MIHOYO_SDK_PLUGINUI_PLUGINUIWRAPPER_NOTIFYHIDEELEMENTS_OFFSET UNITYSDK_OFFSET(0x1BA9C9B0)
#define MIHOYO_SDK_PLUGINUI_PLUGINUIWRAPPER_NOTIFYSHOWELEMENTS_OFFSET UNITYSDK_OFFSET(0x1BA9C6E0)
#define MIHOYO_SDK_PLUGINUI_PLUGINUIWRAPPER_NOTIFYSHOWORHIDEELEMENTS_OFFSET UNITYSDK_OFFSET(0x1BA9C6F0)
#define MIHOYO_SDK_PLUGINUI_PLUGINUIWRAPPER_UPDATEGETCAPTCHAELEMENTTEXT_OFFSET UNITYSDK_OFFSET(0x1BA9C580)
#define MIHOYO_SDK_PLUGINUI_PLUGINUIWRAPPER_UPDATEPLUGINUIELEMENT_OFFSET UNITYSDK_OFFSET(0x1BA9C270)
#define MIHOYO_SDK_PLUGINUI_PLUGINUIWRAPPER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BA9CAF0)
#define MIHOYO_SDK_PLUGINUI_PLUGINUIWRAPPER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA9C180)

namespace MiHoYo::SDK::PluginUI
{
	inline static constexpr unsigned int PluginUIWrapper_TypeDefinitionIndex = 9097;

	class PluginUIWrapper : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::PluginUI::PluginUIWrapper** StaticGet_sm_instance()
		{
			return (::MiHoYo::SDK::PluginUI::PluginUIWrapper**)Il2CppClass::FromTypeDefinitionIndex(PluginUIWrapper_TypeDefinitionIndex)->GetStaticField(0x24270);
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

		::System::Void UpdatePluginUIElement(::System::String* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUIWRAPPER_UPDATEPLUGINUIELEMENT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void NotifyGetCaptchaSuccess(::System::Action_1<::System::String*>* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUIWRAPPER_NOTIFYGETCAPTCHASUCCESS_OFFSET))(this, a1, a2, a3);
		}

		::System::Void NotifyGetCaptchaFailed(::System::Action_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUIWRAPPER_NOTIFYGETCAPTCHAFAILED_OFFSET))(this, a1);
		}

		static ::MiHoYo::SDK::PluginUI::PluginUIBridgeElement* CreateBridgeElement(::System::String* a1, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>* a2, ::System::String* a3, ::System::String* a4, ::System::Boolean a5, ::System::Boolean a6, ::System::Int16 a7)
		{
			return ((::MiHoYo::SDK::PluginUI::PluginUIBridgeElement*(*)(::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*, ::System::String*, ::System::String*, ::System::Boolean, ::System::Boolean, ::System::Int16))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUIWRAPPER_CREATEBRIDGEELEMENT_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void NotifyShowElements(::System::String* a1, ::System::Collections::Generic::List_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUIWRAPPER_NOTIFYSHOWELEMENTS_OFFSET))(this, a1, a2);
		}

		::System::Void NotifyHideElements(::System::String* a1, ::System::Collections::Generic::List_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUIWRAPPER_NOTIFYHIDEELEMENTS_OFFSET))(this, a1, a2);
		}

		::System::Void NotifyShowOrHideElements(::System::String* a1, ::System::Collections::Generic::List_1<::System::String*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUIWRAPPER_NOTIFYSHOWORHIDEELEMENTS_OFFSET))(this, a1, a2, a3);
		}

		::System::Void NotifyElementStatusChanged(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUIWRAPPER_NOTIFYELEMENTSTATUSCHANGED_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void UpdateGetCaptchaElementText(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUIWRAPPER_UPDATEGETCAPTCHAELEMENTTEXT_OFFSET))(this, a1, a2);
		}
	};
}
