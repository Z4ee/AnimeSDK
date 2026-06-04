#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityAlley { class AlleyPackComponent; }

#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_ALLEYPACKIDLESTATE_ENTER_OFFSET UNITYSDK_OFFSET(0xB090500)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_ALLEYPACKIDLESTATE_EXIT_OFFSET UNITYSDK_OFFSET(0xB090600)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_ALLEYPACKIDLESTATE_TICK_OFFSET UNITYSDK_OFFSET(0xB090580)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_ALLEYPACKIDLESTATE__CTOR_OFFSET UNITYSDK_OFFSET(0xB090640)

namespace RPG::Client::ActivityAlley
{
	inline static constexpr unsigned int AlleyPackComponent_AlleyPackIdleState_TypeDefinitionIndex = 69172;

	class AlleyPackComponent_AlleyPackIdleState : public ::System::Object
	{
	public:
		::RPG::Client::ActivityAlley::AlleyPackComponent* _Owner; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_ALLEYPACKIDLESTATE__CTOR_OFFSET))(this);
		}

		::System::Void Enter(::RPG::Client::ActivityAlley::AlleyPackComponent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityAlley::AlleyPackComponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_ALLEYPACKIDLESTATE_ENTER_OFFSET))(this, a1);
		}

		::System::Void Tick(::RPG::Client::ActivityAlley::AlleyPackComponent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityAlley::AlleyPackComponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_ALLEYPACKIDLESTATE_TICK_OFFSET))(this, a1);
		}

		::System::Void Exit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_ALLEYPACKIDLESTATE_EXIT_OFFSET))(this);
		}
	};
}
