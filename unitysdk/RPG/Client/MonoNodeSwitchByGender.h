#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class RectTransform; }

#define RPG_CLIENT_MONONODESWITCHBYGENDER_START_OFFSET UNITYSDK_OFFSET(0xA9E6770)
#define RPG_CLIENT_MONONODESWITCHBYGENDER__CTOR_OFFSET UNITYSDK_OFFSET(0xA9E68B0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoNodeSwitchByGender_TypeDefinitionIndex = 67084;

	class MonoNodeSwitchByGender : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::RectTransform* MaleActiveRT; // 0x18
		::UnityEngine::RectTransform* FemaleActiveRT; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONONODESWITCHBYGENDER__CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONONODESWITCHBYGENDER_START_OFFSET))(this);
		}
	};
}
