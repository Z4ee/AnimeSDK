#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_MIHOYOSDKREPORTMODEL_USERINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x8D511C0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MiHoYoSDKReportModel_UserInfo_TypeDefinitionIndex = 42965;

	class MiHoYoSDKReportModel_UserInfo : public ::System::Object
	{
	public:
		::System::String* userId; // 0x10
		::System::String* accountType; // 0x18
		::System::String* accountId; // 0x20
		::System::String* channelId; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKREPORTMODEL_USERINFO__CTOR_OFFSET))(this);
		}
	};
}
