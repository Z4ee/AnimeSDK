#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UISUMMERTIDETREASUREROLEROWWIDGETCONTROLLER_DATA__CTOR_OFFSET UNITYSDK_OFFSET(0x151AECD0)

namespace MoleMole
{
	inline static constexpr unsigned int UISummerTideTreasureRoleRowWidgetController_Data_TypeDefinitionIndex = 51123;

	class UISummerTideTreasureRoleRowWidgetController_Data : public ::System::Object
	{
	public:
		::System::Action_1<::System::Int32>* OnClick; // 0x10
		::System::Int32 SpecialDataConfigId; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDETREASUREROLEROWWIDGETCONTROLLER_DATA__CTOR_OFFSET))(this);
		}
	};
}
