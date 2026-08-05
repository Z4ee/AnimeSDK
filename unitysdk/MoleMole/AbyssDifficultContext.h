#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_7EA3F9477E892234.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_ABYSSDIFFICULTCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x12A11A50)

namespace MoleMole
{
	inline static constexpr unsigned int AbyssDifficultContext_TypeDefinitionIndex = 71982;

	class AbyssDifficultContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 EntranceId; // 0x28
		::Enum_3_7EA3F9477E892234 AutoEntranceType; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ABYSSDIFFICULTCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
