#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIItemIconBtnWidgetController; }
namespace MoleMole { class UIUrbanMapRightWidgetController___c__DisplayClass9_0; }

#define MOLEMOLE_UIURBANMAPRIGHTWIDGETCONTROLLER___C__DISPLAYCLASS9_1__APPLYBANGKOVITEMINFOTOREWARDITEMS_B__0_OFFSET UNITYSDK_OFFSET(0x156D7280)
#define MOLEMOLE_UIURBANMAPRIGHTWIDGETCONTROLLER___C__DISPLAYCLASS9_1__CTOR_OFFSET UNITYSDK_OFFSET(0x156D7270)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapRightWidgetController___c__DisplayClass9_1_TypeDefinitionIndex = 82054;

	class UIUrbanMapRightWidgetController___c__DisplayClass9_1 : public ::System::Object
	{
	public:
		::MoleMole::UIUrbanMapRightWidgetController___c__DisplayClass9_0* CS___8__locals1; // 0x10
		::System::Int32 itemId; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPRIGHTWIDGETCONTROLLER___C__DISPLAYCLASS9_1__CTOR_OFFSET))(this);
		}

		::System::Void _ApplyBangkovItemInfoToRewardItems_b__0(::MoleMole::UIItemIconBtnWidgetController* ctrl)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIItemIconBtnWidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPRIGHTWIDGETCONTROLLER___C__DISPLAYCLASS9_1__APPLYBANGKOVITEMINFOTOREWARDITEMS_B__0_OFFSET))(this, ctrl);
		}
	};
}
