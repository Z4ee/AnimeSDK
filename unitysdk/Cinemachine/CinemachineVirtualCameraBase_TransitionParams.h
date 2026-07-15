#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CinemachineVirtualCameraBase_BlendHint.h"
#include "unitysdk/System/ValueType.h"

namespace Cinemachine { class CinemachineBrain_VcamActivatedEvent; }

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineVirtualCameraBase_TransitionParams_TypeDefinitionIndex = 37681;

	struct alignas(8) CinemachineVirtualCameraBase_TransitionParams
	{
		::Cinemachine::CinemachineVirtualCameraBase_BlendHint m_BlendHint; // 0x10
		::System::Boolean m_InheritPosition; // 0x14
		::Cinemachine::CinemachineBrain_VcamActivatedEvent* m_OnCameraLive; // 0x18
	};
}
