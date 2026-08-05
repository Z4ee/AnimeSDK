#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UITRANINGREWARDDIALOGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x16783680)

namespace MoleMole
{
	inline static constexpr unsigned int UITraningRewardDialogContext_TypeDefinitionIndex = 55060;

	class UITraningRewardDialogContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRANINGREWARDDIALOGCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
