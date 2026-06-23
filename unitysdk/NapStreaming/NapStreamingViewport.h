#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define NAPSTREAMING_NAPSTREAMINGVIEWPORT__CTOR_OFFSET UNITYSDK_OFFSET(0xD9593A0)

namespace NapStreaming
{
	inline static constexpr unsigned int NapStreamingViewport_TypeDefinitionIndex = 81697;

	class NapStreamingViewport : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single coefficient; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGVIEWPORT__CTOR_OFFSET))(this);
		}
	};
}
