#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Timeline/AnimationTrack.h"

namespace UnityEngine::Timeline { class TrackAsset; }

#define MOLEMOLE_TIMELINE_ZNET_ZNETANIMATIONTRACK__CTOR_OFFSET UNITYSDK_OFFSET(0x170667D0)

namespace MoleMole::Timeline::ZNet
{
	inline static constexpr unsigned int ZNetAnimationTrack_TypeDefinitionIndex = 56138;

	class ZNetAnimationTrack : public ::UnityEngine::Timeline::AnimationTrack
	{
	public:
		::UnityEngine::Timeline::TrackAsset* belongAnimFxTrack; // 0x150

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNET_ZNETANIMATIONTRACK__CTOR_OFFSET))(this);
		}
	};
}
