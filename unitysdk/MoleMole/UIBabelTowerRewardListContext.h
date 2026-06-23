#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIBABELTOWERREWARDLISTCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x175A3DA0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBabelTowerRewardListContext_TypeDefinitionIndex = 48490;

	class UIBabelTowerRewardListContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 towerid; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERREWARDLISTCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
