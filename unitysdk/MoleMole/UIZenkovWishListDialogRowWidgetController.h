#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_03024D6472FC8F3A.h"
#include "unitysdk/Enum_3_96F6662CA3713095_17.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_1_1685EC66FBD28897;
class Class_2_16396D88BA38E0AB_5;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIZenkovItemIconBtnWidgetController; }
namespace MoleMole { class UIZenkovWishListDialogRowWidgetController_ItemData; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UIZENKOVWISHLISTDIALOGROWWIDGETCONTROLLER_ENSURESLOTS_OFFSET UNITYSDK_OFFSET(0x12E7F1C0)
#define MOLEMOLE_UIZENKOVWISHLISTDIALOGROWWIDGETCONTROLLER_GETSRCID_OFFSET UNITYSDK_OFFSET(0x12E7F110)
#define MOLEMOLE_UIZENKOVWISHLISTDIALOGROWWIDGETCONTROLLER_GETSRCTYPE_OFFSET UNITYSDK_OFFSET(0x12E7F0B0)
#define MOLEMOLE_UIZENKOVWISHLISTDIALOGROWWIDGETCONTROLLER_ONCLICKITEM_OFFSET UNITYSDK_OFFSET(0x12E7EF80)
#define MOLEMOLE_UIZENKOVWISHLISTDIALOGROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x12E7E630)
#define MOLEMOLE_UIZENKOVWISHLISTDIALOGROWWIDGETCONTROLLER_ONGAMEPADMODULESELECTINDEX_OFFSET UNITYSDK_OFFSET(0x12E7F030)
#define MOLEMOLE_UIZENKOVWISHLISTDIALOGROWWIDGETCONTROLLER_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0x12E7EFD0)
#define MOLEMOLE_UIZENKOVWISHLISTDIALOGROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x12E7E750)
#define MOLEMOLE_UIZENKOVWISHLISTDIALOGROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x12E7E6C0)
#define MOLEMOLE_UIZENKOVWISHLISTDIALOGROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x12E7E300)
#define MOLEMOLE_UIZENKOVWISHLISTDIALOGROWWIDGETCONTROLLER_REFRESHCONTENT_OFFSET UNITYSDK_OFFSET(0x12E7E9F0)
#define MOLEMOLE_UIZENKOVWISHLISTDIALOGROWWIDGETCONTROLLER_SETITEMCLICKACTION_OFFSET UNITYSDK_OFFSET(0x12E7F170)
#define MOLEMOLE_UIZENKOVWISHLISTDIALOGROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x12E7F4D0)
#define MOLEMOLE_UIZENKOVWISHLISTDIALOGROWWIDGETCONTROLLER___BASE_ONCLICKITEM_OFFSET UNITYSDK_OFFSET(0x12E7F560)
#define MOLEMOLE_UIZENKOVWISHLISTDIALOGROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x12E7F570)
#define MOLEMOLE_UIZENKOVWISHLISTDIALOGROWWIDGETCONTROLLER___BASE_ONGAMEPADMODULESELECTINDEX_OFFSET UNITYSDK_OFFSET(0x12E7F600)
#define MOLEMOLE_UIZENKOVWISHLISTDIALOGROWWIDGETCONTROLLER___BASE_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0x12E7F6B0)
#define MOLEMOLE_UIZENKOVWISHLISTDIALOGROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x12E7F740)
#define MOLEMOLE_UIZENKOVWISHLISTDIALOGROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x12E7F7E0)
#define MOLEMOLE_UIZENKOVWISHLISTDIALOGROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x12E7F870)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovWishListDialogRowWidgetController_TypeDefinitionIndex = 54722;

	class UIZenkovWishListDialogRowWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		// static const ::System::Int32 SlotCount = 0x4; // 0x0
		::Class_2_16396D88BA38E0AB_5* _view; // 0x2F0
		::MoleMole::UIZenkovWishListDialogRowWidgetController_ItemData* _currentData; // 0x2F8
		::UnityEngine::GameObject* _selectGo; // 0x300
		::System::Action_1<::System::Int32>* _onItemClick; // 0x308
		::System::Collections::Generic::List_1<::MoleMole::UIZenkovItemIconBtnWidgetController*>* _rewardItems; // 0x310

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWISHLISTDIALOGROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWISHLISTDIALOGROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWISHLISTDIALOGROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWISHLISTDIALOGROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWISHLISTDIALOGROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void OnClickItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWISHLISTDIALOGROWWIDGETCONTROLLER_ONCLICKITEM_OFFSET))(this);
		}

		::System::Void OnItemSelect(::System::Boolean isSelect)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWISHLISTDIALOGROWWIDGETCONTROLLER_ONITEMSELECT_OFFSET))(this, isSelect);
		}

		::System::Void OnGamepadModuleSelectIndex(::MoleMole::MonoGamepadModule* gamepadModule, ::System::Int32 index, ::UnityEngine::Transform* trans, ::Enum_3_03024D6472FC8F3A result)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::UnityEngine::Transform*, ::Enum_3_03024D6472FC8F3A))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWISHLISTDIALOGROWWIDGETCONTROLLER_ONGAMEPADMODULESELECTINDEX_OFFSET))(this, gamepadModule, index, trans, result);
		}

		::Enum_3_96F6662CA3713095_17 GetSrcType()
		{
			return ((::Enum_3_96F6662CA3713095_17(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWISHLISTDIALOGROWWIDGETCONTROLLER_GETSRCTYPE_OFFSET))(this);
		}

		::System::UInt32 GetSrcId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWISHLISTDIALOGROWWIDGETCONTROLLER_GETSRCID_OFFSET))(this);
		}

		::System::Void SetItemClickAction(::System::Action_1<::System::Int32>* onItemClick)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWISHLISTDIALOGROWWIDGETCONTROLLER_SETITEMCLICKACTION_OFFSET))(this, onItemClick);
		}

		::System::Void EnsureSlots()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWISHLISTDIALOGROWWIDGETCONTROLLER_ENSURESLOTS_OFFSET))(this);
		}

		::System::Void RefreshContent(::System::Collections::Generic::List_1<::Class_1_1685EC66FBD28897*>* wishList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_1685EC66FBD28897*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWISHLISTDIALOGROWWIDGETCONTROLLER_REFRESHCONTENT_OFFSET))(this, wishList);
		}

		::System::Void __base_OnClickItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWISHLISTDIALOGROWWIDGETCONTROLLER___BASE_ONCLICKITEM_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWISHLISTDIALOGROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnGamepadModuleSelectIndex(::MoleMole::MonoGamepadModule* P0, ::System::Int32 P1, ::UnityEngine::Transform* P2, ::Enum_3_03024D6472FC8F3A P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::UnityEngine::Transform*, ::Enum_3_03024D6472FC8F3A))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWISHLISTDIALOGROWWIDGETCONTROLLER___BASE_ONGAMEPADMODULESELECTINDEX_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void __base_OnItemSelect(::System::Boolean P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWISHLISTDIALOGROWWIDGETCONTROLLER___BASE_ONITEMSELECT_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWISHLISTDIALOGROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWISHLISTDIALOGROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWISHLISTDIALOGROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
