#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C4AD88BFF83D12C6;
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UISUMMERTIDETREASURESELLPREPAREROWWIDGETCONTROLLER_DATA__CTOR_OFFSET UNITYSDK_OFFSET(0x119F9D60)

namespace MoleMole
{
	inline static constexpr unsigned int UISummerTideTreasureSellPrepareRowWidgetController_Data_TypeDefinitionIndex = 63057;

	class UISummerTideTreasureSellPrepareRowWidgetController_Data : public ::System::Object
	{
	public:
		::Class_1_C4AD88BFF83D12C6* Config; // 0x10
		::System::Action_1<::MoleMole::UISummerTideTreasureSellPrepareRowWidgetController_Data*>* OnClick; // 0x18
		::System::Func_2<::MoleMole::UISummerTideTreasureSellPrepareRowWidgetController_Data*, ::System::Boolean>* CanSelect; // 0x20
		::System::Func_2<::MoleMole::UISummerTideTreasureSellPrepareRowWidgetController_Data*, ::System::Boolean>* IsSelect; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDETREASURESELLPREPAREROWWIDGETCONTROLLER_DATA__CTOR_OFFSET))(this);
		}
	};
}
