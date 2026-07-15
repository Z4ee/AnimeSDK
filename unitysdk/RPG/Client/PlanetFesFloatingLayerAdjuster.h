#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class Canvas; }

#define RPG_CLIENT_PLANETFESFLOATINGLAYERADJUSTER_AWAKE_OFFSET UNITYSDK_OFFSET(0x1A96F620)
#define RPG_CLIENT_PLANETFESFLOATINGLAYERADJUSTER_METHOD_5_2BA181E87C3A32FF_OFFSET UNITYSDK_OFFSET(0x1A96F720)
#define RPG_CLIENT_PLANETFESFLOATINGLAYERADJUSTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A96F830)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesFloatingLayerAdjuster_TypeDefinitionIndex = 63546;

	class PlanetFesFloatingLayerAdjuster : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESFLOATINGLAYERADJUSTER__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESFLOATINGLAYERADJUSTER_AWAKE_OFFSET))(this);
		}

		::UnityEngine::Canvas* Method_5_2BA181E87C3A32FF()
		{
			return ((::UnityEngine::Canvas*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESFLOATINGLAYERADJUSTER_METHOD_5_2BA181E87C3A32FF_OFFSET))(this);
		}
	};
}
