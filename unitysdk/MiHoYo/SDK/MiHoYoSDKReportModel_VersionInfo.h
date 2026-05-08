#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_MIHOYOSDKREPORTMODEL_VERSIONINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1A87D3F0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MiHoYoSDKReportModel_VersionInfo_TypeDefinitionIndex = 35180;

	class MiHoYoSDKReportModel_VersionInfo : public ::System::Object
	{
	public:
		::System::String* clientVersion; // 0x10
		::System::String* logVersion; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKREPORTMODEL_VERSIONINFO__CTOR_OFFSET))(this);
		}
	};
}
