#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define FOUNDATION_VERSIONFILEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1A026AE0)

namespace Foundation
{
	inline static constexpr unsigned int VersionFileInfo_TypeDefinitionIndex = 7912;

	class VersionFileInfo : public ::System::Object
	{
	public:
		::System::String* fileName; // 0x10
		::System::Int64 fileSize; // 0x18
		::System::String* fileMD5; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VERSIONFILEINFO__CTOR_OFFSET))(this);
		}
	};
}
