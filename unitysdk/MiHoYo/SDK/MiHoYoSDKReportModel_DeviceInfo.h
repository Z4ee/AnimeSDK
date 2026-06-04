#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_MIHOYOSDKREPORTMODEL_DEVICEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xA1AD800)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MiHoYoSDKReportModel_DeviceInfo_TypeDefinitionIndex = 43767;

	class MiHoYoSDKReportModel_DeviceInfo : public ::System::Object
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
		::System::String* bundleId; // 0x50
		::System::String* isp; // 0x58
		::System::String* device_fp; // 0x60
		::System::Int32 device_sciX; // 0x68
		::System::Int32 device_sciY; // 0x6C
		::System::Int32 soft_sciX; // 0x70
		::System::Int32 soft_sciY; // 0x74
		::System::Double romCapacity; // 0x78
		::System::Double romRemain; // 0x80
		::System::Double ramCapacity; // 0x88
		::System::Double ramRemain; // 0x90
		::System::String* networkType; // 0x98
		::System::String* wmac; // 0xA0
		::System::String* addressMac; // 0xA8
		::System::String* gpuName; // 0xB0
		::System::Double gpuMemSize; // 0xB8
		::System::Int32 processorCount; // 0xC0
		::System::Double processorFrequency; // 0xC8
		::System::String* processorType; // 0xD0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKREPORTMODEL_DEVICEINFO__CTOR_OFFSET))(this);
		}
	};
}
