#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIACTIVITYMAINTRANSITIONV3ROWCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x12C04E80)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityMainTransitionV3RowContext_TypeDefinitionIndex = 54611;

	class UIActivityMainTransitionV3RowContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYMAINTRANSITIONV3ROWCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
