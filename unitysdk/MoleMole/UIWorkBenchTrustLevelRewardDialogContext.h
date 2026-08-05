#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIWORKBENCHTRUSTLEVELREWARDDIALOGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x162DEBC0)

namespace MoleMole
{
	inline static constexpr unsigned int UIWorkBenchTrustLevelRewardDialogContext_TypeDefinitionIndex = 79769;

	class UIWorkBenchTrustLevelRewardDialogContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 PartnerID; // 0x28
		::System::Boolean AllowBack; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHTRUSTLEVELREWARDDIALOGCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
