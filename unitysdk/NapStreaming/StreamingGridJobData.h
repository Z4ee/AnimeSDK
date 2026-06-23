#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NapStreaming/POIMODE.h"
#include "unitysdk/NapStreaming/StreamingLayer.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace NapStreaming { class NapStreamingData_StreamingGridData; }

#define NAPSTREAMING_STREAMINGGRIDJOBDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x698860)

namespace NapStreaming
{
	inline static constexpr unsigned int StreamingGridJobData_TypeDefinitionIndex = 86205;

	struct alignas(4) StreamingGridJobData
	{
		::System::Boolean hasHlod; // 0x10
		::UnityEngine::Vector3 center; // 0x14
		::NapStreaming::StreamingLayer layer; // 0x20
		::System::Boolean isMobileOff; // 0x24
		::System::Single boundHalfSize; // 0x28
		::System::Int32 hlodReleseFrame; // 0x2C
		::System::Int32 originReleaseFrame; // 0x30
		::System::Int32 invisibleReleaseFrame; // 0x34
		::System::Int32 poiIndex; // 0x38
		::NapStreaming::POIMODE poiMode; // 0x3C

		::System::Void _ctor(::NapStreaming::NapStreamingData_StreamingGridData* data)
		{
			return ((::System::Void(*)(::PVOID, ::NapStreaming::NapStreamingData_StreamingGridData*))((::PBYTE)hIl2Cpp + NAPSTREAMING_STREAMINGGRIDJOBDATA__CTOR_OFFSET))(this, data);
		}
	};
}
