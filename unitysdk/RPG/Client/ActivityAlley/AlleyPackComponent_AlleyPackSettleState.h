#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_23F67DD15593C8D6;
namespace RPG::Client::ActivityAlley { class AlleyPackComponent; }

#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_ALLEYPACKSETTLESTATE_ENTER_OFFSET UNITYSDK_OFFSET(0x8EE0400)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_ALLEYPACKSETTLESTATE_EXIT_OFFSET UNITYSDK_OFFSET(0x8EE0BF0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_ALLEYPACKSETTLESTATE_TICK_OFFSET UNITYSDK_OFFSET(0x8EE0870)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_ALLEYPACKSETTLESTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x8ED72D0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_ALLEYPACKSETTLESTATE__SETSETTLEDURATION_OFFSET UNITYSDK_OFFSET(0x8EE07F0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_ALLEYPACKSETTLESTATE__SOLVETARGETPOSITION_OFFSET UNITYSDK_OFFSET(0x8EE0490)

namespace RPG::Client::ActivityAlley
{
	inline static constexpr unsigned int AlleyPackComponent_AlleyPackSettleState_TypeDefinitionIndex = 60751;

	class AlleyPackComponent_AlleyPackSettleState : public ::System::Object
	{
	public:
		::Class_1_23F67DD15593C8D6* _Timer; // 0x10
		::RPG::Client::ActivityAlley::AlleyPackComponent* _Owner; // 0x18
		::UnityEngine::Vector3 _TargetPosition; // 0x20
		::System::Single _SettleDuration; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_ALLEYPACKSETTLESTATE__CTOR_OFFSET))(this);
		}

		::System::Void Enter(::RPG::Client::ActivityAlley::AlleyPackComponent* owner)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityAlley::AlleyPackComponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_ALLEYPACKSETTLESTATE_ENTER_OFFSET))(this, owner);
		}

		::System::Void Tick(::RPG::Client::ActivityAlley::AlleyPackComponent* owner)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityAlley::AlleyPackComponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_ALLEYPACKSETTLESTATE_TICK_OFFSET))(this, owner);
		}

		::System::Void Exit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_ALLEYPACKSETTLESTATE_EXIT_OFFSET))(this);
		}

		::System::Void _SolveTargetPosition()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_ALLEYPACKSETTLESTATE__SOLVETARGETPOSITION_OFFSET))(this);
		}

		::System::Void _SetSettleDuration()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_ALLEYPACKSETTLESTATE__SETSETTLEDURATION_OFFSET))(this);
		}
	};
}
