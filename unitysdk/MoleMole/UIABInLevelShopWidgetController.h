#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_03024D6472FC8F3A.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/UnityEngine/Color.h"

class Class_1_48D56DACBE4271BC;
class Class_1_F0E4E2848B1D52CE;
class Class_2_A0FAD1BA1AF1830A;
class Class_2_A0FAD1BA1AF1830A_Class_2_DEF0CB5A049F1801;
class Class_2_A0FAD1BA1AF1830A_Class_2_DEF0CB5A049F1801_1;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class MonoGamepadNavigatableList; }
namespace MoleMole { class UIAutoBattleEquipIconWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UIABINLEVELSHOPWIDGETCONTROLLER_BINDDATA_OFFSET UNITYSDK_OFFSET(0x1919ED40)
#define MOLEMOLE_UIABINLEVELSHOPWIDGETCONTROLLER_CHECKVALID_OFFSET UNITYSDK_OFFSET(0x1919F730)
#define MOLEMOLE_UIABINLEVELSHOPWIDGETCONTROLLER_GET_ACTIVATEDCAMPS_OFFSET UNITYSDK_OFFSET(0x1919EBF0)
#define MOLEMOLE_UIABINLEVELSHOPWIDGETCONTROLLER_GET_SHOPMODULE_OFFSET UNITYSDK_OFFSET(0x1919EB40)
#define MOLEMOLE_UIABINLEVELSHOPWIDGETCONTROLLER_GET_SHOPNAVLIST_OFFSET UNITYSDK_OFFSET(0x1919EB60)
#define MOLEMOLE_UIABINLEVELSHOPWIDGETCONTROLLER_ONCLICKLOCK_OFFSET UNITYSDK_OFFSET(0x1919FDC0)
#define MOLEMOLE_UIABINLEVELSHOPWIDGETCONTROLLER_ONCLICKREFRESH_OFFSET UNITYSDK_OFFSET(0x1919FA30)
#define MOLEMOLE_UIABINLEVELSHOPWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1919E880)
#define MOLEMOLE_UIABINLEVELSHOPWIDGETCONTROLLER_ONGAMEPADMODULESELECTINDEXFROMINPUT_OFFSET UNITYSDK_OFFSET(0x1919E9B0)
#define MOLEMOLE_UIABINLEVELSHOPWIDGETCONTROLLER_ONHIDE_OFFSET UNITYSDK_OFFSET(0x1919E710)
#define MOLEMOLE_UIABINLEVELSHOPWIDGETCONTROLLER_ONITEMCLICK_OFFSET UNITYSDK_OFFSET(0x191A01A0)
#define MOLEMOLE_UIABINLEVELSHOPWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1919E570)
#define MOLEMOLE_UIABINLEVELSHOPWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1919E910)
#define MOLEMOLE_UIABINLEVELSHOPWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1919DFD0)
#define MOLEMOLE_UIABINLEVELSHOPWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1919E500)
#define MOLEMOLE_UIABINLEVELSHOPWIDGETCONTROLLER_SETREFRESHBTNINTERACTABLE_OFFSET UNITYSDK_OFFSET(0x191A0210)
#define MOLEMOLE_UIABINLEVELSHOPWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x191A05A0)
#define MOLEMOLE_UIABINLEVELSHOPWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x191A0640)
#define MOLEMOLE_UIABINLEVELSHOPWIDGETCONTROLLER___BASE_ONGAMEPADMODULESELECTINDEXFROMINPUT_OFFSET UNITYSDK_OFFSET(0x191A06D0)
#define MOLEMOLE_UIABINLEVELSHOPWIDGETCONTROLLER___BASE_ONHIDE_OFFSET UNITYSDK_OFFSET(0x191A0780)
#define MOLEMOLE_UIABINLEVELSHOPWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x191A0810)
#define MOLEMOLE_UIABINLEVELSHOPWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x191A08B0)
#define MOLEMOLE_UIABINLEVELSHOPWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x191A0940)
#define MOLEMOLE_UIABINLEVELSHOPWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x191A09D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIABInLevelShopWidgetController_TypeDefinitionIndex = 66643;

