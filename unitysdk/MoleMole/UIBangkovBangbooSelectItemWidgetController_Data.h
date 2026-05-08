#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_623;
template <typename T> class Class_0_16E4307DCC41950C_12;
template <typename T> class Class_0_16E4307DCC41950C_14;

#define MOLEMOLE_UIBANGKOVBANGBOOSELECTITEMWIDGETCONTROLLER_DATA__CTOR_OFFSET UNITYSDK_OFFSET(0x13E4BCB0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangkovBangbooSelectItemWidgetController_Data_TypeDefinitionIndex = 79632;

	class UIBangkovBangbooSelectItemWidgetController_Data : public ::System::Object
	{
	public:
		::Class_2_208CC9941471731A_623* Config; // 0x10
		::Class_0_16E4307DCC41950C_14<::System::Int32>* SelectedIndex; // 0x18
		::Class_0_16E4307DCC41950C_12<::System::Int32>* FocusedIndex; // 0x20
		::System::Boolean IsLocked; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVBANGBOOSELECTITEMWIDGETCONTROLLER_DATA__CTOR_OFFSET))(this);
		}
	};
}
