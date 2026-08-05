#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_0_16E4307DCC419505_12;
class Class_2_76122D20A16B7506;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_UISUMMERTIDETREASURETABBTNROLEROWWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x11E1B300)
#define MOLEMOLE_UISUMMERTIDETREASURETABBTNROLEROWWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x11E1B370)
#define MOLEMOLE_UISUMMERTIDETREASURETABBTNROLEROWWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x11E1B410)
#define MOLEMOLE_UISUMMERTIDETREASURETABBTNROLEROWWIDGETCONTROLLER_SETROLEDATA_OFFSET UNITYSDK_OFFSET(0x11E1B5D0)
#define MOLEMOLE_UISUMMERTIDETREASURETABBTNROLEROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x11E1B6A0)
#define MOLEMOLE_UISUMMERTIDETREASURETABBTNROLEROWWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x11E1B700)
#define MOLEMOLE_UISUMMERTIDETREASURETABBTNROLEROWWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x11E1B7A0)

namespace MoleMole
{
	inline static constexpr unsigned int UISummerTideTreasureTabBtnRoleRowWidgetController_TypeDefinitionIndex = 77458;

	class UISummerTideTreasureTabBtnRoleRowWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDETREASURETABBTNROLEROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_76122D20A16B7506* get__viewModel()
		{
			return ((::Class_2_76122D20A16B7506*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDETREASURETABBTNROLEROWWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDETREASURETABBTNROLEROWWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDETREASURETABBTNROLEROWWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void SetRoleData(::Class_0_16E4307DCC419505_12* roleConfig, ::System::Func_2<::System::Int32, ::System::Boolean>* checkRoleUnlock, ::System::Func_2<::System::Int32, ::System::Boolean>* checkRecommendUnlock)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_12*, ::System::Func_2<::System::Int32, ::System::Boolean>*, ::System::Func_2<::System::Int32, ::System::Boolean>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDETREASURETABBTNROLEROWWIDGETCONTROLLER_SETROLEDATA_OFFSET))(this, roleConfig, checkRoleUnlock, checkRecommendUnlock);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDETREASURETABBTNROLEROWWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDETREASURETABBTNROLEROWWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}
	};
}
