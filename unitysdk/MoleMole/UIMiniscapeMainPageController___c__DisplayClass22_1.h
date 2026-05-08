#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIMiniscapeMainPageController___c__DisplayClass22_0; }

#define MOLEMOLE_UIMINISCAPEMAINPAGECONTROLLER___C__DISPLAYCLASS22_1__CTOR_OFFSET UNITYSDK_OFFSET(0x14D87240)
#define MOLEMOLE_UIMINISCAPEMAINPAGECONTROLLER___C__DISPLAYCLASS22_1__DOPLAYPROGRESSANIM_B__0_OFFSET UNITYSDK_OFFSET(0x14D87250)

namespace MoleMole
{
	inline static constexpr unsigned int UIMiniscapeMainPageController___c__DisplayClass22_1_TypeDefinitionIndex = 39374;

	class UIMiniscapeMainPageController___c__DisplayClass22_1 : public ::System::Object
	{
	public:
		::MoleMole::UIMiniscapeMainPageController___c__DisplayClass22_0* CS___8__locals1; // 0x10
		::System::Single timer; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPEMAINPAGECONTROLLER___C__DISPLAYCLASS22_1__CTOR_OFFSET))(this);
		}

		::System::Void _DoPlayProgressAnim_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPEMAINPAGECONTROLLER___C__DISPLAYCLASS22_1__DOPLAYPROGRESSANIM_B__0_OFFSET))(this);
		}
	};
}
