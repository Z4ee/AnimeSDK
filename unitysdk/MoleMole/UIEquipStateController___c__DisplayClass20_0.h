#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_3B1E761D184CCDAF;
namespace MoleMole { class UIEquipStateController; }

#define MOLEMOLE_UIEQUIPSTATECONTROLLER___C__DISPLAYCLASS20_0__CTOR_OFFSET UNITYSDK_OFFSET(0x157DFCA0)
#define MOLEMOLE_UIEQUIPSTATECONTROLLER___C__DISPLAYCLASS20_0__TOGGLEDELETE_B__0_OFFSET UNITYSDK_OFFSET(0x157DFCB0)

namespace MoleMole
{
	inline static constexpr unsigned int UIEquipStateController___c__DisplayClass20_0_TypeDefinitionIndex = 67839;

	class UIEquipStateController___c__DisplayClass20_0 : public ::System::Object
	{
	public:
		::Class_2_3B1E761D184CCDAF* equip; // 0x10
		::MoleMole::UIEquipStateController* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPSTATECONTROLLER___C__DISPLAYCLASS20_0__CTOR_OFFSET))(this);
		}

		::System::Void _ToggleDelete_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPSTATECONTROLLER___C__DISPLAYCLASS20_0__TOGGLEDELETE_B__0_OFFSET))(this);
		}
	};
}
