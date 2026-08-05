#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_33439CEEE9D5DC59;

#define MOLEMOLE_UIRABENEMYROWWIDGETCONTROLLER_DATA__CTOR_OFFSET UNITYSDK_OFFSET(0x16A7F270)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABEnemyRowWidgetController_Data_TypeDefinitionIndex = 68278;

	class UIRABEnemyRowWidgetController_Data : public ::System::Object
	{
	public:
		::Class_2_33439CEEE9D5DC59* bindData; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABENEMYROWWIDGETCONTROLLER_DATA__CTOR_OFFSET))(this);
		}
	};
}
