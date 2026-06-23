#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define FOUNDATION_CONFIGINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1E4F1080)

namespace Foundation
{
	inline static constexpr unsigned int ConfigInfo_TypeDefinitionIndex = 7768;

	class ConfigInfo : public ::System::Object
	{
	public:
		::System::String* LatestVersion; // 0x10
		::System::String* ServerListUrl; // 0x18
		::System::String* MinVersion; // 0x20
		::System::String* DesignDataUrl; // 0x28
		::System::String* GameResUrl; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_CONFIGINFO__CTOR_OFFSET))(this);
		}
	};
}
