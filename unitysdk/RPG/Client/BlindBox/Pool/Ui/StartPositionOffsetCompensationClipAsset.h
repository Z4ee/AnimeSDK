#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ExposedReference_1.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"

namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_BLINDBOX_POOL_UI_STARTPOSITIONOFFSETCOMPENSATIONCLIPASSET_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xC8889A0)
#define RPG_CLIENT_BLINDBOX_POOL_UI_STARTPOSITIONOFFSETCOMPENSATIONCLIPASSET_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0xC888B60)
#define RPG_CLIENT_BLINDBOX_POOL_UI_STARTPOSITIONOFFSETCOMPENSATIONCLIPASSET__CTOR_OFFSET UNITYSDK_OFFSET(0xC888BB0)

namespace RPG::Client::BlindBox::Pool::Ui
{
	inline static constexpr unsigned int StartPositionOffsetCompensationClipAsset_TypeDefinitionIndex = 74967;

	class StartPositionOffsetCompensationClipAsset : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::UnityEngine::ExposedReference_1<::UnityEngine::Transform*> ReferenceRoot; // 0x18
		::UnityEngine::ExposedReference_1<::UnityEngine::Transform*> RealRoot; // 0x28
		::UnityEngine::AnimationCurve* CompensationCurve; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_POOL_UI_STARTPOSITIONOFFSETCOMPENSATIONCLIPASSET__CTOR_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_POOL_UI_STARTPOSITIONOFFSETCOMPENSATIONCLIPASSET_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_POOL_UI_STARTPOSITIONOFFSETCOMPENSATIONCLIPASSET_GET_CLIPCAPS_OFFSET))(this);
		}
	};
}
