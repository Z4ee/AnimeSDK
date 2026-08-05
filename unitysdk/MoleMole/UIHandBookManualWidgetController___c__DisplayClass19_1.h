#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_917;
namespace MoleMole { class UIBaseController; }
namespace MoleMole { class UIHandBookManualWidgetController___c__DisplayClass19_0; }

#define MOLEMOLE_UIHANDBOOKMANUALWIDGETCONTROLLER___C__DISPLAYCLASS19_1__CTOR_OFFSET UNITYSDK_OFFSET(0x18AF8990)
#define MOLEMOLE_UIHANDBOOKMANUALWIDGETCONTROLLER___C__DISPLAYCLASS19_1__INITTAB_B__2_OFFSET UNITYSDK_OFFSET(0x18AF89A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHandBookManualWidgetController___c__DisplayClass19_1_TypeDefinitionIndex = 81343;

	class UIHandBookManualWidgetController___c__DisplayClass19_1 : public ::System::Object
	{
	public:
		::Class_2_208CC9941471731A_917* item; // 0x10
		::MoleMole::UIHandBookManualWidgetController___c__DisplayClass19_0* CS___8__locals1; // 0x18

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
