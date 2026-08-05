#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define FOUNDATION_CONFIGINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1F7812B0)

namespace Foundation
{
	inline static constexpr unsigned int ConfigInfo_TypeDefinitionIndex = 8225;

	class ConfigInfo : public ::System::Object
	{
	public:
		::System::String* GameResUrl; // 0x10
		::System::String* DesignDataUrl; // 0x18
		::System::String* LatestVersion; // 0x20
		::System::String* MinVersion; // 0x28
		::System::String* ServerListUrl; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_CONFIGINFO__CTOR_OFFSET))(this);
		}
	};
}
