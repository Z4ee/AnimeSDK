#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Share/EAvatarSkillType.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_UIINLEVELPAUSETALENTLWIDGETCONTROLLER_SKILLITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1639B9E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelPauseTalentlWidgetController_SkillItem_TypeDefinitionIndex = 53063;

	class UIInLevelPauseTalentlWidgetController_SkillItem : public ::System::Object
	{
	public:
		::Share::EAvatarSkillType SkillType; // 0x10

		::System::Void _ctor(::Share::EAvatarSkillType SkillType)
		{
			return ((::System::Void(*)(::PVOID, ::Share::EAvatarSkillType))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSETALENTLWIDGETCONTROLLER_SKILLITEM__CTOR_OFFSET))(this, SkillType);
		}
	};
}
