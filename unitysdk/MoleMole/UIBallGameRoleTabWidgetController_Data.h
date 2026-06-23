#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_94036B70F94D68D4;
template <typename T> class Class_0_16E4307DCC419505_153;

#define MOLEMOLE_UIBALLGAMEROLETABWIDGETCONTROLLER_DATA__CTOR_OFFSET UNITYSDK_OFFSET(0x18A61860)

namespace MoleMole
{
	inline static constexpr unsigned int UIBallGameRoleTabWidgetController_Data_TypeDefinitionIndex = 64760;

	class UIBallGameRoleTabWidgetController_Data : public ::System::Object
	{
	public:
		::Class_2_94036B70F94D68D4* Config; // 0x10
		::Class_0_16E4307DCC419505_153<::System::Int32>* CurrentSelectedIndex; // 0x18
		::System::Boolean IsRecommend; // 0x20
		::System::Boolean IsLocked; // 0x21
		::System::Int32 Index; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEROLETABWIDGETCONTROLLER_DATA__CTOR_OFFSET))(this);
		}
	};
}
