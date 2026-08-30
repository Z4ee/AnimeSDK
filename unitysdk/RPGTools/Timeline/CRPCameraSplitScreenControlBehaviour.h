#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

#define RPGTOOLS_TIMELINE_CRPCAMERASPLITSCREENCONTROLBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x1D136930)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int CRPCameraSplitScreenControlBehaviour_TypeDefinitionIndex = 48368;

	class CRPCameraSplitScreenControlBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::System::Single SplitRange; // 0x10
		::System::Single SplitSlope; // 0x14
		::System::Single UILineWidth; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CRPCAMERASPLITSCREENCONTROLBEHAVIOUR__CTOR_OFFSET))(this);
		}
	};
}
