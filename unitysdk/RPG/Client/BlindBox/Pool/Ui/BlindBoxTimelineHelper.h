#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Transform; }
namespace UnityEngine::Playables { class PlayableDirector; }

#define RPG_CLIENT_BLINDBOX_POOL_UI_BLINDBOXTIMELINEHELPER_SETCOMPENSATIONROOTS_OFFSET UNITYSDK_OFFSET(0xC88F3D0)

namespace RPG::Client::BlindBox::Pool::Ui
{
	inline static constexpr unsigned int BlindBoxTimelineHelper_TypeDefinitionIndex = 74966;

	class BlindBoxTimelineHelper : public ::System::Object
	{
	public:
		static ::System::Void SetCompensationRoots(::UnityEngine::Playables::PlayableDirector* a1, ::UnityEngine::Transform* a2, ::UnityEngine::Transform* a3)
		{
			return ((::System::Void(*)(::UnityEngine::Playables::PlayableDirector*, ::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_POOL_UI_BLINDBOXTIMELINEHELPER_SETCOMPENSATIONROOTS_OFFSET))(a1, a2, a3);
		}
	};
}
