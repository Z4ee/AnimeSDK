#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_F255A7BB3768DB4A;

#define MOLEMOLE_UIRABENEMYROWWIDGETCONTROLLER_DATA__CTOR_OFFSET UNITYSDK_OFFSET(0x15611D50)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABEnemyRowWidgetController_Data_TypeDefinitionIndex = 46459;

	class UIRABEnemyRowWidgetController_Data : public ::System::Object
	{
	public:
		::Class_2_F255A7BB3768DB4A* bindData; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABENEMYROWWIDGETCONTROLLER_DATA__CTOR_OFFSET))(this);
		}
	};
}
