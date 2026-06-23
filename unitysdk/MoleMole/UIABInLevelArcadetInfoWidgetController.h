#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_1_B61C4EDDF0AF60D0;
class Class_1_F0E4E2848B1D52CE;
class Class_2_FF33B5ED14FB44B2_2;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_UIABINLEVELARCADETINFOWIDGETCONTROLLER_BINDVIEW_OFFSET UNITYSDK_OFFSET(0x181A14C0)
#define MOLEMOLE_UIABINLEVELARCADETINFOWIDGETCONTROLLER_INITPLATFORMSETTING_OFFSET UNITYSDK_OFFSET(0x181A0D90)
#define MOLEMOLE_UIABINLEVELARCADETINFOWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x181A13B0)
#define MOLEMOLE_UIABINLEVELARCADETINFOWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x181A1440)
#define MOLEMOLE_UIABINLEVELARCADETINFOWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x181A0C80)
#define MOLEMOLE_UIABINLEVELARCADETINFOWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x181A1280)
#define MOLEMOLE_UIABINLEVELARCADETINFOWIDGETCONTROLLER_SETPLATFORMBTNSHOWSTATE_OFFSET UNITYSDK_OFFSET(0x181A1300)
#define MOLEMOLE_UIABINLEVELARCADETINFOWIDGETCONTROLLER_SETROW_OFFSET UNITYSDK_OFFSET(0x181A1BF0)
#define MOLEMOLE_UIABINLEVELARCADETINFOWIDGETCONTROLLER_SHOWREPORTDIALOG_OFFSET UNITYSDK_OFFSET(0x181A19D0)
#define MOLEMOLE_UIABINLEVELARCADETINFOWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x181A1DC0)
#define MOLEMOLE_UIABINLEVELARCADETINFOWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x181A1EA0)
#define MOLEMOLE_UIABINLEVELARCADETINFOWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x181A1F30)
#define MOLEMOLE_UIABINLEVELARCADETINFOWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x181A1FC0)
#define MOLEMOLE_UIABINLEVELARCADETINFOWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x181A2050)

namespace MoleMole
{
	inline static constexpr unsigned int UIABInLevelArcadetInfoWidgetController_TypeDefinitionIndex = 63470;

	class UIABInLevelArcadetInfoWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_FF33B5ED14FB44B2_2* _view; // 0x2C0
		::Class_1_F0E4E2848B1D52CE* _viewModel; // 0x2C8
		::System::Collections::Generic::List_1<::Class_1_B61C4EDDF0AF60D0*>* _list; // 0x2D0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELARCADETINFOWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELARCADETINFOWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELARCADETINFOWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELARCADETINFOWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELARCADETINFOWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void BindView(::Class_1_F0E4E2848B1D52CE* viewModel)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F0E4E2848B1D52CE*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELARCADETINFOWIDGETCONTROLLER_BINDVIEW_OFFSET))(this, viewModel);
		}

		::System::Void ShowReportDialog(::Class_1_B61C4EDDF0AF60D0* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B61C4EDDF0AF60D0*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELARCADETINFOWIDGETCONTROLLER_SHOWREPORTDIALOG_OFFSET))(this, info);
		}

		::System::Void SetRow(::UnityEngine::GameObject* go, ::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELARCADETINFOWIDGETCONTROLLER_SETROW_OFFSET))(this, go, index, data, init);
		}

		::System::Void InitPlatformSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELARCADETINFOWIDGETCONTROLLER_INITPLATFORMSETTING_OFFSET))(this);
		}

		::System::Void SetPlatformBtnShowState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELARCADETINFOWIDGETCONTROLLER_SETPLATFORMBTNSHOWSTATE_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELARCADETINFOWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELARCADETINFOWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELARCADETINFOWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELARCADETINFOWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
