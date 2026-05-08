#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIFriendCardContext.h"

#define MOLEMOLE_UIINLEVELFRIENDCARDCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x15FB6690)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelFriendCardContext_TypeDefinitionIndex = 58393;

	class UIInLevelFriendCardContext : public ::MoleMole::UIFriendCardContext
	{
	public:
		::System::Boolean isFakePlayer; // 0x60
		::System::Boolean isMainPlayer; // 0x61
		::System::UInt32 teamIndex; // 0x64

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELFRIENDCARDCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
