#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorEventEntry.h"
#include "unitysdk/MoleMole/Config/PropertyModifyFunction.h"

namespace MoleMole::Config { class AnimatorEvent; }

#define MOLEMOLE_CONFIG_ANIMATOREVENTMODIFYPERFECTSWITCHCHARGEVALUEENTRY_CREATEANIMATIONEVENT_OFFSET UNITYSDK_OFFSET(0x1624A870)
#define MOLEMOLE_CONFIG_ANIMATOREVENTMODIFYPERFECTSWITCHCHARGEVALUEENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x1624A8F0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorEventModifyPerfectSwitchChargeValueEntry_TypeDefinitionIndex = 49268;

	class AnimatorEventModifyPerfectSwitchChargeValueEntry : public ::MoleMole::Config::AnimatorEventEntry
	{
	public:
		::MoleMole::Config::PropertyModifyFunction ModifyFunction; // 0x58
		::System::Single Amount; // 0x5C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTMODIFYPERFECTSWITCHCHARGEVALUEENTRY__CTOR_OFFSET))(this);
		}

		::MoleMole::Config::AnimatorEvent* CreateAnimationEvent()
		{
			return ((::MoleMole::Config::AnimatorEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTMODIFYPERFECTSWITCHCHARGEVALUEENTRY_CREATEANIMATIONEVENT_OFFSET))(this);
		}
	};
}
