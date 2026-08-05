#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIMONSTERFANTASYMAINLEVELROWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x18342DD0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMonsterFantasyMainLevelRowWidgetController_Context_TypeDefinitionIndex = 67232;

	class UIMonsterFantasyMainLevelRowWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 LevelId; // 0x28
		::System::Boolean IsLastLevel; // 0x2C
		::System::Boolean IsChallengeChapter; // 0x2D
		::System::Boolean IsLastUnlock; // 0x2E
		::System::Int32 DataIndex; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYMAINLEVELROWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
