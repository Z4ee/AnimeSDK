#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_CINEMASINGLEBUBBLESCORECHANGECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x17D0EBE0)

namespace MoleMole
{
	inline static constexpr unsigned int CinemaSingleBubbleScoreChangeContext_TypeDefinitionIndex = 45204;

	class CinemaSingleBubbleScoreChangeContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Single multiplier; // 0x28
		::System::Boolean isInFever; // 0x2C
		::System::Int32 basicScoreChange; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CINEMASINGLEBUBBLESCORECHANGECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
