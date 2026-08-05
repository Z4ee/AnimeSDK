#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_2_208CC9941471731A_715;
class Class_2_9B48ABA85DE8503C_1;
class Class_3_0ECDE22EF9FEEAE2;
namespace MoleMole { class ScrollViewItemWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIMainCityRevivalRewardWidgetController; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIMAINCITYREVIVALREWARDDETAILSPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x18A244B0)
#define MOLEMOLE_UIMAINCITYREVIVALREWARDDETAILSPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18A247F0)
#define MOLEMOLE_UIMAINCITYREVIVALREWARDDETAILSPOPWINDOWCONTROLLER_ONCREATREVIVALREWARDITEM_OFFSET UNITYSDK_OFFSET(0x18A246C0)
#define MOLEMOLE_UIMAINCITYREVIVALREWARDDETAILSPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18A24F00)
#define MOLEMOLE_UIMAINCITYREVIVALREWARDDETAILSPOPWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18A244C0)
#define MOLEMOLE_UIMAINCITYREVIVALREWARDDETAILSPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18A24880)
#define MOLEMOLE_UIMAINCITYREVIVALREWARDDETAILSPOPWINDOWCONTROLLER_SELECTITEM_OFFSET UNITYSDK_OFFSET(0x18A24F70)
#define MOLEMOLE_UIMAINCITYREVIVALREWARDDETAILSPOPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18A25060)
#define MOLEMOLE_UIMAINCITYREVIVALREWARDDETAILSPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18A25080)
#define MOLEMOLE_UIMAINCITYREVIVALREWARDDETAILSPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18A25110)
#define MOLEMOLE_UIMAINCITYREVIVALREWARDDETAILSPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18A25120)
#define MOLEMOLE_UIMAINCITYREVIVALREWARDDETAILSPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18A25130)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCityRevivalRewardDetailsPopWindowController_TypeDefinitionIndex = 46932;

	class UIMainCityRevivalRewardDetailsPopWindowController : public ::MoleMole::UIWindowController
	{
	public:
		::Class_2_9B48ABA85DE8503C_1* _view; // 0x318
		::System::Collections::Generic::List_1<::Class_3_0ECDE22EF9FEEAE2*>* _progressList; // 0x320
		::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_715*>* _progressTemplates; // 0x328
		::System::Int32 _currentProgressLevel; // 0x330
		::System::Boolean _currentProgressRewarded; // 0x334
		::System::Int32 _landID; // 0x338
		::System::Int32 _selectItemID; // 0x33C
		::MoleMole::UIMainCityRevivalRewardWidgetController* _lastItem; // 0x340

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYREVIVALREWARDDETAILSPOPWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYREVIVALREWARDDETAILSPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYREVIVALREWARDDETAILSPOPWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::MoleMole::ScrollViewItemWidgetController* OnCreatRevivalRewardItem(::System::Func_1<::MoleMole::UIControlReference*>* arg)
		{
			return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::System::Func_1<::MoleMole::UIControlReference*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYREVIVALREWARDDETAILSPOPWINDOWCONTROLLER_ONCREATREVIVALREWARDITEM_OFFSET))(this, arg);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYREVIVALREWARDDETAILSPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYREVIVALREWARDDETAILSPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYREVIVALREWARDDETAILSPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void SelectItem(::MoleMole::UIMainCityRevivalRewardWidgetController* item)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIMainCityRevivalRewardWidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYREVIVALREWARDDETAILSPOPWINDOWCONTROLLER_SELECTITEM_OFFSET))(this, item);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYREVIVALREWARDDETAILSPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYREVIVALREWARDDETAILSPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYREVIVALREWARDDETAILSPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYREVIVALREWARDDETAILSPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
