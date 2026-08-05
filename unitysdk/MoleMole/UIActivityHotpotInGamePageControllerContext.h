#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIACTIVITYHOTPOTINGAMEPAGECONTROLLERCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x18BD4670)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityHotpotInGamePageControllerContext_TypeDefinitionIndex = 48288;

	class UIActivityHotpotInGamePageControllerContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 GeneralLevelID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTINGAMEPAGECONTROLLERCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
