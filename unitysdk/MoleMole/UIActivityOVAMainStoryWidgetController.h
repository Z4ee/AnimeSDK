#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_61F297ED27C3382F_7;
namespace MoleMole { class ActivityOVAMainStoryContext; }
namespace MoleMole { class ScrollViewItemWidgetController; }
namespace MoleMole { class UIActivityCompWeekRewardBtnWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { template <typename T> class Func_1; }

#define MOLEMOLE_UIACTIVITYOVAMAINSTORYWIDGETCONTROLLER_CREATEITEMHANDLE_OFFSET UNITYSDK_OFFSET(0x193389F0)
#define MOLEMOLE_UIACTIVITYOVAMAINSTORYWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x193388E0)
#define MOLEMOLE_UIACTIVITYOVAMAINSTORYWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x19338970)
#define MOLEMOLE_UIACTIVITYOVAMAINSTORYWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x19338630)
#define MOLEMOLE_UIACTIVITYOVAMAINSTORYWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x19338720)
#define MOLEMOLE_UIACTIVITYOVAMAINSTORYWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x19338AA0)
#define MOLEMOLE_UIACTIVITYOVAMAINSTORYWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x19338B00)
#define MOLEMOLE_UIACTIVITYOVAMAINSTORYWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x19338B90)
#define MOLEMOLE_UIACTIVITYOVAMAINSTORYWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x19338C20)
#define MOLEMOLE_UIACTIVITYOVAMAINSTORYWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x19338CB0)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityOVAMainStoryWidgetController_TypeDefinitionIndex = 54138;

	class UIActivityOVAMainStoryWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_61F297ED27C3382F_7* _view; // 0x2C0
		::MoleMole::ActivityOVAMainStoryContext* context; // 0x2C8
		::MoleMole::UIActivityCompWeekRewardBtnWidgetController* _compRewardBtn; // 0x2D0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYOVAMAINSTORYWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYOVAMAINSTORYWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYOVAMAINSTORYWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYOVAMAINSTORYWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYOVAMAINSTORYWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::MoleMole::ScrollViewItemWidgetController* CreateItemHandle(::System::Func_1<::MoleMole::UIControlReference*>* arg)
		{
			return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::System::Func_1<::MoleMole::UIControlReference*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYOVAMAINSTORYWIDGETCONTROLLER_CREATEITEMHANDLE_OFFSET))(this, arg);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYOVAMAINSTORYWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYOVAMAINSTORYWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYOVAMAINSTORYWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYOVAMAINSTORYWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
