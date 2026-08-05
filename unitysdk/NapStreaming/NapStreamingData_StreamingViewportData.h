#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"

#define NAPSTREAMING_NAPSTREAMINGDATA_STREAMINGVIEWPORTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x10682D10)

namespace NapStreaming
{
	inline static constexpr unsigned int NapStreamingData_StreamingViewportData_TypeDefinitionIndex = 41795;

	class NapStreamingData_StreamingViewportData : public ::System::Object
	{
	public:
		::UnityEngine::Bounds bounds; // 0x10
		::System::Single coefficient; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGDATA_STREAMINGVIEWPORTDATA__CTOR_OFFSET))(this);
		}
	};
}
