#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NapStreaming/StreamingLayer.h"
#include "unitysdk/System/Object.h"

#define NAPSTREAMING_NAPSTREAMINGDATA_STREAMINGLAYERDATA_GET_REALHLODLOADDISTANCE_OFFSET UNITYSDK_OFFSET(0x142B59C0)
#define NAPSTREAMING_NAPSTREAMINGDATA_STREAMINGLAYERDATA_GET_REALLOADDISTANCE_OFFSET UNITYSDK_OFFSET(0x142B59B0)
#define NAPSTREAMING_NAPSTREAMINGDATA_STREAMINGLAYERDATA_GET_REALUNLOADDISTANCE_OFFSET UNITYSDK_OFFSET(0x142B59D0)
#define NAPSTREAMING_NAPSTREAMINGDATA_STREAMINGLAYERDATA_UPDATEREALDISTANCE_OFFSET UNITYSDK_OFFSET(0x142B59E0)
#define NAPSTREAMING_NAPSTREAMINGDATA_STREAMINGLAYERDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x142B5B90)

namespace NapStreaming
{
	inline static constexpr unsigned int NapStreamingData_StreamingLayerData_TypeDefinitionIndex = 41794;

	class NapStreamingData_StreamingLayerData : public ::System::Object
	{
	public:
		::System::Single loadDistance; // 0x10
		::System::Single hlodLoadDistance; // 0x14
		::System::Single unloadDistance; // 0x18
		::NapStreaming::StreamingLayer layer; // 0x1C
		::System::Boolean needLoad; // 0x20
		::System::Boolean hasHLOD; // 0x21
		::System::Single realLoadDistance; // 0x24
		::System::Single realHlodLoadDistance; // 0x28
		::System::Single realUnloadDistance; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGDATA_STREAMINGLAYERDATA__CTOR_OFFSET))(this);
		}

		::System::Single get_RealLoadDistance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGDATA_STREAMINGLAYERDATA_GET_REALLOADDISTANCE_OFFSET))(this);
		}

		::System::Single get_RealHlodLoadDistance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGDATA_STREAMINGLAYERDATA_GET_REALHLODLOADDISTANCE_OFFSET))(this);
		}

		::System::Single get_RealUnloadDistance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGDATA_STREAMINGLAYERDATA_GET_REALUNLOADDISTANCE_OFFSET))(this);
		}

		::System::Void UpdateRealDistance(::System::Single coefficient, ::System::Boolean isViewPort)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGDATA_STREAMINGLAYERDATA_UPDATEREALDISTANCE_OFFSET))(this, coefficient, isViewPort);
		}
	};
}
