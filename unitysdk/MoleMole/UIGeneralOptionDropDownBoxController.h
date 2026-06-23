#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UISettingEnumWidgetController.h"
#include "unitysdk/Struct_2_037D21AC29ED1130.h"

class Class_2_4ADD0419C7E71A92;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralDynamicTipsPopWindowController; }
namespace MoleMole { class UIGeneralOptionDropDownBoxContext; }
namespace MoleMole { class UIGeneralPopUpHintWidgetController; }

#define MOLEMOLE_UIGENERALOPTIONDROPDOWNBOXCONTROLLER_GETBUTTON_OFFSET UNITYSDK_OFFSET(0x166EE440)
#define MOLEMOLE_UIGENERALOPTIONDROPDOWNBOXCONTROLLER_INITVIEW_OFFSET UNITYSDK_OFFSET(0x166ED9A0)
#define MOLEMOLE_UIGENERALOPTIONDROPDOWNBOXCONTROLLER_ONDYNAMICTIPSCLOSE_OFFSET UNITYSDK_OFFSET(0x166EE4A0)
#define MOLEMOLE_UIGENERALOPTIONDROPDOWNBOXCONTROLLER_ONFILTERDROPVALUECHANGE_OFFSET UNITYSDK_OFFSET(0x166EE5B0)
#define MOLEMOLE_UIGENERALOPTIONDROPDOWNBOXCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x166ED770)
#define MOLEMOLE_UIGENERALOPTIONDROPDOWNBOXCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x166ED7D0)
#define MOLEMOLE_UIGENERALOPTIONDROPDOWNBOXCONTROLLER_REFRESHCONTEXT_OFFSET UNITYSDK_OFFSET(0x166EE550)
#define MOLEMOLE_UIGENERALOPTIONDROPDOWNBOXCONTROLLER_SETENABLE_OFFSET UNITYSDK_OFFSET(0x166EE500)
#define MOLEMOLE_UIGENERALOPTIONDROPDOWNBOXCONTROLLER_SHOWDROPDOWN_OFFSET UNITYSDK_OFFSET(0x166EDE80)
#define MOLEMOLE_UIGENERALOPTIONDROPDOWNBOXCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x166EEAC0)
#define MOLEMOLE_UIGENERALOPTIONDROPDOWNBOXCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x166EEAD0)
#define MOLEMOLE_UIGENERALOPTIONDROPDOWNBOXCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x166EEB60)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralOptionDropDownBoxController_TypeDefinitionIndex = 75596;

	class UIGeneralOptionDropDownBoxController : public ::MoleMole::UISettingEnumWidgetController
	{
	public:
		::System::Boolean enabled; // 0x300
		::Class_2_4ADD0419C7E71A92* _view; // 0x308
		::MoleMole::UIGeneralOptionDropDownBoxContext* _context; // 0x310
		::MoleMole::UIGeneralPopUpHintWidgetController* _popUpHintController; // 0x318
		::MoleMole::UIGeneralDynamicTipsPopWindowController* _filterSelect; // 0x320
		::System::Int32 _curSelectIndex; // 0x328
		::Il2CppArray<::Struct_2_037D21AC29ED1130>* _selects; // 0x330

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALOPTIONDROPDOWNBOXCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALOPTIONDROPDOWNBOXCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALOPTIONDROPDOWNBOXCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void InitView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALOPTIONDROPDOWNBOXCONTROLLER_INITVIEW_OFFSET))(this);
		}

		::System::Void ShowDropDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALOPTIONDROPDOWNBOXCONTROLLER_SHOWDROPDOWN_OFFSET))(this);
		}

		::Class_2_B4378B46E0020E85* GetButton()
		{
			return ((::Class_2_B4378B46E0020E85*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALOPTIONDROPDOWNBOXCONTROLLER_GETBUTTON_OFFSET))(this);
		}

		::System::Void OnDynamicTipsClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALOPTIONDROPDOWNBOXCONTROLLER_ONDYNAMICTIPSCLOSE_OFFSET))(this);
		}

		::System::Void SetEnable(::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALOPTIONDROPDOWNBOXCONTROLLER_SETENABLE_OFFSET))(this, enable);
		}

		::System::Void RefreshContext(::MoleMole::UIGeneralOptionDropDownBoxContext* context)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIGeneralOptionDropDownBoxContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALOPTIONDROPDOWNBOXCONTROLLER_REFRESHCONTEXT_OFFSET))(this, context);
		}

		::System::Void OnFilterDropValueChange(::System::Int32 index, ::System::Boolean isSelectChanged)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALOPTIONDROPDOWNBOXCONTROLLER_ONFILTERDROPVALUECHANGE_OFFSET))(this, index, isSelectChanged);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALOPTIONDROPDOWNBOXCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALOPTIONDROPDOWNBOXCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
