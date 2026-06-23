#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIWORKBENCHTRUSTLEVELREWARDDIALOGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x139D1CE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIWorkBenchTrustLevelRewardDialogContext_TypeDefinitionIndex = 77656;

	class UIWorkBenchTrustLevelRewardDialogContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Boolean AllowBack; // 0x28
		::System::Int32 PartnerID; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHTRUSTLEVELREWARDDIALOGCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
