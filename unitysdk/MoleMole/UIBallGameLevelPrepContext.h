#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_CC95A650FCE7BB57.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIBALLGAMELEVELPREPCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x15E5A500)

namespace MoleMole
{
	inline static constexpr unsigned int UIBallGameLevelPrepContext_TypeDefinitionIndex = 65411;

	class UIBallGameLevelPrepContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Enum_3_CC95A650FCE7BB57 levelType; // 0x28
		::System::Int32 selectGameLevelID; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMELEVELPREPCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
