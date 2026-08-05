#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define NAPSTREAMING_NAPSTREAMINGVIRTUALGRID__CTOR_OFFSET UNITYSDK_OFFSET(0x102CD690)

namespace NapStreaming
{
	inline static constexpr unsigned int NapStreamingVirtualGrid_TypeDefinitionIndex = 48982;

	class NapStreamingVirtualGrid : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Bounds bounds; // 0x18
		::System::Int32 goCount; // 0x30
		::System::Int32 meshRendererCount; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGVIRTUALGRID__CTOR_OFFSET))(this);
		}
	};
}
