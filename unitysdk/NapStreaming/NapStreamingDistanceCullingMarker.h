#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define NAPSTREAMING_NAPSTREAMINGDISTANCECULLINGMARKER_REMOVE_OFFSET UNITYSDK_OFFSET(0x10682D20)
#define NAPSTREAMING_NAPSTREAMINGDISTANCECULLINGMARKER__CTOR_OFFSET UNITYSDK_OFFSET(0x10682DA0)

namespace NapStreaming
{
	inline static constexpr unsigned int NapStreamingDistanceCullingMarker_TypeDefinitionIndex = 47630;

	class NapStreamingDistanceCullingMarker : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single distanceCulling; // 0x18
		::System::Boolean activeOnMobile; // 0x1C
		::System::Boolean activeOnConsole; // 0x1D

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGDISTANCECULLINGMARKER__CTOR_OFFSET))(this);
		}

		::System::Void Remove()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGDISTANCECULLINGMARKER_REMOVE_OFFSET))(this);
		}
	};
}
