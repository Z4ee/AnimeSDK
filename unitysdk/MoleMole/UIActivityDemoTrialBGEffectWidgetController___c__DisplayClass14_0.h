#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIACTIVITYDEMOTRIALBGEFFECTWIDGETCONTROLLER___C__DISPLAYCLASS14_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18651750)
#define MOLEMOLE_UIACTIVITYDEMOTRIALBGEFFECTWIDGETCONTROLLER___C__DISPLAYCLASS14_0__PLAYBGANIMATION_B__0_OFFSET UNITYSDK_OFFSET(0x18651760)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityDemoTrialBGEffectWidgetController___c__DisplayClass14_0_TypeDefinitionIndex = 40493;

	class UIActivityDemoTrialBGEffectWidgetController___c__DisplayClass14_0 : public ::System::Object
	{
	public:
		::System::Action* enterCallback; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYDEMOTRIALBGEFFECTWIDGETCONTROLLER___C__DISPLAYCLASS14_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayBGAnimation_b__0(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYDEMOTRIALBGEFFECTWIDGETCONTROLLER___C__DISPLAYCLASS14_0__PLAYBGANIMATION_B__0_OFFSET))(this, index);
		}
	};
}
