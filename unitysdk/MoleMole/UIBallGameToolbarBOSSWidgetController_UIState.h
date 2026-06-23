#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C331A5DC726F030A.h"

class Class_3_01B4CC30216C9ABE_1;
template <typename T> class Class_0_16E4307DCC419505_165;

#define MOLEMOLE_UIBALLGAMETOOLBARBOSSWIDGETCONTROLLER_UISTATE_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x1DDF2190)
#define MOLEMOLE_UIBALLGAMETOOLBARBOSSWIDGETCONTROLLER_UISTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1DDF2260)

namespace MoleMole
{
	inline static constexpr unsigned int UIBallGameToolbarBOSSWidgetController_UIState_TypeDefinitionIndex = 89384;

	class UIBallGameToolbarBOSSWidgetController_UIState : public ::Class_1_C331A5DC726F030A
	{
	public:
		::Class_0_16E4307DCC419505_165<::System::UInt32>* EntityID; // 0x60
		::Class_0_16E4307DCC419505_165<::Class_3_01B4CC30216C9ABE_1*>* Monster; // 0x68
		::Class_0_16E4307DCC419505_165<::System::Single>* CurHp; // 0x70
		::Class_0_16E4307DCC419505_165<::System::Single>* MaxHp; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMETOOLBARBOSSWIDGETCONTROLLER_UISTATE__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateProperty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMETOOLBARBOSSWIDGETCONTROLLER_UISTATE_ONCREATEPROPERTY_OFFSET))(this);
		}
	};
}
