#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIBALLGAMEPREPCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x18021070)

namespace MoleMole
{
	inline static constexpr unsigned int UIBallGamePrepContext_TypeDefinitionIndex = 59486;

	class UIBallGamePrepContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEPREPCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
