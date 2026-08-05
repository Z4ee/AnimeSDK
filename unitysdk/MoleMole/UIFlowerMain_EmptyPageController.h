#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIMainCityStorePageController.h"

class Class_2_5E2FBACADDB625B7_23;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIFlowerMainPageController; }
namespace MoleMole { class UIFlowerMain_EmptyPageController_Context; }

#define MOLEMOLE_UIFLOWERMAIN_EMPTYPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x17D8D280)
#define MOLEMOLE_UIFLOWERMAIN_EMPTYPAGECONTROLLER_INITAUTODISPOSEDATABIND_OFFSET UNITYSDK_OFFSET(0x17D8D320)
#define MOLEMOLE_UIFLOWERMAIN_EMPTYPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17D8D290)
#define MOLEMOLE_UIFLOWERMAIN_EMPTYPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17D8D570)
#define MOLEMOLE_UIFLOWERMAIN_EMPTYPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17D8D360)
#define MOLEMOLE_UIFLOWERMAIN_EMPTYPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x17D8D3B0)
#define MOLEMOLE_UIFLOWERMAIN_EMPTYPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x17D8D5E0)
#define MOLEMOLE_UIFLOWERMAIN_EMPTYPAGECONTROLLER___BASE_INITAUTODISPOSEDATABIND_OFFSET UNITYSDK_OFFSET(0x17D8D5F0)
#define MOLEMOLE_UIFLOWERMAIN_EMPTYPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17D8D680)
#define MOLEMOLE_UIFLOWERMAIN_EMPTYPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17D8D710)
#define MOLEMOLE_UIFLOWERMAIN_EMPTYPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17D8D720)
#define MOLEMOLE_UIFLOWERMAIN_EMPTYPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x17D8D730)

namespace MoleMole
{
	inline static constexpr unsigned int UIFlowerMain_EmptyPageController_TypeDefinitionIndex = 66365;

	class UIFlowerMain_EmptyPageController : public ::MoleMole::UIMainCityStorePageController
	{
	public:
		::Class_2_5E2FBACADDB625B7_23* _view; // 0x328
		::MoleMole::UIFlowerMain_EmptyPageController_Context* _context; // 0x330
		::MoleMole::UIFlowerMainPageController* _flowerMainPageController; // 0x338

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAIN_EMPTYPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAIN_EMPTYPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAIN_EMPTYPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void InitAutoDisposeDataBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAIN_EMPTYPAGECONTROLLER_INITAUTODISPOSEDATABIND_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAIN_EMPTYPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAIN_EMPTYPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAIN_EMPTYPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_InitAutoDisposeDataBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAIN_EMPTYPAGECONTROLLER___BASE_INITAUTODISPOSEDATABIND_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAIN_EMPTYPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAIN_EMPTYPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAIN_EMPTYPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAIN_EMPTYPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
