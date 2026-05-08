#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_MIHOYOSDKGAMEREPORTMODEL_DEVICEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1A502690)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MiHoYoSDKGameReportModel_DeviceInfo_TypeDefinitionIndex = 35164;

	class MiHoYoSDKGameReportModel_DeviceInfo : public ::System::Object
	{
	public:
		::System::String* ip; // 0x10
		::System::Int32 plat; // 0x18
		::System::String* device_id; // 0x20
		::System::String* device_name; // 0x28
		::System::String* device_model; // 0x30
		::System::String* register_cps; // 0x38
		::System::String* current_cps; // 0x40
		::System::String* bundle_id; // 0x48
		::System::String* os; // 0x50
		::System::String* channel_id; // 0x58
		::System::String* channel_subid; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKGAMEREPORTMODEL_DEVICEINFO__CTOR_OFFSET))(this);
		}
	};
}
