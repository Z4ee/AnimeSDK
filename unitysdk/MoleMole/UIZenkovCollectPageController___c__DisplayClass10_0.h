#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_130;
namespace MoleMole { class UIZenkovCollectPageController; }

#define MOLEMOLE_UIZENKOVCOLLECTPAGECONTROLLER___C__DISPLAYCLASS10_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15B0D300)
#define MOLEMOLE_UIZENKOVCOLLECTPAGECONTROLLER___C__DISPLAYCLASS10_0__REFRESHPROGRESSPOINTS_B__0_OFFSET UNITYSDK_OFFSET(0x15B0D310)
#define MOLEMOLE_UIZENKOVCOLLECTPAGECONTROLLER___C__DISPLAYCLASS10_0__REFRESHPROGRESSPOINTS_B__2_OFFSET UNITYSDK_OFFSET(0x15B0D340)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovCollectPageController___c__DisplayClass10_0_TypeDefinitionIndex = 75279;

	class UIZenkovCollectPageController___c__DisplayClass10_0 : public ::System::Object
	{
	public:
		::MoleMole::UIZenkovCollectPageController* __4__this; // 0x10
		::System::Int32 tabId; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVCOLLECTPAGECONTROLLER___C__DISPLAYCLASS10_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _RefreshProgressPoints_b__0(::Class_2_208CC9941471731A_130* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_2_208CC9941471731A_130*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVCOLLECTPAGECONTROLLER___C__DISPLAYCLASS10_0__REFRESHPROGRESSPOINTS_B__0_OFFSET))(this, x);
		}

		::System::Void _RefreshProgressPoints_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVCOLLECTPAGECONTROLLER___C__DISPLAYCLASS10_0__REFRESHPROGRESSPOINTS_B__2_OFFSET))(this);
		}
	};
}
