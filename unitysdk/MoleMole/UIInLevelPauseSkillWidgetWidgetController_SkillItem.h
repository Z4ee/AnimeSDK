#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Share/EAvatarSkillType.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_UIINLEVELPAUSESKILLWIDGETWIDGETCONTROLLER_SKILLITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x188BFB10)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelPauseSkillWidgetWidgetController_SkillItem_TypeDefinitionIndex = 84672;

	class UIInLevelPauseSkillWidgetWidgetController_SkillItem : public ::System::Object
	{
	public:
		::Share::EAvatarSkillType SkillType; // 0x10

		::System::Void _ctor(::Share::EAvatarSkillType SkillType)
		{
			return ((::System::Void(*)(::PVOID, ::Share::EAvatarSkillType))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSESKILLWIDGETWIDGETCONTROLLER_SKILLITEM__CTOR_OFFSET))(this, SkillType);
		}
	};
}
