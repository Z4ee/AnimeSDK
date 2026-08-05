#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_2_60638234271CCDB8_25;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIRABPoolAttributeRowWidgetController; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIRABGACHAITEMROWWIDGETCONTROLLER_BINDNOTIFICATION_OFFSET UNITYSDK_OFFSET(0x19896B80)
#define MOLEMOLE_UIRABGACHAITEMROWWIDGETCONTROLLER_GET_POOLID_OFFSET UNITYSDK_OFFSET(0x19895C40)
#define MOLEMOLE_UIRABGACHAITEMROWWIDGETCONTROLLER_INITHIGHCOSTBUDDYICONS_OFFSET UNITYSDK_OFFSET(0x19895E10)
#define MOLEMOLE_UIRABGACHAITEMROWWIDGETCONTROLLER_ONCLICKITEM_OFFSET UNITYSDK_OFFSET(0x19897590)
#define MOLEMOLE_UIRABGACHAITEMROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x19896EF0)
#define MOLEMOLE_UIRABGACHAITEMROWWIDGETCONTROLLER_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0x19897510)
#define MOLEMOLE_UIRABGACHAITEMROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x19896460)
#define MOLEMOLE_UIRABGACHAITEMROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x198975E0)
#define MOLEMOLE_UIRABGACHAITEMROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x19895C60)
#define MOLEMOLE_UIRABGACHAITEMROWWIDGETCONTROLLER_REFRESHHIGHCOSTICON_OFFSET UNITYSDK_OFFSET(0x19896F80)
#define MOLEMOLE_UIRABGACHAITEMROWWIDGETCONTROLLER_REFRESHTRACKQUESTBYCURRENTGUIDE_OFFSET UNITYSDK_OFFSET(0x19896CC0)
#define MOLEMOLE_UIRABGACHAITEMROWWIDGETCONTROLLER_REFRESHTRACKQUEST_OFFSET UNITYSDK_OFFSET(0x19897480)
#define MOLEMOLE_UIRABGACHAITEMROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x19896540)
#define MOLEMOLE_UIRABGACHAITEMROWWIDGETCONTROLLER_SET_POOLID_OFFSET UNITYSDK_OFFSET(0x19895C50)
#define MOLEMOLE_UIRABGACHAITEMROWWIDGETCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x198976F0)
#define MOLEMOLE_UIRABGACHAITEMROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x19897660)
#define MOLEMOLE_UIRABGACHAITEMROWWIDGETCONTROLLER___BASE_ONCLICKITEM_OFFSET UNITYSDK_OFFSET(0x198978A0)
#define MOLEMOLE_UIRABGACHAITEMROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x198978B0)
#define MOLEMOLE_UIRABGACHAITEMROWWIDGETCONTROLLER___BASE_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0x19897940)
#define MOLEMOLE_UIRABGACHAITEMROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x198979D0)
#define MOLEMOLE_UIRABGACHAITEMROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x19897A70)
#define MOLEMOLE_UIRABGACHAITEMROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x19897B00)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABGachaItemRowWidgetController_TypeDefinitionIndex = 66511;

	class UIRABGachaItemRowWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>** StaticGet_SelectOutlineColor()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(UIRABGachaItemRowWidgetController_TypeDefinitionIndex)->GetStaticField(0x3A790);
		}
		// static const ::System::Int32 HighCostBuddyShowCount = 0x4; // 0x0
		::System::Int32 _PoolID_k__BackingField; // 0x2F0
		::Class_2_60638234271CCDB8_25* _view; // 0x2F8
		::System::Collections::Generic::List_1<::MoleMole::UIRABPoolAttributeRowWidgetController*>* highCostBuddyIconControllers; // 0x300

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABGACHAITEMROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABGACHAITEMROWWIDGETCONTROLLER__CCTOR_OFFSET))();
		}

		::System::Int32 get_PoolID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABGACHAITEMROWWIDGETCONTROLLER_GET_POOLID_OFFSET))(this);
		}

		::System::Void set_PoolID(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABGACHAITEMROWWIDGETCONTROLLER_SET_POOLID_OFFSET))(this, value);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABGACHAITEMROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABGACHAITEMROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void BindNotification()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABGACHAITEMROWWIDGETCONTROLLER_BINDNOTIFICATION_OFFSET))(this);
		}

		::System::Void InitHighCostBuddyIcons()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABGACHAITEMROWWIDGETCONTROLLER_INITHIGHCOSTBUDDYICONS_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABGACHAITEMROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABGACHAITEMROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this);
		}

		::System::Void RefreshHighCostIcon(::System::Collections::Generic::IReadOnlyList_1<::System::Int32>* highCostBaseIds)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABGACHAITEMROWWIDGETCONTROLLER_REFRESHHIGHCOSTICON_OFFSET))(this, highCostBaseIds);
		}

		::System::Void RefreshTrackQuest(::System::Boolean show)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABGACHAITEMROWWIDGETCONTROLLER_REFRESHTRACKQUEST_OFFSET))(this, show);
		}

		::System::Void RefreshTrackQuestByCurrentGuide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABGACHAITEMROWWIDGETCONTROLLER_REFRESHTRACKQUESTBYCURRENTGUIDE_OFFSET))(this);
		}

		::System::Void OnItemSelect(::System::Boolean isSelect)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABGACHAITEMROWWIDGETCONTROLLER_ONITEMSELECT_OFFSET))(this, isSelect);
		}

		::System::Void OnClickItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABGACHAITEMROWWIDGETCONTROLLER_ONCLICKITEM_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABGACHAITEMROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnClickItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABGACHAITEMROWWIDGETCONTROLLER___BASE_ONCLICKITEM_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABGACHAITEMROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnItemSelect(::System::Boolean P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABGACHAITEMROWWIDGETCONTROLLER___BASE_ONITEMSELECT_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABGACHAITEMROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABGACHAITEMROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABGACHAITEMROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
