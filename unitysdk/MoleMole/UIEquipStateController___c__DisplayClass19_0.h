#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIEquipStateController; }

#define MOLEMOLE_UIEQUIPSTATECONTROLLER___C__DISPLAYCLASS19_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18AB5D90)
#define MOLEMOLE_UIEQUIPSTATECONTROLLER___C__DISPLAYCLASS19_0__TOGGLELOCK_B__0_OFFSET UNITYSDK_OFFSET(0x18AB5DA0)
#define MOLEMOLE_UIEQUIPSTATECONTROLLER___C__DISPLAYCLASS19_0__TOGGLELOCK_B__1_OFFSET UNITYSDK_OFFSET(0x18AB5E00)

namespace MoleMole
{
	inline static constexpr unsigned int UIEquipStateController___c__DisplayClass19_0_TypeDefinitionIndex = 74703;

	class UIEquipStateController___c__DisplayClass19_0 : public ::System::Object
	{
	public:
		::MoleMole::UIEquipStateController* __4__this; // 0x10
		::System::Boolean isLock; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPSTATECONTROLLER___C__DISPLAYCLASS19_0__CTOR_OFFSET))(this);
		}

		::System::Void _ToggleLock_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPSTATECONTROLLER___C__DISPLAYCLASS19_0__TOGGLELOCK_B__0_OFFSET))(this);
		}

		::System::Void _ToggleLock_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPSTATECONTROLLER___C__DISPLAYCLASS19_0__TOGGLELOCK_B__1_OFFSET))(this);
		}
	};
}
