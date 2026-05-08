#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIGrandMarcelRuleDialogPopWindowController_ShowType.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_2_208CC9941471731A_657;
class Class_2_7B15B3118FE590CD_15;
class Class_2_A694D66D068D5F50;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIGRANDMARCELRULEDIALOGPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x15A285E0)
#define MOLEMOLE_UIGRANDMARCELRULEDIALOGPOPWINDOWCONTROLLER_ONCLICKTAB_OFFSET UNITYSDK_OFFSET(0x15A2AC60)
#define MOLEMOLE_UIGRANDMARCELRULEDIALOGPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15A2A6E0)
#define MOLEMOLE_UIGRANDMARCELRULEDIALOGPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15A2A770)
#define MOLEMOLE_UIGRANDMARCELRULEDIALOGPOPWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15A285F0)
#define MOLEMOLE_UIGRANDMARCELRULEDIALOGPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x15A288B0)
#define MOLEMOLE_UIGRANDMARCELRULEDIALOGPOPWINDOWCONTROLLER_REFRESHRANKRULEPANEL_OFFSET UNITYSDK_OFFSET(0x15A2A7F0)
#define MOLEMOLE_UIGRANDMARCELRULEDIALOGPOPWINDOWCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x15A28970)
#define MOLEMOLE_UIGRANDMARCELRULEDIALOGPOPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x15A2ACC0)
#define MOLEMOLE_UIGRANDMARCELRULEDIALOGPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15A2AE80)
#define MOLEMOLE_UIGRANDMARCELRULEDIALOGPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15A2AF10)
#define MOLEMOLE_UIGRANDMARCELRULEDIALOGPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15A2AF20)
#define MOLEMOLE_UIGRANDMARCELRULEDIALOGPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x15A2AF30)

namespace MoleMole
{
	inline static constexpr unsigned int UIGrandMarcelRuleDialogPopWindowController_TypeDefinitionIndex = 45362;

	class UIGrandMarcelRuleDialogPopWindowController : public ::MoleMole::UIWindowController
	{
	public:
		::Class_2_7B15B3118FE590CD_15* _view; // 0x310
		::Class_2_A694D66D068D5F50* _marcelModel; // 0x318
		::MoleMole::UIGrandMarcelRuleDialogPopWindowController_ShowType _curShowType; // 0x320
		::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_657*>* _curRaceConfigs; // 0x328
		::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_657*>* _curSurviveConfigs; // 0x330
		::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_657*>* _rankType1Configs; // 0x338
		::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_657*>* _rankType2Configs; // 0x340
		::System::String* _redTextColor; // 0x348
		::System::String* _grayTextColor; // 0x350
		::System::Action* OnClose; // 0x358

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGRANDMARCELRULEDIALOGPOPWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGRANDMARCELRULEDIALOGPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGRANDMARCELRULEDIALOGPOPWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGRANDMARCELRULEDIALOGPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGRANDMARCELRULEDIALOGPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGRANDMARCELRULEDIALOGPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGRANDMARCELRULEDIALOGPOPWINDOWCONTROLLER_REFRESHVIEW_OFFSET))(this);
		}

		::System::Void RefreshRankRulePanel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGRANDMARCELRULEDIALOGPOPWINDOWCONTROLLER_REFRESHRANKRULEPANEL_OFFSET))(this);
		}

		::System::Void OnClickTab(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGRANDMARCELRULEDIALOGPOPWINDOWCONTROLLER_ONCLICKTAB_OFFSET))(this, index);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGRANDMARCELRULEDIALOGPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGRANDMARCELRULEDIALOGPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGRANDMARCELRULEDIALOGPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGRANDMARCELRULEDIALOGPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
