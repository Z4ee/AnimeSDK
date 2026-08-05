#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class String; }

#define MOLEMOLE_UIINLEVELSKILLBUTTONGENERALEFFWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x19852450)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelSkillButtonGeneralEffWidgetController_Context_TypeDefinitionIndex = 84205;

	class UIInLevelSkillButtonGeneralEffWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::String* EffPath; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSKILLBUTTONGENERALEFFWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
