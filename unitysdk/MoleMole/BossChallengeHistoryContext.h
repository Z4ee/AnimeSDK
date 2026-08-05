#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DB663931210BBC27_38.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_BOSSCHALLENGEHISTORYCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xF11DFD0)

namespace MoleMole
{
	inline static constexpr unsigned int BossChallengeHistoryContext_TypeDefinitionIndex = 69837;

	class BossChallengeHistoryContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Enum_3_DB663931210BBC27_38 InitialPlayType; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BOSSCHALLENGEHISTORYCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
