#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_23F67DD15593C8D6;
namespace RPG::Client::ActivityAlley { class AlleyPackComponent; }

#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_ALLEYPACKSELECTSTATE_ENTER_OFFSET UNITYSDK_OFFSET(0x8EDF730)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_ALLEYPACKSELECTSTATE_EXIT_OFFSET UNITYSDK_OFFSET(0x8EE0370)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_ALLEYPACKSELECTSTATE_TICK_OFFSET UNITYSDK_OFFSET(0x8EDFBE0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_ALLEYPACKSELECTSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x8ED7280)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_ALLEYPACKSELECTSTATE__SETSELECTDURATION_OFFSET UNITYSDK_OFFSET(0x8EDFB20)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_ALLEYPACKSELECTSTATE__SOLVETARGETPOSITION_OFFSET UNITYSDK_OFFSET(0x8EDF7D0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_ALLEYPACKSELECTSTATE__TICKHOVERMATCH_OFFSET UNITYSDK_OFFSET(0x8EE0000)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_ALLEYPACKSELECTSTATE__TICKHOVER_OFFSET UNITYSDK_OFFSET(0x8EDFDF0)

namespace RPG::Client::ActivityAlley
{
	inline static constexpr unsigned int AlleyPackComponent_AlleyPackSelectState_TypeDefinitionIndex = 60750;

	class AlleyPackComponent_AlleyPackSelectState : public ::System::Object
	{
	public:
		::Class_1_23F67DD15593C8D6* _Timer; // 0x10
		::RPG::Client::ActivityAlley::AlleyPackComponent* _Owner; // 0x18
		::System::Single _HoverDuration; // 0x20
		::UnityEngine::Vector3 _TargetPosition; // 0x24
		::System::Single _SelectDuration; // 0x30
		::System::Boolean _IsHoverFinish; // 0x34
		::System::Boolean _IsHover; // 0x35

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_ALLEYPACKSELECTSTATE__CTOR_OFFSET))(this);
		}

		::System::Void Enter(::RPG::Client::ActivityAlley::AlleyPackComponent* owner)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityAlley::AlleyPackComponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_ALLEYPACKSELECTSTATE_ENTER_OFFSET))(this, owner);
		}

		::System::Void Tick(::RPG::Client::ActivityAlley::AlleyPackComponent* owner)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityAlley::AlleyPackComponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_ALLEYPACKSELECTSTATE_TICK_OFFSET))(this, owner);
		}

		::System::Void Exit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_ALLEYPACKSELECTSTATE_EXIT_OFFSET))(this);
		}

		::System::Void _SetSelectDuration()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_ALLEYPACKSELECTSTATE__SETSELECTDURATION_OFFSET))(this);
		}

		::System::Void _SolveTargetPosition()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_ALLEYPACKSELECTSTATE__SOLVETARGETPOSITION_OFFSET))(this);
		}

		::System::Void _TickHover()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_ALLEYPACKSELECTSTATE__TICKHOVER_OFFSET))(this);
		}

		::System::Void _TickHoverMatch()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_ALLEYPACKSELECTSTATE__TICKHOVERMATCH_OFFSET))(this);
		}
	};
}
