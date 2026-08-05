#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_SDKREPORTMODEL_DEVICEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3C8420)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int SDKReportModel_DeviceInfo_TypeDefinitionIndex = 20046;

	class SDKReportModel_DeviceInfo : public ::System::Object
	{
	public:
		::System::String* ip; // 0x10
		::System::Int32 platform; // 0x18
		::System::String* systemInfo; // 0x20
		::System::String* deviceId; // 0x28
		::System::String* deviceName; // 0x30
		::System::String* deviceModel; // 0x38
		::System::String* registerCPS; // 0x40
		::System::String* cps; // 0x48
		::System::String* uapc; // 0x50
		::System::String* bundleId; // 0x58
		::System::String* isp; // 0x60
		::System::String* device_fp; // 0x68
		::System::Int32 device_sciX; // 0x70
		::System::Int32 device_sciY; // 0x74
		::System::Int32 soft_sciX; // 0x78
		::System::Int32 soft_sciY; // 0x7C
		::System::Double romCapacity; // 0x80
		::System::Double romRemain; // 0x88
		::System::Double ramCapacity; // 0x90
		::System::Double ramRemain; // 0x98
		::System::String* network_type; // 0xA0
		::System::String* wmac; // 0xA8
		::System::String* addressMac; // 0xB0
		::System::String* gpuName; // 0xB8
		::System::Double gpuMemSize; // 0xC0
		::System::Int32 processorCount; // 0xC8
		::System::Double processorFrequency; // 0xD0
		::System::String* processorType; // 0xD8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKREPORTMODEL_DEVICEINFO__CTOR_OFFSET))(this);
		}
	};
}
