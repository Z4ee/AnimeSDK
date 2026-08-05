#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_03024D6472FC8F3A.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/UnityEngine/Color.h"

class Class_1_48D56DACBE4271BC;
class Class_1_F0E4E2848B1D52CE;
class Class_2_0EA736F4D47F3203;
class Class_2_0EA736F4D47F3203_Class_2_2B5C4619E3EA513F;
class Class_2_0EA736F4D47F3203_Class_2_F359B61311A9C2EE;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class MonoGamepadNavigatableList; }
namespace MoleMole { class UIAutoBattleEquipIconWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UIABINLEVELSHOPWIDGETCONTROLLER_BINDDATA_OFFSET UNITYSDK_OFFSET(0x1B6D68F0)
#define MOLEMOLE_UIABINLEVELSHOPWIDGETCONTROLLER_CHECKVALID_OFFSET UNITYSDK_OFFSET(0x1B6D72E0)
#define MOLEMOLE_UIABINLEVELSHOPWIDGETCONTROLLER_GET_ACTIVATEDCAMPS_OFFSET UNITYSDK_OFFSET(0x1B6D67A0)
#define MOLEMOLE_UIABINLEVELSHOPWIDGETCONTROLLER_GET_SHOPMODULE_OFFSET UNITYSDK_OFFSET(0x1B6D66F0)
#define MOLEMOLE_UIABINLEVELSHOPWIDGETCONTROLLER_GET_SHOPNAVLIST_OFFSET UNITYSDK_OFFSET(0x1B6D6710)
#define MOLEMOLE_UIABINLEVELSHOPWIDGETCONTROLLER_ONCLICKLOCK_OFFSET UNITYSDK_OFFSET(0x1B6D7970)
#define MOLEMOLE_UIABINLEVELSHOPWIDGETCONTROLLER_ONCLICKREFRESH_OFFSET UNITYSDK_OFFSET(0x1B6D75E0)
#define MOLEMOLE_UIABINLEVELSHOPWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1B6D6430)
#define MOLEMOLE_UIABINLEVELSHOPWIDGETCONTROLLER_ONGAMEPADMODULESELECTINDEXFROMINPUT_OFFSET UNITYSDK_OFFSET(0x1B6D6560)
#define MOLEMOLE_UIABINLEVELSHOPWIDGETCONTROLLER_ONHIDE_OFFSET UNITYSDK_OFFSET(0x1B6D62C0)
#define MOLEMOLE_UIABINLEVELSHOPWIDGETCONTROLLER_ONITEMCLICK_OFFSET UNITYSDK_OFFSET(0x1B6D7D50)
#define MOLEMOLE_UIABINLEVELSHOPWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1B6D6120)
#define MOLEMOLE_UIABINLEVELSHOPWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1B6D64C0)
#define MOLEMOLE_UIABINLEVELSHOPWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1B6D5B80)
#define MOLEMOLE_UIABINLEVELSHOPWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1B6D60B0)
#define MOLEMOLE_UIABINLEVELSHOPWIDGETCONTROLLER_SETREFRESHBTNINTERACTABLE_OFFSET UNITYSDK_OFFSET(0x1B6D7DC0)
#define MOLEMOLE_UIABINLEVELSHOPWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B6D8160)
#define MOLEMOLE_UIABINLEVELSHOPWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1B6D8200)
#define MOLEMOLE_UIABINLEVELSHOPWIDGETCONTROLLER___BASE_ONGAMEPADMODULESELECTINDEXFROMINPUT_OFFSET UNITYSDK_OFFSET(0x1B6D8290)
#define MOLEMOLE_UIABINLEVELSHOPWIDGETCONTROLLER___BASE_ONHIDE_OFFSET UNITYSDK_OFFSET(0x1B6D8340)
#define MOLEMOLE_UIABINLEVELSHOPWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1B6D83D0)
#define MOLEMOLE_UIABINLEVELSHOPWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1B6D8470)
#define MOLEMOLE_UIABINLEVELSHOPWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1B6D8500)
#define MOLEMOLE_UIABINLEVELSHOPWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1B6D8590)

namespace MoleMole
{
	inline static constexpr unsigned int UIABInLevelShopWidgetController_TypeDefinitionIndex = 85632;

	class UIABInLevelShopWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_0EA736F4D47F3203* _view; // 0x2C0
		::Class_2_0EA736F4D47F3203_Class_2_F359B61311A9C2EE* _refreshView; // 0x2C8
		::Class_2_0EA736F4D47F3203_Class_2_2B5C4619E3EA513F* _refreshViewConsole; // 0x2D0
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
