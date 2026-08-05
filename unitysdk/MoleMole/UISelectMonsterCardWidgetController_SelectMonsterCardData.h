#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_86AA8F306FA75018;

#define MOLEMOLE_UISELECTMONSTERCARDWIDGETCONTROLLER_SELECTMONSTERCARDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1675F480)

namespace MoleMole
{
	inline static constexpr unsigned int UISelectMonsterCardWidgetController_SelectMonsterCardData_TypeDefinitionIndex = 88491;

	class UISelectMonsterCardWidgetController_SelectMonsterCardData : public ::System::Object
	{
	public:
		::Class_1_86AA8F306FA75018* monsterCardSummary; // 0x10
		::System::Int32 caffBuffTipsID; // 0x18
		::System::Int32 overrideRewardID; // 0x1C
		::System::Boolean checkLevelMatch; // 0x20
		::System::Boolean enableNew; // 0x21
		::System::Boolean refreshSelectState; // 0x22
		::System::Int32 rewardLevelId; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISELECTMONSTERCARDWIDGETCONTROLLER_SELECTMONSTERCARDDATA__CTOR_OFFSET))(this);
		}
	};
}
