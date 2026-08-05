#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIMainStoryPageController; }
namespace MoleMole { class UIMainStoryRow03ChildWindowController; }

#define MOLEMOLE_UIMAINSTORYPAGECONTROLLER___C__DISPLAYCLASS22_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17451360)
#define MOLEMOLE_UIMAINSTORYPAGECONTROLLER___C__DISPLAYCLASS22_0__INITLEVEL_B__2_OFFSET UNITYSDK_OFFSET(0x17451370)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainStoryPageController___c__DisplayClass22_0_TypeDefinitionIndex = 84561;

	class UIMainStoryPageController___c__DisplayClass22_0 : public ::System::Object
	{
	public:
		::MoleMole::UIMainStoryRow03ChildWindowController* ctrl; // 0x10
		::MoleMole::UIMainStoryPageController* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPAGECONTROLLER___C__DISPLAYCLASS22_0__CTOR_OFFSET))(this);
		}

		::System::Void _InitLevel_b__2(::System::Int32 templateid)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPAGECONTROLLER___C__DISPLAYCLASS22_0__INITLEVEL_B__2_OFFSET))(this, templateid);
		}
	};
}
