#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIZenkovDelegateBoardPageController; }

#define MOLEMOLE_UIZENKOVDELEGATEBOARDPAGECONTROLLER___C__DISPLAYCLASS7_1__CTOR_OFFSET UNITYSDK_OFFSET(0x15B0D840)
#define MOLEMOLE_UIZENKOVDELEGATEBOARDPAGECONTROLLER___C__DISPLAYCLASS7_1__REFRESHHANDIN_B__1_OFFSET UNITYSDK_OFFSET(0x15B0D850)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovDelegateBoardPageController___c__DisplayClass7_1_TypeDefinitionIndex = 88483;

	class UIZenkovDelegateBoardPageController___c__DisplayClass7_1 : public ::System::Object
	{
	public:
		::MoleMole::UIZenkovDelegateBoardPageController* __4__this; // 0x10
		::System::Int32 tipId; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVDELEGATEBOARDPAGECONTROLLER___C__DISPLAYCLASS7_1__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshHandIn_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVDELEGATEBOARDPAGECONTROLLER___C__DISPLAYCLASS7_1__REFRESHHANDIN_B__1_OFFSET))(this);
		}
	};
}
