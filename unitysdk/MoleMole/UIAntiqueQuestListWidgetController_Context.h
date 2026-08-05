#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIANTIQUEQUESTLISTWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x196F59B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIAntiqueQuestListWidgetController_Context_TypeDefinitionIndex = 41954;

	class UIAntiqueQuestListWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIANTIQUEQUESTLISTWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
