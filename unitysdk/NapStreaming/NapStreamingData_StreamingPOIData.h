#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NapStreaming/POIGroup.h"
#include "unitysdk/NapStreaming/POIGroupMask.h"
#include "unitysdk/System/Object.h"

#define NAPSTREAMING_NAPSTREAMINGDATA_STREAMINGPOIDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x11D98FB0)

namespace NapStreaming
{
	inline static constexpr unsigned int NapStreamingData_StreamingPOIData_TypeDefinitionIndex = 68169;

	class NapStreamingData_StreamingPOIData : public ::System::Object
	{
	public:
		::NapStreaming::POIGroup group; // 0x10
		::NapStreaming::POIGroupMask cullingMask; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGDATA_STREAMINGPOIDATA__CTOR_OFFSET))(this);
		}
	};
}
