#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Events/UnityEvent_2.h"

namespace Cinemachine { class ICinemachineCamera; }

#define CINEMACHINE_CINEMACHINEBRAIN_VCAMACTIVATEDEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x12B6D5A0)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineBrain_VcamActivatedEvent_TypeDefinitionIndex = 36483;

	class CinemachineBrain_VcamActivatedEvent : public ::UnityEngine::Events::UnityEvent_2<::Cinemachine::ICinemachineCamera*, ::Cinemachine::ICinemachineCamera*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBRAIN_VCAMACTIVATEDEVENT__CTOR_OFFSET))(this);
		}
	};
}
