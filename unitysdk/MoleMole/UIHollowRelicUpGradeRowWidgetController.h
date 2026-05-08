#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIHollowCardUpGradeRowWidgetController.h"

class Class_1_877AA22B04AFB81F;
namespace MoleMole { class UIHollowRelicOptionItemWidgetController; }

#define MOLEMOLE_UIHOLLOWRELICUPGRADEROWWIDGETCONTROLLER_CREATEITEMWIDGET_OFFSET UNITYSDK_OFFSET(0x14FDCB00)
#define MOLEMOLE_UIHOLLOWRELICUPGRADEROWWIDGETCONTROLLER_REFRESHITEMVIEW_OFFSET UNITYSDK_OFFSET(0x14FDCC20)
#define MOLEMOLE_UIHOLLOWRELICUPGRADEROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x14FDCCD0)
#define MOLEMOLE_UIHOLLOWRELICUPGRADEROWWIDGETCONTROLLER___BASE_CREATEITEMWIDGET_OFFSET UNITYSDK_OFFSET(0x14FDCCE0)
#define MOLEMOLE_UIHOLLOWRELICUPGRADEROWWIDGETCONTROLLER___BASE_REFRESHITEMVIEW_OFFSET UNITYSDK_OFFSET(0x14FDCCF0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowRelicUpGradeRowWidgetController_TypeDefinitionIndex = 51570;

	class UIHollowRelicUpGradeRowWidgetController : public ::MoleMole::UIHollowCardUpGradeRowWidgetController
	{
	public:
		::MoleMole::UIHollowRelicOptionItemWidgetController* _itemWidget; // 0x2F8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRELICUPGRADEROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void CreateItemWidget()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRELICUPGRADEROWWIDGETCONTROLLER_CREATEITEMWIDGET_OFFSET))(this);
		}

		::System::Void RefreshItemView(::Class_1_877AA22B04AFB81F* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_877AA22B04AFB81F*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRELICUPGRADEROWWIDGETCONTROLLER_REFRESHITEMVIEW_OFFSET))(this, info);
		}

		::System::Void __base_CreateItemWidget()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRELICUPGRADEROWWIDGETCONTROLLER___BASE_CREATEITEMWIDGET_OFFSET))(this);
		}

		::System::Void __base_RefreshItemView(::Class_1_877AA22B04AFB81F* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_877AA22B04AFB81F*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRELICUPGRADEROWWIDGETCONTROLLER___BASE_REFRESHITEMVIEW_OFFSET))(this, P0);
		}
	};
}
