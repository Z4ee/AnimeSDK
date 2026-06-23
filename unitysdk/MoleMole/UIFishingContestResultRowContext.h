#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_451601B8BB62C38C_2;

#define MOLEMOLE_UIFISHINGCONTESTRESULTROWCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x17A6F0A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIFishingContestResultRowContext_TypeDefinitionIndex = 84154;

	class UIFishingContestResultRowContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_1_451601B8BB62C38C_2* PlayerInfo; // 0x28
		::System::Int32 Sort; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFISHINGCONTESTRESULTROWCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
