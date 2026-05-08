#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_AF4036FBC298303A;
namespace MoleMole { class UIFlowerMainListWidgetController_Data; }
namespace MoleMole { class UIFlowerMain_RightWidgetController; }

#define MOLEMOLE_UIFLOWERMAIN_RIGHTWIDGETCONTROLLER___C__DISPLAYCLASS21_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16CC45F0)
#define MOLEMOLE_UIFLOWERMAIN_RIGHTWIDGETCONTROLLER___C__DISPLAYCLASS21_0__REFRESHSCROLLVIEWDATA_B__0_OFFSET UNITYSDK_OFFSET(0x16CC4600)
#define MOLEMOLE_UIFLOWERMAIN_RIGHTWIDGETCONTROLLER___C__DISPLAYCLASS21_0__REFRESHSCROLLVIEWDATA_B__1_OFFSET UNITYSDK_OFFSET(0x16CC47A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIFlowerMain_RightWidgetController___c__DisplayClass21_0_TypeDefinitionIndex = 77226;

	class UIFlowerMain_RightWidgetController___c__DisplayClass21_0 : public ::System::Object
	{
	public:
		::Class_2_AF4036FBC298303A* currentSelectFlowerFeatureData; // 0x10
		::MoleMole::UIFlowerMain_RightWidgetController* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAIN_RIGHTWIDGETCONTROLLER___C__DISPLAYCLASS21_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _RefreshScrollViewData_b__0(::Class_2_AF4036FBC298303A* flowerData)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_2_AF4036FBC298303A*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAIN_RIGHTWIDGETCONTROLLER___C__DISPLAYCLASS21_0__REFRESHSCROLLVIEWDATA_B__0_OFFSET))(this, flowerData);
		}

		::MoleMole::UIFlowerMainListWidgetController_Data* _RefreshScrollViewData_b__1(::Class_2_AF4036FBC298303A* flowerData)
		{
			return ((::MoleMole::UIFlowerMainListWidgetController_Data*(*)(::PVOID, ::Class_2_AF4036FBC298303A*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAIN_RIGHTWIDGETCONTROLLER___C__DISPLAYCLASS21_0__REFRESHSCROLLVIEWDATA_B__1_OFFSET))(this, flowerData);
		}
	};
}
