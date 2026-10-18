#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/TrackAsset.h"

namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_BLINDBOX_POOL_UI_STARTPOSITIONOFFSETCOMPENSATIONTRACK_CREATETRACKMIXER_OFFSET UNITYSDK_OFFSET(0xC8901F0)
#define RPG_CLIENT_BLINDBOX_POOL_UI_STARTPOSITIONOFFSETCOMPENSATIONTRACK__CTOR_OFFSET UNITYSDK_OFFSET(0xC8902F0)

namespace RPG::Client::BlindBox::Pool::Ui
{
	inline static constexpr unsigned int StartPositionOffsetCompensationTrack_TypeDefinitionIndex = 74970;

	class StartPositionOffsetCompensationTrack : public ::UnityEngine::Timeline::TrackAsset
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_POOL_UI_STARTPOSITIONOFFSETCOMPENSATIONTRACK__CTOR_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreateTrackMixer(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2, ::System::Int32 a3)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_POOL_UI_STARTPOSITIONOFFSETCOMPENSATIONTRACK_CREATETRACKMIXER_OFFSET))(this, a1, a2, a3);
		}
	};
}
