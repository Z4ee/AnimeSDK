#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_175;
namespace MoleMole { class UIUrbanMapRightWidgetController___c__DisplayClass10_0; }

#define MOLEMOLE_UIURBANMAPRIGHTWIDGETCONTROLLER___C__DISPLAYCLASS10_1__APPLYBANGKOVITEMINFOTOREWARDITEMS_B__0_OFFSET UNITYSDK_OFFSET(0x11E2E2D0)
#define MOLEMOLE_UIURBANMAPRIGHTWIDGETCONTROLLER___C__DISPLAYCLASS10_1__CTOR_OFFSET UNITYSDK_OFFSET(0x11E2E2C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapRightWidgetController___c__DisplayClass10_1_TypeDefinitionIndex = 42797;

	class UIUrbanMapRightWidgetController___c__DisplayClass10_1 : public ::System::Object
	{
	public:
		::MoleMole::UIUrbanMapRightWidgetController___c__DisplayClass10_0* CS___8__locals1; // 0x10
		::System::Int32 itemId; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPRIGHTWIDGETCONTROLLER___C__DISPLAYCLASS10_1__CTOR_OFFSET))(this);
		}

		::System::Void _ApplyBangkovItemInfoToRewardItems_b__0(::Class_0_16E4307DCC419505_175* ctrl)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_175*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPRIGHTWIDGETCONTROLLER___C__DISPLAYCLASS10_1__APPLYBANGKOVITEMINFOTOREWARDITEMS_B__0_OFFSET))(this, ctrl);
		}
	};
}
