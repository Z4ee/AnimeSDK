#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIHollowCardUpGradeRowWidgetController.h"

class Class_1_877AA22B04AFB81F_1;
namespace MoleMole { class UIHollowRelicOptionItemWidgetController; }

#define MOLEMOLE_UIHOLLOWRELICUPGRADEROWWIDGETCONTROLLER_CREATEITEMWIDGET_OFFSET UNITYSDK_OFFSET(0x177B33D0)
#define MOLEMOLE_UIHOLLOWRELICUPGRADEROWWIDGETCONTROLLER_REFRESHITEMVIEW_OFFSET UNITYSDK_OFFSET(0x177B34F0)
#define MOLEMOLE_UIHOLLOWRELICUPGRADEROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x177B35A0)
#define MOLEMOLE_UIHOLLOWRELICUPGRADEROWWIDGETCONTROLLER___BASE_CREATEITEMWIDGET_OFFSET UNITYSDK_OFFSET(0x177B35B0)
#define MOLEMOLE_UIHOLLOWRELICUPGRADEROWWIDGETCONTROLLER___BASE_REFRESHITEMVIEW_OFFSET UNITYSDK_OFFSET(0x177B35C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowRelicUpGradeRowWidgetController_TypeDefinitionIndex = 78240;

	class UIHollowRelicUpGradeRowWidgetController : public ::MoleMole::UIHollowCardUpGradeRowWidgetController
	{
	public:
		::MoleMole::UIHollowRelicOptionItemWidgetController* _itemWidget; // 0x300

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRELICUPGRADEROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void CreateItemWidget()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRELICUPGRADEROWWIDGETCONTROLLER_CREATEITEMWIDGET_OFFSET))(this);
		}

		::System::Void RefreshItemView(::Class_1_877AA22B04AFB81F_1* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_877AA22B04AFB81F_1*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRELICUPGRADEROWWIDGETCONTROLLER_REFRESHITEMVIEW_OFFSET))(this, info);
		}

		::System::Void __base_CreateItemWidget()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRELICUPGRADEROWWIDGETCONTROLLER___BASE_CREATEITEMWIDGET_OFFSET))(this);
		}

		::System::Void __base_RefreshItemView(::Class_1_877AA22B04AFB81F_1* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_877AA22B04AFB81F_1*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRELICUPGRADEROWWIDGETCONTROLLER___BASE_REFRESHITEMVIEW_OFFSET))(this, P0);
		}
	};
}
