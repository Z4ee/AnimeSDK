#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIACTIVITYEXCHANGEDIALOGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x173D1860)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityExchangeDialogContext_TypeDefinitionIndex = 82784;

	class UIActivityExchangeDialogContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::UInt32 ActivityID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYEXCHANGEDIALOGCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
