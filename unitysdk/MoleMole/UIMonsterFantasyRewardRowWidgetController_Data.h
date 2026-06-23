#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_481;

#define MOLEMOLE_UIMONSTERFANTASYREWARDROWWIDGETCONTROLLER_DATA__CTOR_OFFSET UNITYSDK_OFFSET(0x16945BA0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMonsterFantasyRewardRowWidgetController_Data_TypeDefinitionIndex = 72836;

	class UIMonsterFantasyRewardRowWidgetController_Data : public ::System::Object
	{
	public:
		::Class_2_208CC9941471731A_481* Template; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYREWARDROWWIDGETCONTROLLER_DATA__CTOR_OFFSET))(this);
		}
	};
}
