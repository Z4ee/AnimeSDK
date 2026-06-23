#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"
#include "unitysdk/MoleMole/UIRecommendGroupRowWidgetController_RecommendGroupRowType.h"

class Class_2_12BDE7300F0E061C;
class Class_2_16396D88BA38E0AB_3;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIRecommendTypePropertyRowWidgetController; }
namespace MoleMole { class UIRecommendTypeSuitRowWidgetController; }
namespace MoleMole { template <typename T> class UIRoleEquipRecommendPopContext_1; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIRECOMMENDGROUPROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1821B4C0)
#define MOLEMOLE_UIRECOMMENDGROUPROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1821B550)
#define MOLEMOLE_UIRECOMMENDGROUPROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1821B390)
#define MOLEMOLE_UIRECOMMENDGROUPROWWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1821B3F0)
#define MOLEMOLE_UIRECOMMENDGROUPROWWIDGETCONTROLLER_REFRESHUI_OFFSET UNITYSDK_OFFSET(0x1821BAF0)
#define MOLEMOLE_UIRECOMMENDGROUPROWWIDGETCONTROLLER_REFRESHVIEWFORPROPERTY_OFFSET UNITYSDK_OFFSET(0x1821BD60)
#define MOLEMOLE_UIRECOMMENDGROUPROWWIDGETCONTROLLER_REFRESHVIEWFORSUIT_OFFSET UNITYSDK_OFFSET(0x1821B5D0)
#define MOLEMOLE_UIRECOMMENDGROUPROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1821C360)
#define MOLEMOLE_UIRECOMMENDGROUPROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1821C370)
#define MOLEMOLE_UIRECOMMENDGROUPROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1821C400)
#define MOLEMOLE_UIRECOMMENDGROUPROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1821C490)
#define MOLEMOLE_UIRECOMMENDGROUPROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1821C520)

namespace MoleMole
{
	inline static constexpr unsigned int UIRecommendGroupRowWidgetController_TypeDefinitionIndex = 58804;

	class UIRecommendGroupRowWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_16396D88BA38E0AB_3* _view; // 0x2F0
		::MoleMole::UIRoleEquipRecommendPopContext_1<::Class_2_12BDE7300F0E061C*>* _context; // 0x2F8
		::MoleMole::UIRecommendTypeSuitRowWidgetController* _curOpSuitRowWidgetController; // 0x300
		::MoleMole::UIRecommendTypePropertyRowWidgetController* _curOpPropertyRowWidgetController; // 0x308
		::MoleMole::UIRecommendGroupRowWidgetController_RecommendGroupRowType _recommendType; // 0x310

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECOMMENDGROUPROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECOMMENDGROUPROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECOMMENDGROUPROWWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECOMMENDGROUPROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECOMMENDGROUPROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void RefreshViewForSuit(::System::Action_1<::System::Boolean>* onSuitFocusChange)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECOMMENDGROUPROWWIDGETCONTROLLER_REFRESHVIEWFORSUIT_OFFSET))(this, onSuitFocusChange);
		}

		::System::Void RefreshViewForProperty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECOMMENDGROUPROWWIDGETCONTROLLER_REFRESHVIEWFORPROPERTY_OFFSET))(this);
		}

		::System::Void RefreshUI(::System::Boolean NotEmpty)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECOMMENDGROUPROWWIDGETCONTROLLER_REFRESHUI_OFFSET))(this, NotEmpty);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECOMMENDGROUPROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECOMMENDGROUPROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECOMMENDGROUPROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECOMMENDGROUPROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
