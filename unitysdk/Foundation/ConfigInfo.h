#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define FOUNDATION_CONFIGINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1A74D0)

namespace Foundation
{
	inline static constexpr unsigned int ConfigInfo_TypeDefinitionIndex = 8067;

	class ConfigInfo : public ::System::Object
	{
	public:
		::System::String* DesignDataUrl; // 0x10
		::System::String* ServerListUrl; // 0x18
		::System::String* LatestVersion; // 0x20
		::System::String* GameResUrl; // 0x28
		::System::String* MinVersion; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_CONFIGINFO__CTOR_OFFSET))(this);
		}
	};
}
