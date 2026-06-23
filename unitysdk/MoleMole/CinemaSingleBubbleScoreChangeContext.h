#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_CINEMASINGLEBUBBLESCORECHANGECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A054DF0)

namespace MoleMole
{
	inline static constexpr unsigned int CinemaSingleBubbleScoreChangeContext_TypeDefinitionIndex = 42474;

	class CinemaSingleBubbleScoreChangeContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 basicScoreChange; // 0x28
		::System::Boolean isInFever; // 0x2C
		::System::Single multiplier; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CINEMASINGLEBUBBLESCORECHANGECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
