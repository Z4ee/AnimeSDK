#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_171;

#define MOLEMOLE_UIVIRUSSTAGEROWWIDGETCONTROLLER_DATA__CTOR_OFFSET UNITYSDK_OFFSET(0x12E9FB60)

namespace MoleMole
{
	inline static constexpr unsigned int UIVirusStageRowWidgetController_Data_TypeDefinitionIndex = 49615;

	class UIVirusStageRowWidgetController_Data : public ::System::Object
	{
	public:
		::Class_2_208CC9941471731A_171* hollowEntranceTemplate; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSSTAGEROWWIDGETCONTROLLER_DATA__CTOR_OFFSET))(this);
		}
	};
}
