#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_162;

#define MOLEMOLE_UICOOPTEACHTABWIDGETCONTROLLER_DATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1565F020)

namespace MoleMole
{
	inline static constexpr unsigned int UICoopTeachTabWidgetController_Data_TypeDefinitionIndex = 41004;

	class UICoopTeachTabWidgetController_Data : public ::System::Object
	{
	public:
		::Class_2_208CC9941471731A_162* QuestCfg; // 0x10
		::System::Int32 TabIndex; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPTEACHTABWIDGETCONTROLLER_DATA__CTOR_OFFSET))(this);
		}
	};
}
