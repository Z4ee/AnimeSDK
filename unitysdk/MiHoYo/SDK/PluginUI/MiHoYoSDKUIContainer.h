#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::PluginUI { class MiHoYoSDKUIElement; }
namespace MiHoYo::SDK::PluginUI { class MiHoYoSDKUIListElement; }
namespace MiHoYo::SDK::PluginUI { class MiHoYoSDKUIListItem; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MIHOYO_SDK_PLUGINUI_MIHOYOSDKUICONTAINER_APPENDLISTITEMINDEXPARAM_OFFSET UNITYSDK_OFFSET(0x1AB9E650)
#define MIHOYO_SDK_PLUGINUI_MIHOYOSDKUICONTAINER_CLEARELEMENTS_OFFSET UNITYSDK_OFFSET(0x1AB9DCC0)
#define MIHOYO_SDK_PLUGINUI_MIHOYOSDKUICONTAINER_CLOSE_OFFSET UNITYSDK_OFFSET(0x1AB9DB50)
#define MIHOYO_SDK_PLUGINUI_MIHOYOSDKUICONTAINER_DOACTION_OFFSET UNITYSDK_OFFSET(0x1AB8E530)
#define MIHOYO_SDK_PLUGINUI_MIHOYOSDKUICONTAINER_DOLISTITEMACTION_1_OFFSET UNITYSDK_OFFSET(0x1AB9E1D0)
#define MIHOYO_SDK_PLUGINUI_MIHOYOSDKUICONTAINER_DOLISTITEMACTION_OFFSET UNITYSDK_OFFSET(0x1AB9E1B0)
#define MIHOYO_SDK_PLUGINUI_MIHOYOSDKUICONTAINER_DOLISTITEMDELETEACTION_OFFSET UNITYSDK_OFFSET(0x1AB9E520)
#define MIHOYO_SDK_PLUGINUI_MIHOYOSDKUICONTAINER_GETELEMENTACTION_OFFSET UNITYSDK_OFFSET(0x1AB9E160)
#define MIHOYO_SDK_PLUGINUI_MIHOYOSDKUICONTAINER_GETELEMENTHINTTEXT_OFFSET UNITYSDK_OFFSET(0x1AB9E180)
#define MIHOYO_SDK_PLUGINUI_MIHOYOSDKUICONTAINER_GETELEMENTTEXT_OFFSET UNITYSDK_OFFSET(0x1AB8E490)
#define MIHOYO_SDK_PLUGINUI_MIHOYOSDKUICONTAINER_GETELEMENT_OFFSET UNITYSDK_OFFSET(0x1AB8D490)
#define MIHOYO_SDK_PLUGINUI_MIHOYOSDKUICONTAINER_GETLISTELEMENTITEMS_OFFSET UNITYSDK_OFFSET(0x1AB9E550)
#define MIHOYO_SDK_PLUGINUI_MIHOYOSDKUICONTAINER_GETLISTELEMENT_OFFSET UNITYSDK_OFFSET(0x1AB9E5D0)
#define MIHOYO_SDK_PLUGINUI_MIHOYOSDKUICONTAINER_GETLISTITEMATTRIBUTE_1_OFFSET UNITYSDK_OFFSET(0x1AB9E9F0)
#define MIHOYO_SDK_PLUGINUI_MIHOYOSDKUICONTAINER_GETLISTITEMATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1AB9E840)
#define MIHOYO_SDK_PLUGINUI_MIHOYOSDKUICONTAINER_ISELEMENTCHECKED_OFFSET UNITYSDK_OFFSET(0x1AB90180)
#define MIHOYO_SDK_PLUGINUI_MIHOYOSDKUICONTAINER_ISELEMENTVISIBLE_OFFSET UNITYSDK_OFFSET(0x1AB91DE0)
#define MIHOYO_SDK_PLUGINUI_MIHOYOSDKUICONTAINER_ONELEMENTSTATUSCHANGED_OFFSET UNITYSDK_OFFSET(0x1AB9DAB0)
#define MIHOYO_SDK_PLUGINUI_MIHOYOSDKUICONTAINER_ONHIDEELEMENT_OFFSET UNITYSDK_OFFSET(0x1AB9DAA0)
#define MIHOYO_SDK_PLUGINUI_MIHOYOSDKUICONTAINER_ONRECEIVEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1AB8E8D0)
#define MIHOYO_SDK_PLUGINUI_MIHOYOSDKUICONTAINER_ONSHOWELEMENT_OFFSET UNITYSDK_OFFSET(0x1AB9DA90)
#define MIHOYO_SDK_PLUGINUI_MIHOYOSDKUICONTAINER_PARSEELEMENTS_OFFSET UNITYSDK_OFFSET(0x1AB9EC70)
#define MIHOYO_SDK_PLUGINUI_MIHOYOSDKUICONTAINER_REGISTERUPDATETEXTACTION_OFFSET UNITYSDK_OFFSET(0x1AB90D70)
#define MIHOYO_SDK_PLUGINUI_MIHOYOSDKUICONTAINER_REMOVELISTITEM_OFFSET UNITYSDK_OFFSET(0x1AB9F330)
#define MIHOYO_SDK_PLUGINUI_MIHOYOSDKUICONTAINER_SENDNOTIFYMESSAGE_OFFSET UNITYSDK_OFFSET(0x1AB9E0D0)
#define MIHOYO_SDK_PLUGINUI_MIHOYOSDKUICONTAINER_SHOW_OFFSET UNITYSDK_OFFSET(0x1AB9DAC0)
#define MIHOYO_SDK_PLUGINUI_MIHOYOSDKUICONTAINER_TRYREMOVELISTITEM_OFFSET UNITYSDK_OFFSET(0x1AB9EFC0)
#define MIHOYO_SDK_PLUGINUI_MIHOYOSDKUICONTAINER_UPDATEELEMENTS_OFFSET UNITYSDK_OFFSET(0x1AB9DDC0)
#define MIHOYO_SDK_PLUGINUI_MIHOYOSDKUICONTAINER_UPDATEELEMENTTEXT_OFFSET UNITYSDK_OFFSET(0x1AB9DF70)
#define MIHOYO_SDK_PLUGINUI_MIHOYOSDKUICONTAINER_UPDATEELEMENTVISIBLEATTR_OFFSET UNITYSDK_OFFSET(0x1AB9D9A0)
#define MIHOYO_SDK_PLUGINUI_MIHOYOSDKUICONTAINER__CTOR_OFFSET UNITYSDK_OFFSET(0x1AB8D660)

namespace MiHoYo::SDK::PluginUI
{
	inline static constexpr unsigned int MiHoYoSDKUIContainer_TypeDefinitionIndex = 45104;

