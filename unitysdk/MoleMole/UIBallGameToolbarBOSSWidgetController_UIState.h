#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F5ACAAB9AA1EB49.h"

class Class_3_01B4CC30216C9ABE_2;
template <typename T> class Class_0_16E4307DCC419505_159;

#define MOLEMOLE_UIBALLGAMETOOLBARBOSSWIDGETCONTROLLER_UISTATE_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x1E63A190)
#define MOLEMOLE_UIBALLGAMETOOLBARBOSSWIDGETCONTROLLER_UISTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E63A270)

namespace MoleMole
{
	inline static constexpr unsigned int UIBallGameToolbarBOSSWidgetController_UIState_TypeDefinitionIndex = 93272;

	class UIBallGameToolbarBOSSWidgetController_UIState : public ::Class_1_5F5ACAAB9AA1EB49
	{
	public:
		::Class_0_16E4307DCC419505_159<::System::UInt32>* EntityID; // 0x80
		::Class_0_16E4307DCC419505_159<::System::Single>* MaxHp; // 0x88
		::Class_0_16E4307DCC419505_159<::System::Single>* CurHp; // 0x90
		::Class_0_16E4307DCC419505_159<::Class_3_01B4CC30216C9ABE_2*>* Monster; // 0x98

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
