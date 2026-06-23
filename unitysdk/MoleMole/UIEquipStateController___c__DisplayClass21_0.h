#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIEquipStateController; }

#define MOLEMOLE_UIEQUIPSTATECONTROLLER___C__DISPLAYCLASS21_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17708610)
#define MOLEMOLE_UIEQUIPSTATECONTROLLER___C__DISPLAYCLASS21_0__REALDELETE_B__0_OFFSET UNITYSDK_OFFSET(0x17708620)

namespace MoleMole
{
	inline static constexpr unsigned int UIEquipStateController___c__DisplayClass21_0_TypeDefinitionIndex = 46192;

	class UIEquipStateController___c__DisplayClass21_0 : public ::System::Object
	{
	public:
		::MoleMole::UIEquipStateController* __4__this; // 0x10
		::System::Boolean isTrash; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPSTATECONTROLLER___C__DISPLAYCLASS21_0__CTOR_OFFSET))(this);
		}

		::System::Void _RealDelete_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPSTATECONTROLLER___C__DISPLAYCLASS21_0__REALDELETE_B__0_OFFSET))(this);
		}
	};
}
