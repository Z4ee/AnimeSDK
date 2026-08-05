#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_03024D6472FC8F3A.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_1_1685EC66FBD28897;
class Class_2_7B42B6FF00235964_1;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIZenkovItemIconBtnWidgetController; }
namespace MoleMole { class UIZenkovWishListkRowWidgetController_ItemData; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UIZENKOVWISHLISTKROWWIDGETCONTROLLER_FINDREWARDICONCONTROLLERUNDERTRANSFORM_OFFSET UNITYSDK_OFFSET(0x116609B0)
#define MOLEMOLE_UIZENKOVWISHLISTKROWWIDGETCONTROLLER_GET_ISINLEVEL_OFFSET UNITYSDK_OFFSET(0x1165F060)
#define MOLEMOLE_UIZENKOVWISHLISTKROWWIDGETCONTROLLER_ONCLICKGOBTN_OFFSET UNITYSDK_OFFSET(0x11660190)
#define MOLEMOLE_UIZENKOVWISHLISTKROWWIDGETCONTROLLER_ONCLICKITEM_OFFSET UNITYSDK_OFFSET(0x11660150)
#define MOLEMOLE_UIZENKOVWISHLISTKROWWIDGETCONTROLLER_ONCLICKREMOVEWISHLIST_OFFSET UNITYSDK_OFFSET(0x11660250)
#define MOLEMOLE_UIZENKOVWISHLISTKROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1165F3E0)
#define MOLEMOLE_UIZENKOVWISHLISTKROWWIDGETCONTROLLER_ONGAMEPADMODULESELECTINDEXFROMINPUT_OFFSET UNITYSDK_OFFSET(0x116603B0)
#define MOLEMOLE_UIZENKOVWISHLISTKROWWIDGETCONTROLLER_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0x116600C0)
#define MOLEMOLE_UIZENKOVWISHLISTKROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x1165F530)
#define MOLEMOLE_UIZENKOVWISHLISTKROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1165F470)
#define MOLEMOLE_UIZENKOVWISHLISTKROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1165F150)
#define MOLEMOLE_UIZENKOVWISHLISTKROWWIDGETCONTROLLER_REFRESHREWARDITEMS_OFFSET UNITYSDK_OFFSET(0x1165FAA0)
#define MOLEMOLE_UIZENKOVWISHLISTKROWWIDGETCONTROLLER_SHOWASEMPTY_OFFSET UNITYSDK_OFFSET(0x1165FA30)
#define MOLEMOLE_UIZENKOVWISHLISTKROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x11660F00)
#define MOLEMOLE_UIZENKOVWISHLISTKROWWIDGETCONTROLLER__ONCLICKGOBTN_B__15_0_OFFSET UNITYSDK_OFFSET(0x11660F90)
#define MOLEMOLE_UIZENKOVWISHLISTKROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x11661380)
#define MOLEMOLE_UIZENKOVWISHLISTKROWWIDGETCONTROLLER___BASE_ONGAMEPADMODULESELECTINDEXFROMINPUT_OFFSET UNITYSDK_OFFSET(0x11661410)
#define MOLEMOLE_UIZENKOVWISHLISTKROWWIDGETCONTROLLER___BASE_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0x116614C0)
#define MOLEMOLE_UIZENKOVWISHLISTKROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x11661550)
#define MOLEMOLE_UIZENKOVWISHLISTKROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x116615F0)
#define MOLEMOLE_UIZENKOVWISHLISTKROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x11661680)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovWishListkRowWidgetController_TypeDefinitionIndex = 78864;

	class UIZenkovWishListkRowWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_7B42B6FF00235964_1* _view; // 0x2F0
		::MoleMole::UIZenkovWishListkRowWidgetController_ItemData* _currentData; // 0x2F8
		::System::Collections::Generic::List_1<::MoleMole::UIZenkovItemIconBtnWidgetController*>* _rewardItems; // 0x300
		::UnityEngine::GameObject* _lastTipOpenedRewardItemGo; // 0x308

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWISHLISTKROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsInLevel()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWISHLISTKROWWIDGETCONTROLLER_GET_ISINLEVEL_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWISHLISTKROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWISHLISTKROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWISHLISTKROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWISHLISTKROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void OnItemSelect(::System::Boolean isSelect)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWISHLISTKROWWIDGETCONTROLLER_ONITEMSELECT_OFFSET))(this, isSelect);
		}

		::System::Void ShowAsEmpty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWISHLISTKROWWIDGETCONTROLLER_SHOWASEMPTY_OFFSET))(this);
		}

		::System::Void OnClickItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWISHLISTKROWWIDGETCONTROLLER_ONCLICKITEM_OFFSET))(this);
		}

		::System::Void OnClickGoBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWISHLISTKROWWIDGETCONTROLLER_ONCLICKGOBTN_OFFSET))(this);
		}

		::System::Void OnClickRemoveWishList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWISHLISTKROWWIDGETCONTROLLER_ONCLICKREMOVEWISHLIST_OFFSET))(this);
		}

		::System::Void RefreshRewardItems(::System::Collections::Generic::List_1<::Class_1_1685EC66FBD28897*>* wishList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_1685EC66FBD28897*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWISHLISTKROWWIDGETCONTROLLER_REFRESHREWARDITEMS_OFFSET))(this, wishList);
		}

		::System::Void OnGamepadModuleSelectIndexFromInput(::MoleMole::MonoGamepadModule* gamepadModule, ::System::Int32 index, ::UnityEngine::Transform* trans, ::Enum_3_03024D6472FC8F3A result)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::UnityEngine::Transform*, ::Enum_3_03024D6472FC8F3A))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWISHLISTKROWWIDGETCONTROLLER_ONGAMEPADMODULESELECTINDEXFROMINPUT_OFFSET))(this, gamepadModule, index, trans, result);
		}

		::MoleMole::UIZenkovItemIconBtnWidgetController* FindRewardIconControllerUnderTransform(::UnityEngine::Transform* trans)
		{
			return ((::MoleMole::UIZenkovItemIconBtnWidgetController*(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWISHLISTKROWWIDGETCONTROLLER_FINDREWARDICONCONTROLLERUNDERTRANSFORM_OFFSET))(this, trans);
		}

		::System::Void _OnClickGoBtn_b__15_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWISHLISTKROWWIDGETCONTROLLER__ONCLICKGOBTN_B__15_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWISHLISTKROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnGamepadModuleSelectIndexFromInput(::MoleMole::MonoGamepadModule* P0, ::System::Int32 P1, ::UnityEngine::Transform* P2, ::Enum_3_03024D6472FC8F3A P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::UnityEngine::Transform*, ::Enum_3_03024D6472FC8F3A))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWISHLISTKROWWIDGETCONTROLLER___BASE_ONGAMEPADMODULESELECTINDEXFROMINPUT_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void __base_OnItemSelect(::System::Boolean P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWISHLISTKROWWIDGETCONTROLLER___BASE_ONITEMSELECT_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWISHLISTKROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWISHLISTKROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWISHLISTKROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
