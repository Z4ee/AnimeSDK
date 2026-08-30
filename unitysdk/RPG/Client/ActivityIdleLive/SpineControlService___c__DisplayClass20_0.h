#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/IdleLiveSpineAnimTriggerType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityIdleLive { class SpineControlService; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_SPINECONTROLSERVICE___C__DISPLAYCLASS20_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA6DC70)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPINECONTROLSERVICE___C__DISPLAYCLASS20_0___BUILDTRIGGERS_B__0_OFFSET UNITYSDK_OFFSET(0x1BA6E280)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int SpineControlService___c__DisplayClass20_0_TypeDefinitionIndex = 75091;

	class SpineControlService___c__DisplayClass20_0 : public ::System::Object
	{
	public:
		::RPG::Client::ActivityIdleLive::SpineControlService* __4__this; // 0x10
		::RPG::GameCore::IdleLiveSpineAnimTriggerType triggerType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPINECONTROLSERVICE___C__DISPLAYCLASS20_0__CTOR_OFFSET))(this);
		}

		::System::Void __BuildTriggers_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPINECONTROLSERVICE___C__DISPLAYCLASS20_0___BUILDTRIGGERS_B__0_OFFSET))(this);
		}
	};
}
