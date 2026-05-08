#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIVOIDFRONTPREPAREPAGECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x11B947E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIVoidFrontPreparePageContext_TypeDefinitionIndex = 49650;

	class UIVoidFrontPreparePageContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Boolean showMainBtn; // 0x28
		::System::Int32 battleId; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVOIDFRONTPREPAREPAGECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
