#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIABYSSS2ROLECHALLENGECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1926C4C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssS2RoleChallengeContext_TypeDefinitionIndex = 88544;

	class UIAbyssS2RoleChallengeContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 QuestID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2ROLECHALLENGECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
