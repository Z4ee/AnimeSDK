#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIBPREWARDSELECTCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x163557F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBPRewardSelectContext_TypeDefinitionIndex = 55811;

	class UIBPRewardSelectContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Boolean isFirstOpen; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBPREWARDSELECTCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
