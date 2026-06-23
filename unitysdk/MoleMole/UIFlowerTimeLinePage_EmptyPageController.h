#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_2_5E2FBACADDB625B7_7;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIFlowerTimeLinePageController; }
namespace MoleMole { class UIFlowerTimeLinePage_EmptyPageController_Context; }

#define MOLEMOLE_UIFLOWERTIMELINEPAGE_EMPTYPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x177DB8A0)
#define MOLEMOLE_UIFLOWERTIMELINEPAGE_EMPTYPAGECONTROLLER_INITAUTODISPOSEDATABIND_OFFSET UNITYSDK_OFFSET(0x177DB940)
#define MOLEMOLE_UIFLOWERTIMELINEPAGE_EMPTYPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x177DB8B0)
#define MOLEMOLE_UIFLOWERTIMELINEPAGE_EMPTYPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x177DBCA0)
#define MOLEMOLE_UIFLOWERTIMELINEPAGE_EMPTYPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x177DB980)
#define MOLEMOLE_UIFLOWERTIMELINEPAGE_EMPTYPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x177DB9D0)
#define MOLEMOLE_UIFLOWERTIMELINEPAGE_EMPTYPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x177DBD10)
#define MOLEMOLE_UIFLOWERTIMELINEPAGE_EMPTYPAGECONTROLLER___BASE_INITAUTODISPOSEDATABIND_OFFSET UNITYSDK_OFFSET(0x177DBD20)
#define MOLEMOLE_UIFLOWERTIMELINEPAGE_EMPTYPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x177DBDB0)
#define MOLEMOLE_UIFLOWERTIMELINEPAGE_EMPTYPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x177DBE40)
#define MOLEMOLE_UIFLOWERTIMELINEPAGE_EMPTYPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x177DBE50)
#define MOLEMOLE_UIFLOWERTIMELINEPAGE_EMPTYPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x177DBE60)

namespace MoleMole
{
	inline static constexpr unsigned int UIFlowerTimeLinePage_EmptyPageController_TypeDefinitionIndex = 43491;

	class UIFlowerTimeLinePage_EmptyPageController : public ::MoleMole::UIWindowController
	{
	public:
		::Class_2_5E2FBACADDB625B7_7* _view; // 0x318
		::MoleMole::UIFlowerTimeLinePage_EmptyPageController_Context* _context; // 0x320
		::MoleMole::UIFlowerTimeLinePageController* _flowerTimeLinePageController; // 0x328

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERTIMELINEPAGE_EMPTYPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERTIMELINEPAGE_EMPTYPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERTIMELINEPAGE_EMPTYPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void InitAutoDisposeDataBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERTIMELINEPAGE_EMPTYPAGECONTROLLER_INITAUTODISPOSEDATABIND_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERTIMELINEPAGE_EMPTYPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERTIMELINEPAGE_EMPTYPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERTIMELINEPAGE_EMPTYPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_InitAutoDisposeDataBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERTIMELINEPAGE_EMPTYPAGECONTROLLER___BASE_INITAUTODISPOSEDATABIND_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERTIMELINEPAGE_EMPTYPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERTIMELINEPAGE_EMPTYPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERTIMELINEPAGE_EMPTYPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERTIMELINEPAGE_EMPTYPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
