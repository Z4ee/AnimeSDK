#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Events/UnityEvent_1.h"

namespace Cinemachine { class CinemachineBrain; }

#define CINEMACHINE_CINEMACHINEBRAIN_BRAINEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x12B6D590)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineBrain_BrainEvent_TypeDefinitionIndex = 36482;

	class CinemachineBrain_BrainEvent : public ::UnityEngine::Events::UnityEvent_1<::Cinemachine::CinemachineBrain*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBRAIN_BRAINEVENT__CTOR_OFFSET))(this);
		}
	};
}
