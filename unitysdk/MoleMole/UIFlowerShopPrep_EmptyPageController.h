#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIMainCityStorePageController.h"

class Class_2_5E2FBACADDB625B7_7;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIFlowerShopPrepPageController; }
namespace MoleMole { class UIFlowerShopPrep_EmptyPageController_Context; }
namespace MoleMole { class UIFortuneFlowerShop3DModelController; }
namespace System { class Action; }
namespace System { class EventArgs; }

#define MOLEMOLE_UIFLOWERSHOPPREP_EMPTYPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x162AFA20)
#define MOLEMOLE_UIFLOWERSHOPPREP_EMPTYPAGECONTROLLER_ISQUESTINPROGRESS_OFFSET UNITYSDK_OFFSET(0x162B0C00)
#define MOLEMOLE_UIFLOWERSHOPPREP_EMPTYPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x162AFA30)
#define MOLEMOLE_UIFLOWERSHOPPREP_EMPTYPAGECONTROLLER_ONOPENMAINCITYSTOREPAGE_OFFSET UNITYSDK_OFFSET(0x162B0050)
#define MOLEMOLE_UIFLOWERSHOPPREP_EMPTYPAGECONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x162AFD60)
#define MOLEMOLE_UIFLOWERSHOPPREP_EMPTYPAGECONTROLLER_ONSTOREEXIT_OFFSET UNITYSDK_OFFSET(0x162B0E20)
#define MOLEMOLE_UIFLOWERSHOPPREP_EMPTYPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x162AFFE0)
#define MOLEMOLE_UIFLOWERSHOPPREP_EMPTYPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x162AFAC0)
#define MOLEMOLE_UIFLOWERSHOPPREP_EMPTYPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x162AFBB0)
#define MOLEMOLE_UIFLOWERSHOPPREP_EMPTYPAGECONTROLLER_OPENMAINPAGE_OFFSET UNITYSDK_OFFSET(0x162B1220)
#define MOLEMOLE_UIFLOWERSHOPPREP_EMPTYPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x162B12F0)
#define MOLEMOLE_UIFLOWERSHOPPREP_EMPTYPAGECONTROLLER__ONSTOREEXIT_G__USENORMALEXITTRIGGER_10_0_OFFSET UNITYSDK_OFFSET(0x162B1000)
#define MOLEMOLE_UIFLOWERSHOPPREP_EMPTYPAGECONTROLLER__ONUIINIT_B__5_0_OFFSET UNITYSDK_OFFSET(0x162B1300)
#define MOLEMOLE_UIFLOWERSHOPPREP_EMPTYPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x162B1310)
#define MOLEMOLE_UIFLOWERSHOPPREP_EMPTYPAGECONTROLLER___BASE_ONOPENMAINCITYSTOREPAGE_OFFSET UNITYSDK_OFFSET(0x162B13A0)
#define MOLEMOLE_UIFLOWERSHOPPREP_EMPTYPAGECONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x162B1440)
#define MOLEMOLE_UIFLOWERSHOPPREP_EMPTYPAGECONTROLLER___BASE_ONSTOREEXIT_OFFSET UNITYSDK_OFFSET(0x162B14E0)
#define MOLEMOLE_UIFLOWERSHOPPREP_EMPTYPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x162B14F0)
#define MOLEMOLE_UIFLOWERSHOPPREP_EMPTYPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x162B1500)
#define MOLEMOLE_UIFLOWERSHOPPREP_EMPTYPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x162B1510)

namespace MoleMole
{
	inline static constexpr unsigned int UIFlowerShopPrep_EmptyPageController_TypeDefinitionIndex = 43966;

	class UIFlowerShopPrep_EmptyPageController : public ::MoleMole::UIMainCityStorePageController
	{
	public:
		::Class_2_5E2FBACADDB625B7_7* _view; // 0x320
		::MoleMole::UIFlowerShopPrep_EmptyPageController_Context* _context; // 0x328
		::MoleMole::UIFortuneFlowerShop3DModelController* _flowerShop3DModelController; // 0x330
		::MoleMole::UIFlowerShopPrepPageController* _prepPageController; // 0x338
		::System::Boolean _setExitTriggerInteract; // 0x340
		::System::Boolean _overrideNpc; // 0x341

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERSHOPPREP_EMPTYPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERSHOPPREP_EMPTYPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERSHOPPREP_EMPTYPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERSHOPPREP_EMPTYPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERSHOPPREP_EMPTYPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERSHOPPREP_EMPTYPAGECONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERSHOPPREP_EMPTYPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnOpenMainCityStorePage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERSHOPPREP_EMPTYPAGECONTROLLER_ONOPENMAINCITYSTOREPAGE_OFFSET))(this);
		}

		::System::Void OnStoreExit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERSHOPPREP_EMPTYPAGECONTROLLER_ONSTOREEXIT_OFFSET))(this);
		}

		::System::Void OpenMainPage(::System::Action* pageCloseAction)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERSHOPPREP_EMPTYPAGECONTROLLER_OPENMAINPAGE_OFFSET))(this, pageCloseAction);
		}

		::System::Boolean IsQuestInProgress(::System::Int32 quest)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERSHOPPREP_EMPTYPAGECONTROLLER_ISQUESTINPROGRESS_OFFSET))(this, quest);
		}

		::System::Void _OnUIInit_b__5_0(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERSHOPPREP_EMPTYPAGECONTROLLER__ONUIINIT_B__5_0_OFFSET))(this, args);
		}

		::System::Boolean _OnStoreExit_g__UseNormalExitTrigger_10_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERSHOPPREP_EMPTYPAGECONTROLLER__ONSTOREEXIT_G__USENORMALEXITTRIGGER_10_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERSHOPPREP_EMPTYPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnOpenMainCityStorePage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERSHOPPREP_EMPTYPAGECONTROLLER___BASE_ONOPENMAINCITYSTOREPAGE_OFFSET))(this);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERSHOPPREP_EMPTYPAGECONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnStoreExit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERSHOPPREP_EMPTYPAGECONTROLLER___BASE_ONSTOREEXIT_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERSHOPPREP_EMPTYPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERSHOPPREP_EMPTYPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERSHOPPREP_EMPTYPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
