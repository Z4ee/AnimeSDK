#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define NAPSTREAMING_NAPSTREAMINGDATA_STREAMINGPVSDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x177E8AA0)

namespace NapStreaming
{
	inline static constexpr unsigned int NapStreamingData_StreamingPVSData_TypeDefinitionIndex = 41796;

	class NapStreamingData_StreamingPVSData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Boolean>* visibleStates; // 0x10
		::System::Int32 poiIndex; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGDATA_STREAMINGPVSDATA__CTOR_OFFSET))(this);
		}
	};
}
