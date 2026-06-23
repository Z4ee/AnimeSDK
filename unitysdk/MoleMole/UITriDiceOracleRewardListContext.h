#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UITRIDICEORACLEREWARDLISTCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x15C3E9C0)

namespace MoleMole
{
	inline static constexpr unsigned int UITriDiceOracleRewardListContext_TypeDefinitionIndex = 74963;

	class UITriDiceOracleRewardListContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIDICEORACLEREWARDLISTCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
