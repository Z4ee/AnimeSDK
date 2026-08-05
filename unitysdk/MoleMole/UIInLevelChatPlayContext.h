#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIMainCityChatPlayContext.h"

#define MOLEMOLE_UIINLEVELCHATPLAYCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x19625600)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelChatPlayContext_TypeDefinitionIndex = 54212;

	class UIInLevelChatPlayContext : public ::MoleMole::UIMainCityChatPlayContext
	{
	public:
		::System::UInt32 chatEntityID; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELCHATPLAYCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
