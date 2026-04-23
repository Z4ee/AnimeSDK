#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace UnityEngine::Timeline { class TrackAsset; }

#define RPGTOOLS_TIMELINE_POSTPROCESSING_BASEPLAYABLEBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xB8F8F00)

namespace RPGTools::Timeline::PostProcessing
{
	inline static constexpr unsigned int BasePlayableBehaviour_TypeDefinitionIndex = 45244;

	class BasePlayableBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::System::Boolean AutoReset; // 0x10
		::System::Boolean HiendOnly; // 0x11
		::UnityEngine::Timeline::TrackAsset* TrackAssetObj; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_BASEPLAYABLEBEHAVIOUR__CTOR_OFFSET))(this);
		}
	};
}
