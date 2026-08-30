#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine::Playables { class PlayableDirector; }

#define RPG_CLIENT_AUTOPLAYABLE_ONLIGHTWEIGHTACTIVATE_OFFSET UNITYSDK_OFFSET(0x193B55A0)
#define RPG_CLIENT_AUTOPLAYABLE_ONLIGHTWEIGHTDEACTIVATE_OFFSET UNITYSDK_OFFSET(0x193B5610)
#define RPG_CLIENT_AUTOPLAYABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x193B5680)

namespace RPG::Client
{
	inline static constexpr unsigned int AutoPlayable_TypeDefinitionIndex = 72430;

	class AutoPlayable : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Playables::PlayableDirector* m_Director; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUTOPLAYABLE__CTOR_OFFSET))(this);
		}

		::System::Void OnLightweightActivate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUTOPLAYABLE_ONLIGHTWEIGHTACTIVATE_OFFSET))(this);
		}

		::System::Void OnLightweightDeactivate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUTOPLAYABLE_ONLIGHTWEIGHTDEACTIVATE_OFFSET))(this);
		}
	};
}
