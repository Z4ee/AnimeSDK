#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector4.h"

#define NAPSTREAMING_NAPSTREAMINGLIGHTMAPHELPER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x11D993B0)
#define NAPSTREAMING_NAPSTREAMINGLIGHTMAPHELPER__CTOR_OFFSET UNITYSDK_OFFSET(0x11D995A0)

namespace NapStreaming
{
	inline static constexpr unsigned int NapStreamingLightmapHelper_TypeDefinitionIndex = 41462;

	class NapStreamingLightmapHelper : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Int32 lightmapIndex; // 0x18
		::UnityEngine::Vector4 lightmapScaleOffset; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGLIGHTMAPHELPER__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGLIGHTMAPHELPER_ONENABLE_OFFSET))(this);
		}
	};
}
