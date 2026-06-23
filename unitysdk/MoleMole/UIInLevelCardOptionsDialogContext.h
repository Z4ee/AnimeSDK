#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIHollowCardOptionsDialogContext.h"

class Class_1_30B5C90E1DE871A0;

#define MOLEMOLE_UIINLEVELCARDOPTIONSDIALOGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x167D2370)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelCardOptionsDialogContext_TypeDefinitionIndex = 50995;

	class UIInLevelCardOptionsDialogContext : public ::MoleMole::UIHollowCardOptionsDialogContext
	{
	public:
		::Class_1_30B5C90E1DE871A0* InLevelOptionsCardChoiceData; // 0xE0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELCARDOPTIONSDIALOGCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
