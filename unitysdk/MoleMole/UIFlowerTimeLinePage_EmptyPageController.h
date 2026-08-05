#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_2_5E2FBACADDB625B7_3;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIFlowerTimeLinePageController; }
namespace MoleMole { class UIFlowerTimeLinePage_EmptyPageController_Context; }

#define MOLEMOLE_UIFLOWERTIMELINEPAGE_EMPTYPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x17BC54A0)
#define MOLEMOLE_UIFLOWERTIMELINEPAGE_EMPTYPAGECONTROLLER_INITAUTODISPOSEDATABIND_OFFSET UNITYSDK_OFFSET(0x17BC5540)
#define MOLEMOLE_UIFLOWERTIMELINEPAGE_EMPTYPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17BC54B0)
#define MOLEMOLE_UIFLOWERTIMELINEPAGE_EMPTYPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17BC5860)
#define MOLEMOLE_UIFLOWERTIMELINEPAGE_EMPTYPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17BC5580)
#define MOLEMOLE_UIFLOWERTIMELINEPAGE_EMPTYPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x17BC55D0)
#define MOLEMOLE_UIFLOWERTIMELINEPAGE_EMPTYPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x17BC58D0)
#define MOLEMOLE_UIFLOWERTIMELINEPAGE_EMPTYPAGECONTROLLER___BASE_INITAUTODISPOSEDATABIND_OFFSET UNITYSDK_OFFSET(0x17BC58E0)
#define MOLEMOLE_UIFLOWERTIMELINEPAGE_EMPTYPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17BC5970)
#define MOLEMOLE_UIFLOWERTIMELINEPAGE_EMPTYPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17BC5A00)
#define MOLEMOLE_UIFLOWERTIMELINEPAGE_EMPTYPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17BC5A10)
#define MOLEMOLE_UIFLOWERTIMELINEPAGE_EMPTYPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x17BC5A20)

namespace MoleMole
{
	inline static constexpr unsigned int UIFlowerTimeLinePage_EmptyPageController_TypeDefinitionIndex = 42519;

	class UIFlowerTimeLinePage_EmptyPageController : public ::MoleMole::UIWindowController
	{
	public:
		::Class_2_5E2FBACADDB625B7_3* _view; // 0x318
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
