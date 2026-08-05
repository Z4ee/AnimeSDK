#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_724;
template <typename T> class Class_0_16E4307DCC419505_164;
template <typename T> class Class_0_16E4307DCC41950C_14;

#define MOLEMOLE_UIBANGKOVBANGBOOSELECTITEMWIDGETCONTROLLER_DATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1930FD10)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangkovBangbooSelectItemWidgetController_Data_TypeDefinitionIndex = 44949;

	class UIBangkovBangbooSelectItemWidgetController_Data : public ::System::Object
	{
	public:
		::Class_0_16E4307DCC419505_164<::System::Int32>* FocusedIndex; // 0x10
		::Class_0_16E4307DCC41950C_14<::System::Int32>* SelectedIndex; // 0x18
		::Class_2_208CC9941471731A_724* Config; // 0x20
		::System::Boolean IsLocked; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVBANGBOOSELECTITEMWIDGETCONTROLLER_DATA__CTOR_OFFSET))(this);
		}
	};
}
