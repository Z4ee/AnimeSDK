#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIMONSTERFANTASYMAINLEVELPAGECONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1610B8C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMonsterFantasyMainLevelPageController_Context_TypeDefinitionIndex = 41416;

	class UIMonsterFantasyMainLevelPageController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 ReturnToLevelId; // 0x28
		::System::Boolean IsChallengePage; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYMAINLEVELPAGECONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
