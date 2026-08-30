#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Events/UnityEvent.h"

#define CINEMACHINE_CINEMACHINETRIGGERACTION_ACTIONSETTINGS_TRIGGEREVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x18C7AF80)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineTriggerAction_ActionSettings_TriggerEvent_TypeDefinitionIndex = 38563;

	class CinemachineTriggerAction_ActionSettings_TriggerEvent : public ::UnityEngine::Events::UnityEvent
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINETRIGGERACTION_ACTIONSETTINGS_TRIGGEREVENT__CTOR_OFFSET))(this);
		}
	};
}
