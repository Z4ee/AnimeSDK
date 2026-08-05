#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define FOUNDATION_VERSIONINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1F62E5D0)

namespace Foundation
{
	inline static constexpr unsigned int VersionInfo_TypeDefinitionIndex = 7947;

	class VersionInfo : public ::System::Object
	{
	public:
		::System::String* LatestVersion; // 0x10
		::System::String* MinVersion; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VERSIONINFO__CTOR_OFFSET))(this);
		}
	};
}
