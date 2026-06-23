#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIMONSTERFANTASYMAINLEVELROWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x178C0640)

namespace MoleMole
{
	inline static constexpr unsigned int UIMonsterFantasyMainLevelRowWidgetController_Context_TypeDefinitionIndex = 80892;

	class UIMonsterFantasyMainLevelRowWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Boolean IsLastLevel; // 0x28
		::System::Boolean IsChallengeChapter; // 0x29
		::System::Boolean IsLastUnlock; // 0x2A
		::System::Int32 DataIndex; // 0x2C
		::System::Int32 LevelId; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYMAINLEVELROWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
