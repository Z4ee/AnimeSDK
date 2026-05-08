#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UILineupSelectPageController___c__DisplayClass27_0; }
namespace MoleMole { class UIRoleSelectPageContext; }

#define MOLEMOLE_UILINEUPSELECTPAGECONTROLLER___C__DISPLAYCLASS27_1__BINDMULTIPLAYADDBUTTONCLICK_B__1_OFFSET UNITYSDK_OFFSET(0x1642F8A0)
#define MOLEMOLE_UILINEUPSELECTPAGECONTROLLER___C__DISPLAYCLASS27_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1642F890)

namespace MoleMole
{
	inline static constexpr unsigned int UILineupSelectPageController___c__DisplayClass27_1_TypeDefinitionIndex = 56019;

	class UILineupSelectPageController___c__DisplayClass27_1 : public ::System::Object
	{
	public:
		::MoleMole::UIRoleSelectPageContext* roleInfoPageContext; // 0x10
		::MoleMole::UILineupSelectPageController___c__DisplayClass27_0* CS___8__locals1; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTPAGECONTROLLER___C__DISPLAYCLASS27_1__CTOR_OFFSET))(this);
		}

		::System::Void _BindMultiPlayAddButtonClick_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTPAGECONTROLLER___C__DISPLAYCLASS27_1__BINDMULTIPLAYADDBUTTONCLICK_B__1_OFFSET))(this);
		}
	};
}
