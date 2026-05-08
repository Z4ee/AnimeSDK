#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_9FBDB47166F97B2B.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_UIINLEVELPAUSEBANGBOOSKILLWIDGETWIDGETCONTROLLER_BUDDYSKILLITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x150DCD30)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelPauseBangbooSkillWidgetWidgetController_BuddySkillItem_TypeDefinitionIndex = 78047;

	class UIInLevelPauseBangbooSkillWidgetWidgetController_BuddySkillItem : public ::System::Object
	{
	public:
		::Enum_3_9FBDB47166F97B2B SkillType; // 0x10

		::System::Void _ctor(::Enum_3_9FBDB47166F97B2B SkillType)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_9FBDB47166F97B2B))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSEBANGBOOSKILLWIDGETWIDGETCONTROLLER_BUDDYSKILLITEM__CTOR_OFFSET))(this, SkillType);
		}
	};
}
