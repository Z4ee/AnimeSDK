#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NapStreaming/StreamingLayer.h"
#include "unitysdk/System/ValueType.h"

namespace NapStreaming { class NapStreamingData_StreamingLayerData; }

#define NAPSTREAMING_STREAMINGLAYERJOBDATA_ISVALID_OFFSET UNITYSDK_OFFSET(0x826B90)
#define NAPSTREAMING_STREAMINGLAYERJOBDATA_UPDATEREALDISTANCE_OFFSET UNITYSDK_OFFSET(0x826C50)
#define NAPSTREAMING_STREAMINGLAYERJOBDATA__CTOR_1_OFFSET UNITYSDK_OFFSET(0x826C00)
#define NAPSTREAMING_STREAMINGLAYERJOBDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x826BE0)

namespace NapStreaming
{
	inline static constexpr unsigned int StreamingLayerJobData_TypeDefinitionIndex = 71723;

	struct alignas(4) StreamingLayerJobData
	{
		::System::Single loadDistance; // 0x10
		::System::Single realLoadDistance; // 0x14
		::System::Single hlodLoadDistance; // 0x18
		::System::Single realHlodLoadDistance; // 0x1C
		::System::Single unloadDistance; // 0x20
		::System::Single realUnloadDistance; // 0x24
		::NapStreaming::StreamingLayer layer; // 0x28
		::System::Boolean needLoad; // 0x2C
		::System::Boolean hasHLOD; // 0x2D

		::System::Void _ctor(::System::Single distance)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NAPSTREAMING_STREAMINGLAYERJOBDATA__CTOR_OFFSET))(this, distance);
		}

		::System::Void _ctor_1(::NapStreaming::NapStreamingData_StreamingLayerData* data)
		{
			return ((::System::Void(*)(::PVOID, ::NapStreaming::NapStreamingData_StreamingLayerData*))((::PBYTE)hIl2Cpp + NAPSTREAMING_STREAMINGLAYERJOBDATA__CTOR_1_OFFSET))(this, data);
		}

		::System::Boolean IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSTREAMING_STREAMINGLAYERJOBDATA_ISVALID_OFFSET))(this);
		}

		::System::Void UpdateRealDistance(::System::Single coefficient, ::System::Boolean isViewPort, ::System::Single preloadDistance)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + NAPSTREAMING_STREAMINGLAYERJOBDATA_UPDATEREALDISTANCE_OFFSET))(this, coefficient, isViewPort, preloadDistance);
		}
	};
}
