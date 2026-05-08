#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UISettingEnumWidgetController.h"
#include "unitysdk/Struct_2_037D21AC29ED1130.h"

class Class_2_4ADD0419C7E71A92_1;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralDynamicTipsPopWindowController; }
namespace MoleMole { class UIGeneralOptionDropDownBoxContext; }
namespace MoleMole { class UIGeneralPopUpHintWidgetController; }

#define MOLEMOLE_UIGENERALOPTIONDROPDOWNBOXCONTROLLER_GETBUTTON_OFFSET UNITYSDK_OFFSET(0x1580C7E0)
#define MOLEMOLE_UIGENERALOPTIONDROPDOWNBOXCONTROLLER_INITVIEW_OFFSET UNITYSDK_OFFSET(0x1580BDA0)
#define MOLEMOLE_UIGENERALOPTIONDROPDOWNBOXCONTROLLER_ONDYNAMICTIPSCLOSE_OFFSET UNITYSDK_OFFSET(0x1580C840)
#define MOLEMOLE_UIGENERALOPTIONDROPDOWNBOXCONTROLLER_ONFILTERDROPVALUECHANGE_OFFSET UNITYSDK_OFFSET(0x1580C950)
#define MOLEMOLE_UIGENERALOPTIONDROPDOWNBOXCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1580BB70)
#define MOLEMOLE_UIGENERALOPTIONDROPDOWNBOXCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1580BBD0)
#define MOLEMOLE_UIGENERALOPTIONDROPDOWNBOXCONTROLLER_REFRESHCONTEXT_OFFSET UNITYSDK_OFFSET(0x1580C8F0)
#define MOLEMOLE_UIGENERALOPTIONDROPDOWNBOXCONTROLLER_SETENABLE_OFFSET UNITYSDK_OFFSET(0x1580C8A0)
#define MOLEMOLE_UIGENERALOPTIONDROPDOWNBOXCONTROLLER_SHOWDROPDOWN_OFFSET UNITYSDK_OFFSET(0x1580C280)
#define MOLEMOLE_UIGENERALOPTIONDROPDOWNBOXCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1580CE60)
#define MOLEMOLE_UIGENERALOPTIONDROPDOWNBOXCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1580CE70)
#define MOLEMOLE_UIGENERALOPTIONDROPDOWNBOXCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1580CF00)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralOptionDropDownBoxController_TypeDefinitionIndex = 56181;

	class UIGeneralOptionDropDownBoxController : public ::MoleMole::UISettingEnumWidgetController
	{
	public:
		::System::Boolean enabled; // 0x2F8
		::Class_2_4ADD0419C7E71A92_1* _view; // 0x300
		::MoleMole::UIGeneralOptionDropDownBoxContext* _context; // 0x308
		::MoleMole::UIGeneralPopUpHintWidgetController* _popUpHintController; // 0x310
		::MoleMole::UIGeneralDynamicTipsPopWindowController* _filterSelect; // 0x318
		::System::Int32 _curSelectIndex; // 0x320
		::Il2CppArray<::Struct_2_037D21AC29ED1130>* _selects; // 0x328

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
