#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine::Playables { class PlayableDirector; }

#define RPG_CLIENT_AUTOPLAYABLE_ONLIGHTWEIGHTACTIVATE_OFFSET UNITYSDK_OFFSET(0xC7F8E50)
#define RPG_CLIENT_AUTOPLAYABLE_ONLIGHTWEIGHTDEACTIVATE_OFFSET UNITYSDK_OFFSET(0xC7F8EC0)
#define RPG_CLIENT_AUTOPLAYABLE__CTOR_OFFSET UNITYSDK_OFFSET(0xC7F8F30)

namespace RPG::Client
{
	inline static constexpr unsigned int AutoPlayable_TypeDefinitionIndex = 72431;

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
