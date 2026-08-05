#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_AF5BA1C65F12F4B1;
namespace MoleMole { class UIZenkovMissionRowWidgetController; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UIZENKOVMISSIONROWWIDGETCONTROLLER___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0x174A0090)
#define MOLEMOLE_UIZENKOVMISSIONROWWIDGETCONTROLLER___C__DISPLAYCLASS5_0__SETDATA_B__0_OFFSET UNITYSDK_OFFSET(0x174A00A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovMissionRowWidgetController___c__DisplayClass5_0_TypeDefinitionIndex = 49195;

	class UIZenkovMissionRowWidgetController___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::Class_2_AF5BA1C65F12F4B1* zenkovModel; // 0x10
		::MoleMole::UIZenkovMissionRowWidgetController* __4__this; // 0x18
		::UnityEngine::Transform* root; // 0x20
		::System::Int32 itemId; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVMISSIONROWWIDGETCONTROLLER___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
		}

		::System::Void _SetData_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVMISSIONROWWIDGETCONTROLLER___C__DISPLAYCLASS5_0__SETDATA_B__0_OFFSET))(this);
		}
	};
}
