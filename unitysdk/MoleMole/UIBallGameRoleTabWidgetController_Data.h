#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_20CC0FB79642CF22;
template <typename T> class Class_0_16E4307DCC419505_164;

#define MOLEMOLE_UIBALLGAMEROLETABWIDGETCONTROLLER_DATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1A63A360)

namespace MoleMole
{
	inline static constexpr unsigned int UIBallGameRoleTabWidgetController_Data_TypeDefinitionIndex = 76063;

	class UIBallGameRoleTabWidgetController_Data : public ::System::Object
	{
	public:
		::Class_0_16E4307DCC419505_164<::System::Int32>* CurrentSelectedIndex; // 0x10
		::Class_2_20CC0FB79642CF22* Config; // 0x18
		::System::Int32 Index; // 0x20
		::System::Boolean IsLocked; // 0x24
		::System::Boolean IsRecommend; // 0x25

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEROLETABWIDGETCONTROLLER_DATA__CTOR_OFFSET))(this);
		}
	};
}
