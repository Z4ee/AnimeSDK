#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIZenkovDelegateBoardPageController; }

#define MOLEMOLE_UIZENKOVDELEGATEBOARDPAGECONTROLLER___C__DISPLAYCLASS19_0__CTOR_OFFSET UNITYSDK_OFFSET(0x11C2ABE0)
#define MOLEMOLE_UIZENKOVDELEGATEBOARDPAGECONTROLLER___C__DISPLAYCLASS19_0__ONCLICKHANDIN_B__1_OFFSET UNITYSDK_OFFSET(0x11C2ABF0)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovDelegateBoardPageController___c__DisplayClass19_0_TypeDefinitionIndex = 88478;

	class UIZenkovDelegateBoardPageController___c__DisplayClass19_0 : public ::System::Object
	{
	public:
		::MoleMole::UIZenkovDelegateBoardPageController* __4__this; // 0x10
		::System::UInt32 selectedQuestId; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVDELEGATEBOARDPAGECONTROLLER___C__DISPLAYCLASS19_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnClickHandIn_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVDELEGATEBOARDPAGECONTROLLER___C__DISPLAYCLASS19_0__ONCLICKHANDIN_B__1_OFFSET))(this);
		}
	};
}
