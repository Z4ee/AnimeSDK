#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIRABPageBtnRowWidgetController___c__DisplayClass38_0; }

#define MOLEMOLE_UIRABPAGEBTNROWWIDGETCONTROLLER___C__DISPLAYCLASS38_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1578CBC0)
#define MOLEMOLE_UIRABPAGEBTNROWWIDGETCONTROLLER___C__DISPLAYCLASS38_1__REFRESHSTAGEPROGRESS_B__1_OFFSET UNITYSDK_OFFSET(0x1578CBD0)
#define MOLEMOLE_UIRABPAGEBTNROWWIDGETCONTROLLER___C__DISPLAYCLASS38_1__REFRESHSTAGEPROGRESS_B__2_OFFSET UNITYSDK_OFFSET(0x1578CBE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABPageBtnRowWidgetController___c__DisplayClass38_1_TypeDefinitionIndex = 48087;

	class UIRABPageBtnRowWidgetController___c__DisplayClass38_1 : public ::System::Object
	{
	public:
		::MoleMole::UIRABPageBtnRowWidgetController___c__DisplayClass38_0* CS___8__locals1; // 0x10
		::System::Single tweenVal; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABPAGEBTNROWWIDGETCONTROLLER___C__DISPLAYCLASS38_1__CTOR_OFFSET))(this);
		}

		::System::Single _RefreshStageProgress_b__1()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABPAGEBTNROWWIDGETCONTROLLER___C__DISPLAYCLASS38_1__REFRESHSTAGEPROGRESS_B__1_OFFSET))(this);
		}

		::System::Void _RefreshStageProgress_b__2(::System::Single v)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABPAGEBTNROWWIDGETCONTROLLER___C__DISPLAYCLASS38_1__REFRESHSTAGEPROGRESS_B__2_OFFSET))(this, v);
		}
	};
}
