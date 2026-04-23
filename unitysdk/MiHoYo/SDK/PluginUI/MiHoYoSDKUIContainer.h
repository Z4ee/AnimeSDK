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

#define MIHOYO_SDK_PLUGINUI_MIHOYOSDKUICONTAINER_APPENDLISTITEMINDEXPARAM_OFFSET UNITYSDK_OFFSET(0x8DA5270)
#define MIHOYO_SDK_PLUGINUI_MIHOYOSDKUICONTAINER_CLEARELEMENTS_OFFSET UNITYSDK_OFFSET(0x8DA4A90)
#define MIHOYO_SDK_PLUGINUI_MIHOYOSDKUICONTAINER_CLOSE_OFFSET UNITYSDK_OFFSET(0x8DA4970)
#define MIHOYO_SDK_PLUGINUI_MIHOYOSDKUICONTAINER_DOACTION_OFFSET UNITYSDK_OFFSET(0x8D91DA0)
#define MIHOYO_SDK_PLUGINUI_MIHOYOSDKUICONTAINER_DOLISTITEMACTION_1_OFFSET UNITYSDK_OFFSET(0x8DA4F10)
#define MIHOYO_SDK_PLUGINUI_MIHOYOSDKUICONTAINER_DOLISTITEMACTION_OFFSET UNITYSDK_OFFSET(0x8D923D0)
#define MIHOYO_SDK_PLUGINUI_MIHOYOSDKUICONTAINER_DOLISTITEMDELETEACTION_OFFSET UNITYSDK_OFFSET(0x8D924B0)
#define MIHOYO_SDK_PLUGINUI_MIHOYOSDKUICONTAINER_GETELEMENTACTION_OFFSET UNITYSDK_OFFSET(0x8DA4EC0)
#define MIHOYO_SDK_PLUGINUI_MIHOYOSDKUICONTAINER_GETELEMENTHINTTEXT_OFFSET UNITYSDK_OFFSET(0x8DA4EE0)
#define MIHOYO_SDK_PLUGINUI_MIHOYOSDKUICONTAINER_GETELEMENTTEXT_OFFSET UNITYSDK_OFFSET(0x8D91770)
#define MIHOYO_SDK_PLUGINUI_MIHOYOSDKUICONTAINER_GETELEMENT_OFFSET UNITYSDK_OFFSET(0x8D94710)
#define MIHOYO_SDK_PLUGINUI_MIHOYOSDKUICONTAINER_GETLISTELEMENTITEMS_OFFSET UNITYSDK_OFFSET(0x8D91510)
#define MIHOYO_SDK_PLUGINUI_MIHOYOSDKUICONTAINER_GETLISTELEMENT_OFFSET UNITYSDK_OFFSET(0x8DA5200)
#define MIHOYO_SDK_PLUGINUI_MIHOYOSDKUICONTAINER_GETLISTITEMATTRIBUTE_1_OFFSET UNITYSDK_OFFSET(0x8DA5440)
#define MIHOYO_SDK_PLUGINUI_MIHOYOSDKUICONTAINER_GETLISTITEMATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x8D91580)
#define MIHOYO_SDK_PLUGINUI_MIHOYOSDKUICONTAINER_ISELEMENTCHECKED_OFFSET UNITYSDK_OFFSET(0x8D97620)
#define MIHOYO_SDK_PLUGINUI_MIHOYOSDKUICONTAINER_ISELEMENTVISIBLE_OFFSET UNITYSDK_OFFSET(0x8D93950)
#define MIHOYO_SDK_PLUGINUI_MIHOYOSDKUICONTAINER_ONELEMENTSTATUSCHANGED_OFFSET UNITYSDK_OFFSET(0x8DA4940)
#define MIHOYO_SDK_PLUGINUI_MIHOYOSDKUICONTAINER_ONHIDEELEMENT_OFFSET UNITYSDK_OFFSET(0x8DA4930)
#define MIHOYO_SDK_PLUGINUI_MIHOYOSDKUICONTAINER_ONRECEIVEMESSAGE_OFFSET UNITYSDK_OFFSET(0x8D96490)
#define MIHOYO_SDK_PLUGINUI_MIHOYOSDKUICONTAINER_ONSHOWELEMENT_OFFSET UNITYSDK_OFFSET(0x8DA4920)
#define MIHOYO_SDK_PLUGINUI_MIHOYOSDKUICONTAINER_PARSEELEMENTS_OFFSET UNITYSDK_OFFSET(0x8DA5600)
#define MIHOYO_SDK_PLUGINUI_MIHOYOSDKUICONTAINER_REGISTERUPDATETEXTACTION_OFFSET UNITYSDK_OFFSET(0x8D917A0)
#define MIHOYO_SDK_PLUGINUI_MIHOYOSDKUICONTAINER_REMOVELISTITEM_OFFSET UNITYSDK_OFFSET(0x8DA5A70)
#define MIHOYO_SDK_PLUGINUI_MIHOYOSDKUICONTAINER_SENDNOTIFYMESSAGE_OFFSET UNITYSDK_OFFSET(0x8DA4EB0)
#define MIHOYO_SDK_PLUGINUI_MIHOYOSDKUICONTAINER_SHOW_OFFSET UNITYSDK_OFFSET(0x8DA4950)
#define MIHOYO_SDK_PLUGINUI_MIHOYOSDKUICONTAINER_TRYREMOVELISTITEM_OFFSET UNITYSDK_OFFSET(0x8DA5890)
#define MIHOYO_SDK_PLUGINUI_MIHOYOSDKUICONTAINER_UPDATEELEMENTS_OFFSET UNITYSDK_OFFSET(0x8DA4BA0)
#define MIHOYO_SDK_PLUGINUI_MIHOYOSDKUICONTAINER_UPDATEELEMENTTEXT_OFFSET UNITYSDK_OFFSET(0x8DA4D60)
#define MIHOYO_SDK_PLUGINUI_MIHOYOSDKUICONTAINER_UPDATEELEMENTVISIBLEATTR_OFFSET UNITYSDK_OFFSET(0x8DA48D0)
#define MIHOYO_SDK_PLUGINUI_MIHOYOSDKUICONTAINER__CTOR_OFFSET UNITYSDK_OFFSET(0x8D92230)

