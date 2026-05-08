#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PluginUI/MiHoYoSDKUIContainer.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLIST_DOCLOSE_OFFSET UNITYSDK_OFFSET(0x19FB6300)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLIST_DOSHOW_OFFSET UNITYSDK_OFFSET(0x19FB5C20)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLIST_INSTANCE_OFFSET UNITYSDK_OFFSET(0x19FB5A20)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLIST_ONCLOSE_OFFSET UNITYSDK_OFFSET(0x19FB6210)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLIST_ONCOLLAPSELIST_OFFSET UNITYSDK_OFFSET(0x19FB6820)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLIST_ONHIDEELEMENT_OFFSET UNITYSDK_OFFSET(0x19FB6B50)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLIST_ONNOTICEEXPANDDROPDOWN_OFFSET UNITYSDK_OFFSET(0x19FB6790)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLIST_ONSHOWELEMENT_OFFSET UNITYSDK_OFFSET(0x19FB68B0)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLIST_ONSHOW_OFFSET UNITYSDK_OFFSET(0x19FB5BB0)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLIST_REGISTERDELEGATE_OFFSET UNITYSDK_OFFSET(0x19FB6380)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLIST_SHOWELEMENT_OFFSET UNITYSDK_OFFSET(0x19FB68C0)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLIST_UNREGISTERDELEGATE_OFFSET UNITYSDK_OFFSET(0x19FB6620)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x19FB5B20)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLIST__REGISTERDELEGATE_B__7_0_OFFSET UNITYSDK_OFFSET(0x19FB6B60)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLIST__REGISTERDELEGATE_B__7_1_OFFSET UNITYSDK_OFFSET(0x19FB6BA0)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLIST__REGISTERDELEGATE_B__7_2_OFFSET UNITYSDK_OFFSET(0x19FB6BE0)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLIST__REGISTERDELEGATE_B__7_3_OFFSET UNITYSDK_OFFSET(0x19FB6C20)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLIST__REGISTERDELEGATE_B__7_4_OFFSET UNITYSDK_OFFSET(0x19FB6C80)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLIST__REGISTERDELEGATE_B__7_5_OFFSET UNITYSDK_OFFSET(0x19FB6D30)

namespace MiHoYo::SDK::PluginUI
{
	inline static constexpr unsigned int HoYoSDKAccountList_TypeDefinitionIndex = 35504;

	class HoYoSDKAccountList : public ::MiHoYo::SDK::PluginUI::MiHoYoSDKUIContainer
	{
	public:
		static ::MiHoYo::SDK::PluginUI::HoYoSDKAccountList** StaticGet__instance()
		{
			return (::MiHoYo::SDK::PluginUI::HoYoSDKAccountList**)Il2CppClass::FromTypeDefinitionIndex(HoYoSDKAccountList_TypeDefinitionIndex)->GetStaticField(0x26500);
		}
		::System::Boolean m_bIsIgonreFoldAndUnfoldEvent; // 0x18
		::System::Boolean m_bIsAccountListExpand; // 0x19

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLIST__CTOR_OFFSET))(this);
		}

		static ::MiHoYo::SDK::PluginUI::HoYoSDKAccountList* Instance()
		{
			return ((::MiHoYo::SDK::PluginUI::HoYoSDKAccountList*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLIST_INSTANCE_OFFSET))();
		}

		::System::Void OnShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLIST_ONSHOW_OFFSET))(this);
		}

		::System::Void OnClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLIST_ONCLOSE_OFFSET))(this);
		}

		::System::Void DoShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLIST_DOSHOW_OFFSET))(this);
		}

		::System::Void RegisterDelegate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLIST_REGISTERDELEGATE_OFFSET))(this);
		}

		::System::Void UnRegisterDelegate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLIST_UNREGISTERDELEGATE_OFFSET))(this);
		}

		::System::Void DoClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLIST_DOCLOSE_OFFSET))(this);
		}

		::System::Void OnNoticeExpandDropdown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLIST_ONNOTICEEXPANDDROPDOWN_OFFSET))(this);
		}

		::System::Void OnCollapseList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLIST_ONCOLLAPSELIST_OFFSET))(this);
		}

		::System::Void OnShowElement(::System::Collections::Generic::List_1<::System::String*>* lstElementIds)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLIST_ONSHOWELEMENT_OFFSET))(this, lstElementIds);
		}

		::System::Void OnHideElement(::System::Collections::Generic::List_1<::System::String*>* lstElementIds)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLIST_ONHIDEELEMENT_OFFSET))(this, lstElementIds);
		}

		::System::Void ShowElement(::System::Collections::Generic::List_1<::System::String*>* lstElementIds, ::System::Boolean bIsVisible)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLIST_SHOWELEMENT_OFFSET))(this, lstElementIds, bIsVisible);
		}

		::System::Void _RegisterDelegate_b__7_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLIST__REGISTERDELEGATE_B__7_0_OFFSET))(this);
		}

		::System::Void _RegisterDelegate_b__7_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLIST__REGISTERDELEGATE_B__7_1_OFFSET))(this);
		}

		::System::Void _RegisterDelegate_b__7_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLIST__REGISTERDELEGATE_B__7_2_OFFSET))(this);
		}

		::System::Void _RegisterDelegate_b__7_3(::System::Int32 nItemIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLIST__REGISTERDELEGATE_B__7_3_OFFSET))(this, nItemIndex);
		}

		::System::Void _RegisterDelegate_b__7_4(::System::Int32 nItemIndex, ::System::Action_1<::System::Int32>* deleteCallback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLIST__REGISTERDELEGATE_B__7_4_OFFSET))(this, nItemIndex, deleteCallback);
		}

		::System::Void _RegisterDelegate_b__7_5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLIST__REGISTERDELEGATE_B__7_5_OFFSET))(this);
		}
	};
}