	class UIABInLevelShopWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_A0FAD1BA1AF1830A* _view; // 0x2C0
		::Class_2_A0FAD1BA1AF1830A_Class_2_DEF0CB5A049F1801* _refreshView; // 0x2C8
		::Class_2_A0FAD1BA1AF1830A_Class_2_DEF0CB5A049F1801_1* _refreshViewConsole; // 0x2D0
		::Class_1_48D56DACBE4271BC* _syncHelper; // 0x2D8
		::Class_1_48D56DACBE4271BC* _syncHelper_rank; // 0x2E0
		::Class_1_F0E4E2848B1D52CE* _viewModel; // 0x2E8
		::System::Boolean _isInNewbie1; // 0x2F0
		::UnityEngine::Color _refreshNormal; // 0x2F4
		::MoleMole::UIAutoBattleEquipIconWidgetController* _freeEquipIcon; // 0x308
		::System::Collections::Generic::HashSet_1<::System::Int32>* SuggestIds; // 0x310

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELSHOPWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELSHOPWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELSHOPWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELSHOPWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELSHOPWIDGETCONTROLLER_ONHIDE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELSHOPWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELSHOPWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnGamepadModuleSelectIndexFromInput(::MoleMole::MonoGamepadModule* gamepadModule, ::System::Int32 index, ::UnityEngine::Transform* trans, ::Enum_3_03024D6472FC8F3A result)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::UnityEngine::Transform*, ::Enum_3_03024D6472FC8F3A))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELSHOPWIDGETCONTROLLER_ONGAMEPADMODULESELECTINDEXFROMINPUT_OFFSET))(this, gamepadModule, index, trans, result);
		}

		::MoleMole::MonoGamepadModule* get_ShopModule()
		{
			return ((::MoleMole::MonoGamepadModule*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELSHOPWIDGETCONTROLLER_GET_SHOPMODULE_OFFSET))(this);
		}

		::MoleMole::MonoGamepadNavigatableList* get_ShopNavList()
		{
			return ((::MoleMole::MonoGamepadNavigatableList*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELSHOPWIDGETCONTROLLER_GET_SHOPNAVLIST_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::System::Int32>* get_ActivatedCamps()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELSHOPWIDGETCONTROLLER_GET_ACTIVATEDCAMPS_OFFSET))(this);
		}

		::System::Void BindData(::Class_1_F0E4E2848B1D52CE* viewModel)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F0E4E2848B1D52CE*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELSHOPWIDGETCONTROLLER_BINDDATA_OFFSET))(this, viewModel);
		}

		::System::Void CheckValid(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELSHOPWIDGETCONTROLLER_CHECKVALID_OFFSET))(this, index);
		}

		::System::Void OnClickRefresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELSHOPWIDGETCONTROLLER_ONCLICKREFRESH_OFFSET))(this);
		}

		::System::Void OnClickLock()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELSHOPWIDGETCONTROLLER_ONCLICKLOCK_OFFSET))(this);
		}

		::System::Void OnItemClick(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELSHOPWIDGETCONTROLLER_ONITEMCLICK_OFFSET))(this, index);
		}

		::System::Void SetRefreshBtnInteractable(::System::Boolean interactable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELSHOPWIDGETCONTROLLER_SETREFRESHBTNINTERACTABLE_OFFSET))(this, interactable);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELSHOPWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnGamepadModuleSelectIndexFromInput(::MoleMole::MonoGamepadModule* P0, ::System::Int32 P1, ::UnityEngine::Transform* P2, ::Enum_3_03024D6472FC8F3A P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::UnityEngine::Transform*, ::Enum_3_03024D6472FC8F3A))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELSHOPWIDGETCONTROLLER___BASE_ONGAMEPADMODULESELECTINDEXFROMINPUT_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void __base_OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELSHOPWIDGETCONTROLLER___BASE_ONHIDE_OFFSET))(this);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELSHOPWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELSHOPWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELSHOPWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELSHOPWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
