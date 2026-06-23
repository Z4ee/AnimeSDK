#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_DB32C2DBCDB93B06;
class Class_2_77794C962ABD89A9;

#define MOLEMOLE_UIRABSTARUPSKILLWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x14C7F230)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABStarUpSkillWidgetController_Context_TypeDefinitionIndex = 73291;

	class UIRABStarUpSkillWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_1_DB32C2DBCDB93B06* SkillData; // 0x28
		::Class_2_77794C962ABD89A9* FactorData; // 0x30
		::System::Boolean ShowTitle; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABSTARUPSKILLWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
