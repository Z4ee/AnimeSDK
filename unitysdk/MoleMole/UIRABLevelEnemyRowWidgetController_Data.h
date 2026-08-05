#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_33439CEEE9D5DC59;

#define MOLEMOLE_UIRABLEVELENEMYROWWIDGETCONTROLLER_DATA__CTOR_OFFSET UNITYSDK_OFFSET(0x17E2A820)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABLevelEnemyRowWidgetController_Data_TypeDefinitionIndex = 51878;

	class UIRABLevelEnemyRowWidgetController_Data : public ::System::Object
	{
	public:
		::Class_2_33439CEEE9D5DC59* bindData; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABLEVELENEMYROWWIDGETCONTROLLER_DATA__CTOR_OFFSET))(this);
		}
	};
}
