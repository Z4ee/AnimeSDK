#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_520;
namespace MoleMole { class UIBaseController; }
namespace MoleMole { class UIHandBookManualWidgetController___c__DisplayClass19_0; }

#define MOLEMOLE_UIHANDBOOKMANUALWIDGETCONTROLLER___C__DISPLAYCLASS19_1__CTOR_OFFSET UNITYSDK_OFFSET(0x15A32080)
#define MOLEMOLE_UIHANDBOOKMANUALWIDGETCONTROLLER___C__DISPLAYCLASS19_1__INITTAB_B__2_OFFSET UNITYSDK_OFFSET(0x15A32090)

namespace MoleMole
{
	inline static constexpr unsigned int UIHandBookManualWidgetController___c__DisplayClass19_1_TypeDefinitionIndex = 70009;

	class UIHandBookManualWidgetController___c__DisplayClass19_1 : public ::System::Object
	{
	public:
		::MoleMole::UIHandBookManualWidgetController___c__DisplayClass19_0* CS___8__locals1; // 0x10
		::Class_2_208CC9941471731A_520* item; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKMANUALWIDGETCONTROLLER___C__DISPLAYCLASS19_1__CTOR_OFFSET))(this);
		}

		::MoleMole::UIBaseController* _InitTab_b__2()
		{
			return ((::MoleMole::UIBaseController*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKMANUALWIDGETCONTROLLER___C__DISPLAYCLASS19_1__INITTAB_B__2_OFFSET))(this);
		}
	};
}
