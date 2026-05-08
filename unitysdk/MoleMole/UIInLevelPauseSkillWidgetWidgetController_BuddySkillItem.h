#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_9FBDB47166F97B2B.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_UIINLEVELPAUSESKILLWIDGETWIDGETCONTROLLER_BUDDYSKILLITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1608B510)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelPauseSkillWidgetWidgetController_BuddySkillItem_TypeDefinitionIndex = 63176;

	class UIInLevelPauseSkillWidgetWidgetController_BuddySkillItem : public ::System::Object
	{
	public:
		::Enum_3_9FBDB47166F97B2B SkillType; // 0x10

		::System::Void _ctor(::Enum_3_9FBDB47166F97B2B SkillType)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_9FBDB47166F97B2B))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSESKILLWIDGETWIDGETCONTROLLER_BUDDYSKILLITEM__CTOR_OFFSET))(this, SkillType);
		}
	};
}
