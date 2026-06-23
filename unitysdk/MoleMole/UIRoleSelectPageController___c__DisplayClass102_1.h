#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGeneralTipsPopWindowController; }
namespace MoleMole { class UIRoleSelectPageController___c__DisplayClass102_0; }

#define MOLEMOLE_UIROLESELECTPAGECONTROLLER___C__DISPLAYCLASS102_1__CTOR_OFFSET UNITYSDK_OFFSET(0x13814540)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER___C__DISPLAYCLASS102_1__ONFAVORITEBTNCLICKED_B__0_OFFSET UNITYSDK_OFFSET(0x13814550)

namespace MoleMole
{
	inline static constexpr unsigned int UIRoleSelectPageController___c__DisplayClass102_1_TypeDefinitionIndex = 76900;

	class UIRoleSelectPageController___c__DisplayClass102_1 : public ::System::Object
	{
	public:
		::MoleMole::UIRoleSelectPageController___c__DisplayClass102_0* CS___8__locals1; // 0x10
		::MoleMole::UIGeneralTipsPopWindowController* ctrl; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER___C__DISPLAYCLASS102_1__CTOR_OFFSET))(this);
		}

		::System::Void _OnFavoriteBtnClicked_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER___C__DISPLAYCLASS102_1__ONFAVORITEBTNCLICKED_B__0_OFFSET))(this);
		}
	};
}
