#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Timeline/TrackAsset.h"

#define MOLEMOLE_TIMELINE_VISUALENVBASECONTROLTRACK__CTOR_OFFSET UNITYSDK_OFFSET(0x17E052F0)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int VisualEnvBaseControlTrack_TypeDefinitionIndex = 42967;

	class VisualEnvBaseControlTrack : public ::UnityEngine::Timeline::TrackAsset
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VISUALENVBASECONTROLTRACK__CTOR_OFFSET))(this);
		}
	};
}
