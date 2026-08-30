#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_23F67DD15593C8D6;
namespace RPG::Client::ActivityAlley { class AlleyPackComponent; }

#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_ALLEYPACKSELECTSTATE_ENTER_OFFSET UNITYSDK_OFFSET(0x1AD18CA0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_ALLEYPACKSELECTSTATE_EXIT_OFFSET UNITYSDK_OFFSET(0x1AD19A90)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_ALLEYPACKSELECTSTATE_TICK_OFFSET UNITYSDK_OFFSET(0x1AD19140)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_ALLEYPACKSELECTSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD10480)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_ALLEYPACKSELECTSTATE__SETSELECTDURATION_OFFSET UNITYSDK_OFFSET(0x1AD19080)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_ALLEYPACKSELECTSTATE__SOLVETARGETPOSITION_OFFSET UNITYSDK_OFFSET(0x1AD18D40)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_ALLEYPACKSELECTSTATE__TICKHOVERMATCH_OFFSET UNITYSDK_OFFSET(0x1AD195D0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_ALLEYPACKSELECTSTATE__TICKHOVER_OFFSET UNITYSDK_OFFSET(0x1AD19350)

namespace RPG::Client::ActivityAlley
{
	inline static constexpr unsigned int AlleyPackComponent_AlleyPackSelectState_TypeDefinitionIndex = 73993;

	class AlleyPackComponent_AlleyPackSelectState : public ::System::Object
	{
	public:
		::RPG::Client::ActivityAlley::AlleyPackComponent* _Owner; // 0x10
		::Class_1_23F67DD15593C8D6* _Timer; // 0x18
		::System::Single _SelectDuration; // 0x20
		::System::Single _HoverDuration; // 0x24
		::UnityEngine::Vector3 _TargetPosition; // 0x28
		::System::Boolean _IsHover; // 0x34
		::System::Boolean _IsHoverFinish; // 0x35

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_ALLEYPACKSELECTSTATE__CTOR_OFFSET))(this);
		}

		::System::Void Enter(::RPG::Client::ActivityAlley::AlleyPackComponent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityAlley::AlleyPackComponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_ALLEYPACKSELECTSTATE_ENTER_OFFSET))(this, a1);
		}

		::System::Void Tick(::RPG::Client::ActivityAlley::AlleyPackComponent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityAlley::AlleyPackComponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_ALLEYPACKSELECTSTATE_TICK_OFFSET))(this, a1);
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
