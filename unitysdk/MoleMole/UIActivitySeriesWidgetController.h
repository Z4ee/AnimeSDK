#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_1_D375C91CCE5D3999;
class Class_2_1CDE5CF24529F662;
namespace MoleMole { class UIActivitySeriesNormalRewardWidgetController; }
namespace MoleMole { class UIActivitySeriesRoleRowWidgetController; }
namespace MoleMole { class UIActivitySeriesSpecialRewardWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIACTIVITYSERIESWIDGETCONTROLLER_INITREWARDWIDGET_OFFSET UNITYSDK_OFFSET(0x183E8770)
#define MOLEMOLE_UIACTIVITYSERIESWIDGETCONTROLLER_INITROLEWIDGET_OFFSET UNITYSDK_OFFSET(0x183E88E0)
#define MOLEMOLE_UIACTIVITYSERIESWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x183E8B80)
#define MOLEMOLE_UIACTIVITYSERIESWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x183E8C10)
#define MOLEMOLE_UIACTIVITYSERIESWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x183E85E0)
#define MOLEMOLE_UIACTIVITYSERIESWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x183E8A30)
#define MOLEMOLE_UIACTIVITYSERIESWIDGETCONTROLLER_REFRESHREWARD_OFFSET UNITYSDK_OFFSET(0x183E8C90)
#define MOLEMOLE_UIACTIVITYSERIESWIDGETCONTROLLER_REFRESHROLE_OFFSET UNITYSDK_OFFSET(0x183E90C0)
#define MOLEMOLE_UIACTIVITYSERIESWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x183E8B10)
#define MOLEMOLE_UIACTIVITYSERIESWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x183E92A0)
#define MOLEMOLE_UIACTIVITYSERIESWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x183E9670)
#define MOLEMOLE_UIACTIVITYSERIESWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x183E9700)
#define MOLEMOLE_UIACTIVITYSERIESWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x183E9790)
#define MOLEMOLE_UIACTIVITYSERIESWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x183E9820)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivitySeriesWidgetController_TypeDefinitionIndex = 76564;

	class UIActivitySeriesWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_1CDE5CF24529F662* _view; // 0x2C0
		::Class_1_D375C91CCE5D3999* _rootActivity; // 0x2C8
		::MoleMole::UIActivitySeriesNormalRewardWidgetController* _normalReward1; // 0x2D0
		::MoleMole::UIActivitySeriesNormalRewardWidgetController* _normalReward2; // 0x2D8
		::MoleMole::UIActivitySeriesSpecialRewardWidgetController* _specialReward; // 0x2E0
		::System::Collections::Generic::List_1<::MoleMole::UIActivitySeriesRoleRowWidgetController*>* _roleWidgets; // 0x2E8
		::System::Collections::Generic::List_1<::System::Int32>* _avatarIDs; // 0x2F0
		::System::Collections::Generic::List_1<::System::String*>* _iconPaths; // 0x2F8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSERIESWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSERIESWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSERIESWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSERIESWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSERIESWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSERIESWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this);
		}

		::System::Void InitRewardWidget()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSERIESWIDGETCONTROLLER_INITREWARDWIDGET_OFFSET))(this);
		}

		::System::Void InitRoleWidget()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSERIESWIDGETCONTROLLER_INITROLEWIDGET_OFFSET))(this);
		}

		::System::Void RefreshReward()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSERIESWIDGETCONTROLLER_REFRESHREWARD_OFFSET))(this);
		}

		::System::Void RefreshRole()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSERIESWIDGETCONTROLLER_REFRESHROLE_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSERIESWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSERIESWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSERIESWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSERIESWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