namespace MiHoYo::SDK::PluginUI
{
	inline static constexpr unsigned int MiHoYoSDKUIContainer_TypeDefinitionIndex = 43431;

	class MiHoYoSDKUIContainer : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MiHoYo::SDK::PluginUI::MiHoYoSDKUIElement*>* m_dicUIElements; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_MIHOYOSDKUICONTAINER__CTOR_OFFSET))(this);
		}

		::System::Void OnReceiveMessage(::System::Int32 nMsgID, ::System::String* strParams)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_MIHOYOSDKUICONTAINER_ONRECEIVEMESSAGE_OFFSET))(this, nMsgID, strParams);
		}

		::System::Void OnShowElement(::System::Collections::Generic::List_1<::System::String*>* lstElementIds)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_MIHOYOSDKUICONTAINER_ONSHOWELEMENT_OFFSET))(this, lstElementIds);
		}

		::System::Void OnHideElement(::System::Collections::Generic::List_1<::System::String*>* lstElementIds)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_MIHOYOSDKUICONTAINER_ONHIDEELEMENT_OFFSET))(this, lstElementIds);
		}

		::System::Void OnElementStatusChanged(::System::String* strElementID, ::System::String* strStatusName, ::System::String* strStatusValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_MIHOYOSDKUICONTAINER_ONELEMENTSTATUSCHANGED_OFFSET))(this, strElementID, strStatusName, strStatusValue);
		}

		::System::Void Show(::System::Collections::Generic::Dictionary_2<::System::String*, ::MiHoYo::SDK::PluginUI::MiHoYoSDKUIElement*>* dicUIElements)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::MiHoYo::SDK::PluginUI::MiHoYoSDKUIElement*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_MIHOYOSDKUICONTAINER_SHOW_OFFSET))(this, dicUIElements);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_MIHOYOSDKUICONTAINER_CLOSE_OFFSET))(this);
		}

		::System::Void UpdateElements(::System::Collections::Generic::Dictionary_2<::System::String*, ::MiHoYo::SDK::PluginUI::MiHoYoSDKUIElement*>* dicUIElements)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::MiHoYo::SDK::PluginUI::MiHoYoSDKUIElement*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_MIHOYOSDKUICONTAINER_UPDATEELEMENTS_OFFSET))(this, dicUIElements);
		}

		::System::Void SendNotifyMessage(::System::Int32 nMsgID, ::System::String* strParams)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_MIHOYOSDKUICONTAINER_SENDNOTIFYMESSAGE_OFFSET))(this, nMsgID, strParams);
		}

		::System::Void DoAction(::System::String* strElementID, ::System::String* strActionArgs, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_MIHOYOSDKUICONTAINER_DOACTION_OFFSET))(this, strElementID, strActionArgs, callback);
		}

		::MiHoYo::SDK::PluginUI::MiHoYoSDKUIElement* GetElement(::System::String* strElementID)
		{
			return ((::MiHoYo::SDK::PluginUI::MiHoYoSDKUIElement*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_MIHOYOSDKUICONTAINER_GETELEMENT_OFFSET))(this, strElementID);
		}

		::System::Boolean IsElementVisible(::System::String* strElementID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_MIHOYOSDKUICONTAINER_ISELEMENTVISIBLE_OFFSET))(this, strElementID);
		}

		::System::Boolean IsElementChecked(::System::String* strElementID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_MIHOYOSDKUICONTAINER_ISELEMENTCHECKED_OFFSET))(this, strElementID);
		}

		::System::String* GetElementText(::System::String* strElementID)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_MIHOYOSDKUICONTAINER_GETELEMENTTEXT_OFFSET))(this, strElementID);
		}

		::System::String* GetElementHintText(::System::String* strElementID)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_MIHOYOSDKUICONTAINER_GETELEMENTHINTTEXT_OFFSET))(this, strElementID);
		}

		::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>* GetElementAction(::System::String* strElementID)
		{
			return ((::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_MIHOYOSDKUICONTAINER_GETELEMENTACTION_OFFSET))(this, strElementID);
		}

		::System::Void DoListItemAction(::System::String* strElementID, ::System::Int32 nItemIndex, ::System::String* strActionArgs, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_MIHOYOSDKUICONTAINER_DOLISTITEMACTION_OFFSET))(this, strElementID, nItemIndex, strActionArgs, callback);
		}

		::System::Void DoListItemDeleteAction(::System::String* strElementID, ::System::Int32 nItemIndex, ::System::String* strActionArgs, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_MIHOYOSDKUICONTAINER_DOLISTITEMDELETEACTION_OFFSET))(this, strElementID, nItemIndex, strActionArgs, callback);
		}

		::System::Void DoListItemAction_1(::System::String* strElementID, ::System::Int32 nItemIndex, ::System::String* strActionArgs, ::System::Boolean bIsDeleteAction, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::String*, ::System::Boolean, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_MIHOYOSDKUICONTAINER_DOLISTITEMACTION_1_OFFSET))(this, strElementID, nItemIndex, strActionArgs, bIsDeleteAction, callback);
		}

		::MiHoYo::SDK::PluginUI::MiHoYoSDKUIListElement* GetListElement(::System::String* strElementID)
		{
			return ((::MiHoYo::SDK::PluginUI::MiHoYoSDKUIListElement*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_MIHOYOSDKUICONTAINER_GETLISTELEMENT_OFFSET))(this, strElementID);
		}

		::System::Collections::Generic::List_1<::MiHoYo::SDK::PluginUI::MiHoYoSDKUIListItem*>* GetListElementItems(::System::String* strElementID)
		{
			return ((::System::Collections::Generic::List_1<::MiHoYo::SDK::PluginUI::MiHoYoSDKUIListItem*>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_MIHOYOSDKUICONTAINER_GETLISTELEMENTITEMS_OFFSET))(this, strElementID);
		}

		::System::String* GetListItemAttribute(::MiHoYo::SDK::PluginUI::MiHoYoSDKUIListItem* item, ::System::String* strAttributeName)
		{
			return ((::System::String*(*)(::PVOID, ::MiHoYo::SDK::PluginUI::MiHoYoSDKUIListItem*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_MIHOYOSDKUICONTAINER_GETLISTITEMATTRIBUTE_OFFSET))(this, item, strAttributeName);
		}

		::System::String* GetListItemAttribute_1(::System::String* strElementID, ::System::Int32 nItemIndex, ::System::String* strAttributeName)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_MIHOYOSDKUICONTAINER_GETLISTITEMATTRIBUTE_1_OFFSET))(this, strElementID, nItemIndex, strAttributeName);
		}

		::System::Void RegisterUpdateTextAction(::System::String* strElementID, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_MIHOYOSDKUICONTAINER_REGISTERUPDATETEXTACTION_OFFSET))(this, strElementID, callback);
		}

		::System::Void UpdateElementText(::System::String* strElementID, ::System::String* strText)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_MIHOYOSDKUICONTAINER_UPDATEELEMENTTEXT_OFFSET))(this, strElementID, strText);
		}

		::System::Void ClearElements()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_MIHOYOSDKUICONTAINER_CLEARELEMENTS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::String*>* ParseElements(::System::String* strElements)
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_MIHOYOSDKUICONTAINER_PARSEELEMENTS_OFFSET))(this, strElements);
		}

		::System::Void UpdateElementVisibleAttr(::System::String* strParams, ::System::Boolean bShow)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_MIHOYOSDKUICONTAINER_UPDATEELEMENTVISIBLEATTR_OFFSET))(this, strParams, bShow);
		}

		::System::String* AppendListItemIndexParam(::System::String* strActionArgs, ::System::Int32 nItemIndex)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_MIHOYOSDKUICONTAINER_APPENDLISTITEMINDEXPARAM_OFFSET))(this, strActionArgs, nItemIndex);
		}

		::System::Void TryRemoveListItem(::System::String* strElementID, ::System::Int32 nItemIndex, ::System::String* strResult)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_MIHOYOSDKUICONTAINER_TRYREMOVELISTITEM_OFFSET))(this, strElementID, nItemIndex, strResult);
		}

		::System::Void RemoveListItem(::System::String* strElementID, ::System::Int32 nIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_MIHOYOSDKUICONTAINER_REMOVELISTITEM_OFFSET))(this, strElementID, nIndex);
		}
	};
}
