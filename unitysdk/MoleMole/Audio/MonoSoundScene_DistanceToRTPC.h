#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }

#define MOLEMOLE_AUDIO_MONOSOUNDSCENE_DISTANCETORTPC_UPDATE_OFFSET UNITYSDK_OFFSET(0x12B87350)
#define MOLEMOLE_AUDIO_MONOSOUNDSCENE_DISTANCETORTPC__CTOR_OFFSET UNITYSDK_OFFSET(0x12B87820)

namespace MoleMole::Audio
{
	inline static constexpr unsigned int MonoSoundScene_DistanceToRTPC_TypeDefinitionIndex = 56774;

	class MonoSoundScene_DistanceToRTPC : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::String* rtpcName; // 0x18
		::System::Single minDistance; // 0x20
		::System::Single maxDistance; // 0x24
		::System::Boolean usePlayerPosition; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_MONOSOUNDSCENE_DISTANCETORTPC__CTOR_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_MONOSOUNDSCENE_DISTANCETORTPC_UPDATE_OFFSET))(this);
		}
	};
}
