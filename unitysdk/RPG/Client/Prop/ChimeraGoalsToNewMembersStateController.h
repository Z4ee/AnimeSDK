#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/ChimeraPreparationState.h"
#include "unitysdk/RPG/Client/Prop/ChimeraPreparationStateControllerBase.h"
#include "unitysdk/System/Nullable_1.h"

namespace System { class String; }
namespace UnityEngine::Playables { class PlayableDirector; }

#define RPG_CLIENT_PROP_CHIMERAGOALSTONEWMEMBERSSTATECONTROLLER_GET_STATE_OFFSET UNITYSDK_OFFSET(0x1A8EE0C0)
#define RPG_CLIENT_PROP_CHIMERAGOALSTONEWMEMBERSSTATECONTROLLER_METHOD_6_2A202130FB8733FC_OFFSET UNITYSDK_OFFSET(0x1A8EE9A0)
#define RPG_CLIENT_PROP_CHIMERAGOALSTONEWMEMBERSSTATECONTROLLER_ONENTER_OFFSET UNITYSDK_OFFSET(0x1A8EE110)
#define RPG_CLIENT_PROP_CHIMERAGOALSTONEWMEMBERSSTATECONTROLLER_ONEXIT_OFFSET UNITYSDK_OFFSET(0x1A8EE450)
#define RPG_CLIENT_PROP_CHIMERAGOALSTONEWMEMBERSSTATECONTROLLER_REACTPLAYPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x1A8EE560)
#define RPG_CLIENT_PROP_CHIMERAGOALSTONEWMEMBERSSTATECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8EEAC0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraGoalsToNewMembersStateController_TypeDefinitionIndex = 78026;

	class ChimeraGoalsToNewMembersStateController : public ::RPG::Client::Prop::ChimeraPreparationStateControllerBase
	{
	public:
		::UnityEngine::Playables::PlayableDirector* _Timeline; // 0x38
		::System::UInt32 _PerfGroupID; // 0x40
		::System::UInt32 _PerfGroupPropID; // 0x44
		::System::String* _PerfEntityEvent; // 0x48
		::System::String* _PerfConfigSsrKey; // 0x50
		::System::Nullable_1<::System::UInt32> MGLEPKGFODH; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAGOALSTONEWMEMBERSSTATECONTROLLER__CTOR_OFFSET))(this);
		}

		::RPG::Client::Prop::ChimeraPreparationState get_State()
		{
			return ((::RPG::Client::Prop::ChimeraPreparationState(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAGOALSTONEWMEMBERSSTATECONTROLLER_GET_STATE_OFFSET))(this);
		}

		::System::Void OnEnter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAGOALSTONEWMEMBERSSTATECONTROLLER_ONENTER_OFFSET))(this);
		}

		::System::Void OnExit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAGOALSTONEWMEMBERSSTATECONTROLLER_ONEXIT_OFFSET))(this);
		}

		::System::Void ReactPlayPerformance()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAGOALSTONEWMEMBERSSTATECONTROLLER_REACTPLAYPERFORMANCE_OFFSET))(this);
		}

		::System::Void Method_6_2A202130FB8733FC(::UnityEngine::Playables::PlayableDirector* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableDirector*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAGOALSTONEWMEMBERSSTATECONTROLLER_METHOD_6_2A202130FB8733FC_OFFSET))(this, a1);
		}
	};
}
