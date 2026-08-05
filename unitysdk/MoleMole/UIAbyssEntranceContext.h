#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIABYSSENTRANCECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x180B0120)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssEntranceContext_TypeDefinitionIndex = 84465;

	class UIAbyssEntranceContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 CurrQuestID; // 0x28
		::System::Int32 EntranceID; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSENTRANCECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
