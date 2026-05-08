#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define NAPSTREAMING_NAPSTREAMINGVIRTUALGRID__CTOR_OFFSET UNITYSDK_OFFSET(0x112CD6D0)

namespace NapStreaming
{
	inline static constexpr unsigned int NapStreamingVirtualGrid_TypeDefinitionIndex = 38228;

	class NapStreamingVirtualGrid : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Bounds bounds; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGVIRTUALGRID__CTOR_OFFSET))(this);
		}
	};
}