	class MiHoYoSDKUIContainer : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MiHoYo::SDK::PluginUI::MiHoYoSDKUIElement*>* m_dicUIElements; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_MIHOYOSDKUICONTAINER__CTOR_OFFSET))(this);
		}

		::System::Void OnReceiveMessage(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_MIHOYOSDKUICONTAINER_ONRECEIVEMESSAGE_OFFSET))(this, a1, a2);
		}

		::System::Void OnShowElement(::System::Collections::Generic::List_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_MIHOYOSDKUICONTAINER_ONSHOWELEMENT_OFFSET))(this, a1);
		}

		::System::Void OnHideElement(::System::Collections::Generic::List_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_MIHOYOSDKUICONTAINER_ONHIDEELEMENT_OFFSET))(this, a1);
		}

		::System::Void OnElementStatusChanged(::System::String* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_MIHOYOSDKUICONTAINER_ONELEMENTSTATUSCHANGED_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Show(::System::Collections::Generic::Dictionary_2<::System::String*, ::MiHoYo::SDK::PluginUI::MiHoYoSDKUIElement*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::MiHoYo::SDK::PluginUI::MiHoYoSDKUIElement*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_MIHOYOSDKUICONTAINER_SHOW_OFFSET))(this, a1);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_MIHOYOSDKUICONTAINER_CLOSE_OFFSET))(this);
		}

		::System::Void UpdateElements(::System::Collections::Generic::Dictionary_2<::System::String*, ::MiHoYo::SDK::PluginUI::MiHoYoSDKUIElement*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::MiHoYo::SDK::PluginUI::MiHoYoSDKUIElement*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_MIHOYOSDKUICONTAINER_UPDATEELEMENTS_OFFSET))(this, a1);
		}

		::System::Void SendNotifyMessage(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_MIHOYOSDKUICONTAINER_SENDNOTIFYMESSAGE_OFFSET))(this, a1, a2);
		}

		::System::Void DoAction(::System::String* a1, ::System::String* a2, ::System::Action_1<::System::String*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_MIHOYOSDKUICONTAINER_DOACTION_OFFSET))(this, a1, a2, a3);
		}

		::MiHoYo::SDK::PluginUI::MiHoYoSDKUIElement* GetElement(::System::String* a1)
		{
			return ((::MiHoYo::SDK::PluginUI::MiHoYoSDKUIElement*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_MIHOYOSDKUICONTAINER_GETELEMENT_OFFSET))(this, a1);
		}

		::System::Boolean IsElementVisible(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_MIHOYOSDKUICONTAINER_ISELEMENTVISIBLE_OFFSET))(this, a1);
		}

		::System::Boolean IsElementChecked(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_MIHOYOSDKUICONTAINER_ISELEMENTCHECKED_OFFSET))(this, a1);
		}

		::System::String* GetElementText(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_MIHOYOSDKUICONTAINER_GETELEMENTTEXT_OFFSET))(this, a1);
		}

		::System::String* GetElementHintText(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_MIHOYOSDKUICONTAINER_GETELEMENTHINTTEXT_OFFSET))(this, a1);
		}

		::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>* GetElementAction(::System::String* a1)
		{
			return ((::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_MIHOYOSDKUICONTAINER_GETELEMENTACTION_OFFSET))(this, a1);
		}

		::System::Void DoListItemAction(::System::String* a1, ::System::Int32 a2, ::System::String* a3, ::System::Action_1<::System::String*>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_MIHOYOSDKUICONTAINER_DOLISTITEMACTION_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void DoListItemDeleteAction(::System::String* a1, ::System::Int32 a2, ::System::String* a3, ::System::Action_1<::System::String*>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_MIHOYOSDKUICONTAINER_DOLISTITEMDELETEACTION_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void DoListItemAction_1(::System::String* a1, ::System::Int32 a2, ::System::String* a3, ::System::Boolean a4, ::System::Action_1<::System::String*>* a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::String*, ::System::Boolean, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_MIHOYOSDKUICONTAINER_DOLISTITEMACTION_1_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::MiHoYo::SDK::PluginUI::MiHoYoSDKUIListElement* GetListElement(::System::String* a1)
		{
			return ((::MiHoYo::SDK::PluginUI::MiHoYoSDKUIListElement*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_MIHOYOSDKUICONTAINER_GETLISTELEMENT_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::MiHoYo::SDK::PluginUI::MiHoYoSDKUIListItem*>* GetListElementItems(::System::String* a1)
		{
			return ((::System::Collections::Generic::List_1<::MiHoYo::SDK::PluginUI::MiHoYoSDKUIListItem*>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_MIHOYOSDKUICONTAINER_GETLISTELEMENTITEMS_OFFSET))(this, a1);
		}

		::System::String* GetListItemAttribute(::MiHoYo::SDK::PluginUI::MiHoYoSDKUIListItem* a1, ::System::String* a2)
		{
			return ((::System::String*(*)(::PVOID, ::MiHoYo::SDK::PluginUI::MiHoYoSDKUIListItem*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_MIHOYOSDKUICONTAINER_GETLISTITEMATTRIBUTE_OFFSET))(this, a1, a2);
		}

		::System::String* GetListItemAttribute_1(::System::String* a1, ::System::Int32 a2, ::System::String* a3)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_MIHOYOSDKUICONTAINER_GETLISTITEMATTRIBUTE_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void RegisterUpdateTextAction(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_MIHOYOSDKUICONTAINER_REGISTERUPDATETEXTACTION_OFFSET))(this, a1, a2);
		}

		::System::Void UpdateElementText(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_MIHOYOSDKUICONTAINER_UPDATEELEMENTTEXT_OFFSET))(this, a1, a2);
		}

		::System::Void ClearElements()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_MIHOYOSDKUICONTAINER_CLEARELEMENTS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::String*>* ParseElements(::System::String* a1)
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_MIHOYOSDKUICONTAINER_PARSEELEMENTS_OFFSET))(this, a1);
		}

		::System::Void UpdateElementVisibleAttr(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_MIHOYOSDKUICONTAINER_UPDATEELEMENTVISIBLEATTR_OFFSET))(this, a1, a2);
		}

		::System::String* AppendListItemIndexParam(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_MIHOYOSDKUICONTAINER_APPENDLISTITEMINDEXPARAM_OFFSET))(this, a1, a2);
		}

		::System::Void TryRemoveListItem(::System::String* a1, ::System::Int32 a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_MIHOYOSDKUICONTAINER_TRYREMOVELISTITEM_OFFSET))(this, a1, a2, a3);
		}

		::System::Void RemoveListItem(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_MIHOYOSDKUICONTAINER_REMOVELISTITEM_OFFSET))(this, a1, a2);
		}
	};
}
