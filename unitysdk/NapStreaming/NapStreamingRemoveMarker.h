#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define NAPSTREAMING_NAPSTREAMINGREMOVEMARKER_DISABLECOLLIDER_OFFSET UNITYSDK_OFFSET(0x13DFD010)
#define NAPSTREAMING_NAPSTREAMINGREMOVEMARKER_REMOVE_OFFSET UNITYSDK_OFFSET(0x13DFD1E0)
#define NAPSTREAMING_NAPSTREAMINGREMOVEMARKER__CTOR_OFFSET UNITYSDK_OFFSET(0x13DFD260)

namespace NapStreaming
{
	inline static constexpr unsigned int NapStreamingRemoveMarker_TypeDefinitionIndex = 65265;

	class NapStreamingRemoveMarker : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGREMOVEMARKER__CTOR_OFFSET))(this);
		}

		::System::Void DisableCollider()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGREMOVEMARKER_DISABLECOLLIDER_OFFSET))(this);
		}

		::System::Void Remove()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGREMOVEMARKER_REMOVE_OFFSET))(this);
		}
	};
}
