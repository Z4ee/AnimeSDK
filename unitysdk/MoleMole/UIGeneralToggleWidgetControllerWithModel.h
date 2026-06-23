#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIGeneralToggleWidgetController.h"

class Class_1_48D56DACBE4271BC;
class Class_2_F58E1814EA419801;
namespace MoleMole { class UIGeneralToggleWidgetControllerWithModel_ViewModel; }
namespace MoleMole { class UIGeneralToggleWidgetController_OnClickCallback; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }
template <typename T> class Class_0_16E4307DCC419505_165;

#define MOLEMOLE_UIGENERALTOGGLEWIDGETCONTROLLERWITHMODEL_BIND_OFFSET UNITYSDK_OFFSET(0x171E78B0)
#define MOLEMOLE_UIGENERALTOGGLEWIDGETCONTROLLERWITHMODEL_CHANGEONSTATEWITHCHECK_OFFSET UNITYSDK_OFFSET(0x171E7640)
#define MOLEMOLE_UIGENERALTOGGLEWIDGETCONTROLLERWITHMODEL_GETUISTATEISON_OFFSET UNITYSDK_OFFSET(0x171E7B10)
#define MOLEMOLE_UIGENERALTOGGLEWIDGETCONTROLLERWITHMODEL_INITAUTODISPOSEDATABIND_OFFSET UNITYSDK_OFFSET(0x171E79F0)
#define MOLEMOLE_UIGENERALTOGGLEWIDGETCONTROLLERWITHMODEL_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x171E7C20)
#define MOLEMOLE_UIGENERALTOGGLEWIDGETCONTROLLERWITHMODEL_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x171E7700)
#define MOLEMOLE_UIGENERALTOGGLEWIDGETCONTROLLERWITHMODEL_REFRESHVIEWWITHMODEL_OFFSET UNITYSDK_OFFSET(0x171E7150)
#define MOLEMOLE_UIGENERALTOGGLEWIDGETCONTROLLERWITHMODEL_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x171E73D0)
#define MOLEMOLE_UIGENERALTOGGLEWIDGETCONTROLLERWITHMODEL__BIND_B__5_0_OFFSET UNITYSDK_OFFSET(0x171E80C0)
#define MOLEMOLE_UIGENERALTOGGLEWIDGETCONTROLLERWITHMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x171E7C70)
#define MOLEMOLE_UIGENERALTOGGLEWIDGETCONTROLLERWITHMODEL__ONUIINIT_B__3_0_OFFSET UNITYSDK_OFFSET(0x171E7CD0)
#define MOLEMOLE_UIGENERALTOGGLEWIDGETCONTROLLERWITHMODEL__ONUIINIT_B__3_1_OFFSET UNITYSDK_OFFSET(0x171E7F20)
#define MOLEMOLE_UIGENERALTOGGLEWIDGETCONTROLLERWITHMODEL__ONUIINIT_B__3_2_OFFSET UNITYSDK_OFFSET(0x171E7FF0)
#define MOLEMOLE_UIGENERALTOGGLEWIDGETCONTROLLERWITHMODEL___BASE_INITAUTODISPOSEDATABIND_OFFSET UNITYSDK_OFFSET(0x171E81C0)
#define MOLEMOLE_UIGENERALTOGGLEWIDGETCONTROLLERWITHMODEL___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x171E8250)
#define MOLEMOLE_UIGENERALTOGGLEWIDGETCONTROLLERWITHMODEL___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x171E8260)
#define MOLEMOLE_UIGENERALTOGGLEWIDGETCONTROLLERWITHMODEL___BASE_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x171E8360)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralToggleWidgetControllerWithModel_TypeDefinitionIndex = 42801;

	class UIGeneralToggleWidgetControllerWithModel : public ::MoleMole::UIGeneralToggleWidgetController
	{
	public:
		::MoleMole::UIGeneralToggleWidgetControllerWithModel_ViewModel* _viewModel; // 0x2D8
		::Class_2_F58E1814EA419801* _helper; // 0x2E0
		::Class_1_48D56DACBE4271BC* _modelBindHelper; // 0x2E8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTOGGLEWIDGETCONTROLLERWITHMODEL__CTOR_OFFSET))(this);
		}

		::System::Void RefreshViewWithModel(::Class_0_16E4307DCC419505_165<::System::Boolean>* model, ::System::Func_1<::System::Boolean>* CheckCanToggle, ::System::Action_1<::System::Boolean>* OnUIStateChange)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_165<::System::Boolean>*, ::System::Func_1<::System::Boolean>*, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTOGGLEWIDGETCONTROLLERWITHMODEL_REFRESHVIEWWITHMODEL_OFFSET))(this, model, CheckCanToggle, OnUIStateChange);
		}

		::System::Void RefreshView(::System::Boolean isOn, ::MoleMole::UIGeneralToggleWidgetController_OnClickCallback* callback, ::System::Func_1<::System::Boolean>* CheckCanToggle, ::System::Action_1<::System::Action*>* doubleCheckAction)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::MoleMole::UIGeneralToggleWidgetController_OnClickCallback*, ::System::Func_1<::System::Boolean>*, ::System::Action_1<::System::Action*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTOGGLEWIDGETCONTROLLERWITHMODEL_REFRESHVIEW_OFFSET))(this, isOn, callback, CheckCanToggle, doubleCheckAction);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTOGGLEWIDGETCONTROLLERWITHMODEL_ONUIINIT_OFFSET))(this);
		}

		::System::Void InitAutoDisposeDataBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTOGGLEWIDGETCONTROLLERWITHMODEL_INITAUTODISPOSEDATABIND_OFFSET))(this);
		}

		::System::Void Bind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTOGGLEWIDGETCONTROLLERWITHMODEL_BIND_OFFSET))(this);
		}

		::System::Void ChangeOnStateWithCheck(::System::Boolean isOn, ::System::Boolean useAnim, ::System::Boolean force)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTOGGLEWIDGETCONTROLLERWITHMODEL_CHANGEONSTATEWITHCHECK_OFFSET))(this, isOn, useAnim, force);
		}

		::System::Boolean GetUIStateIsOn()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTOGGLEWIDGETCONTROLLERWITHMODEL_GETUISTATEISON_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTOGGLEWIDGETCONTROLLERWITHMODEL_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__3_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTOGGLEWIDGETCONTROLLERWITHMODEL__ONUIINIT_B__3_0_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__3_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTOGGLEWIDGETCONTROLLERWITHMODEL__ONUIINIT_B__3_1_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__3_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTOGGLEWIDGETCONTROLLERWITHMODEL__ONUIINIT_B__3_2_OFFSET))(this);
		}

		::System::Void _Bind_b__5_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTOGGLEWIDGETCONTROLLERWITHMODEL__BIND_B__5_0_OFFSET))(this);
		}

		::System::Void __base_InitAutoDisposeDataBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTOGGLEWIDGETCONTROLLERWITHMODEL___BASE_INITAUTODISPOSEDATABIND_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTOGGLEWIDGETCONTROLLERWITHMODEL___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTOGGLEWIDGETCONTROLLERWITHMODEL___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_RefreshView(::System::Boolean P0, ::MoleMole::UIGeneralToggleWidgetController_OnClickCallback* P1, ::System::Func_1<::System::Boolean>* P2, ::System::Action_1<::System::Action*>* P3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::MoleMole::UIGeneralToggleWidgetController_OnClickCallback*, ::System::Func_1<::System::Boolean>*, ::System::Action_1<::System::Action*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTOGGLEWIDGETCONTROLLERWITHMODEL___BASE_REFRESHVIEW_OFFSET))(this, P0, P1, P2, P3);
		}
	};
}
