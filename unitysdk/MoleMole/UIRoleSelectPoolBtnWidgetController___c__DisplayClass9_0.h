#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIRoleSelectPoolBtnWidgetController; }

#define MOLEMOLE_UIROLESELECTPOOLBTNWIDGETCONTROLLER___C__DISPLAYCLASS9_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15E8A470)
#define MOLEMOLE_UIROLESELECTPOOLBTNWIDGETCONTROLLER___C__DISPLAYCLASS9_0__SETPROGRESSFORGACHATIMES_B__2_OFFSET UNITYSDK_OFFSET(0x15E8A480)
#define MOLEMOLE_UIROLESELECTPOOLBTNWIDGETCONTROLLER___C__DISPLAYCLASS9_0__SETPROGRESSFORGACHATIMES_B__3_OFFSET UNITYSDK_OFFSET(0x15E8A520)

namespace MoleMole
{
	inline static constexpr unsigned int UIRoleSelectPoolBtnWidgetController___c__DisplayClass9_0_TypeDefinitionIndex = 56374;

	class UIRoleSelectPoolBtnWidgetController___c__DisplayClass9_0 : public ::System::Object
	{
	public:
		::MoleMole::UIRoleSelectPoolBtnWidgetController* __4__this; // 0x10
		::System::Single targetProgress; // 0x18
		::System::Single timer; // 0x1C
		::System::Single duration; // 0x20
		::System::Single prvProgress; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPOOLBTNWIDGETCONTROLLER___C__DISPLAYCLASS9_0__CTOR_OFFSET))(this);
		}

		::System::Void _SetProgressForGachaTimes_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPOOLBTNWIDGETCONTROLLER___C__DISPLAYCLASS9_0__SETPROGRESSFORGACHATIMES_B__2_OFFSET))(this);
		}

		::System::Void _SetProgressForGachaTimes_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPOOLBTNWIDGETCONTROLLER___C__DISPLAYCLASS9_0__SETPROGRESSFORGACHATIMES_B__3_OFFSET))(this);
		}
	};
}
