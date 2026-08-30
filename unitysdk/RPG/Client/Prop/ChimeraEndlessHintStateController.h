#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/ChimeraPreparationState.h"
#include "unitysdk/RPG/Client/Prop/ChimeraPreparationStateControllerBase.h"

#define RPG_CLIENT_PROP_CHIMERAENDLESSHINTSTATECONTROLLER_GET_STATE_OFFSET UNITYSDK_OFFSET(0xDC2A510)
#define RPG_CLIENT_PROP_CHIMERAENDLESSHINTSTATECONTROLLER_INFERANDSWITCHTONEXTSTATE_OFFSET UNITYSDK_OFFSET(0xDC2A8B0)
#define RPG_CLIENT_PROP_CHIMERAENDLESSHINTSTATECONTROLLER_ONENTER_OFFSET UNITYSDK_OFFSET(0xDC2A560)
#define RPG_CLIENT_PROP_CHIMERAENDLESSHINTSTATECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xDC2AA70)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraEndlessHintStateController_TypeDefinitionIndex = 78021;

	class ChimeraEndlessHintStateController : public ::RPG::Client::Prop::ChimeraPreparationStateControllerBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAENDLESSHINTSTATECONTROLLER__CTOR_OFFSET))(this);
		}

		::RPG::Client::Prop::ChimeraPreparationState get_State()
		{
			return ((::RPG::Client::Prop::ChimeraPreparationState(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAENDLESSHINTSTATECONTROLLER_GET_STATE_OFFSET))(this);
		}

		::System::Void OnEnter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAENDLESSHINTSTATECONTROLLER_ONENTER_OFFSET))(this);
		}

		::System::Void InferAndSwitchToNextState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAENDLESSHINTSTATECONTROLLER_INFERANDSWITCHTONEXTSTATE_OFFSET))(this);
		}
	};
}
