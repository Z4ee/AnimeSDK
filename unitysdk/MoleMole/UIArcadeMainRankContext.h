#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIARCADEMAINRANKCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x12B4F0C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIArcadeMainRankContext_TypeDefinitionIndex = 72929;

	class UIArcadeMainRankContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::UInt32 GameID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEMAINRANKCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
