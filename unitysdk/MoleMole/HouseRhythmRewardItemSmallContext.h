#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_HOUSERHYTHMREWARDITEMSMALLCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1821D690)

namespace MoleMole
{
	inline static constexpr unsigned int HouseRhythmRewardItemSmallContext_TypeDefinitionIndex = 56678;

	class HouseRhythmRewardItemSmallContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOUSERHYTHMREWARDITEMSMALLCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
