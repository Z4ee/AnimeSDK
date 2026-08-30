#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_SDKREPORTMODEL_VERSIONINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1BACE7F0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int SDKReportModel_VersionInfo_TypeDefinitionIndex = 7894;

	class SDKReportModel_VersionInfo : public ::System::Object
	{
	public:
		::System::String* clientVersion; // 0x10
		::System::String* logVersion; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKREPORTMODEL_VERSIONINFO__CTOR_OFFSET))(this);
		}
	};
}
