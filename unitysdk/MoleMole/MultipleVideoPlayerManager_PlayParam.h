#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define MOLEMOLE_MULTIPLEVIDEOPLAYERMANAGER_PLAYPARAM_EQUALS_OFFSET UNITYSDK_OFFSET(0x7A2040)

namespace MoleMole
{
	inline static constexpr unsigned int MultipleVideoPlayerManager_PlayParam_TypeDefinitionIndex = 74888;

	struct alignas(8) MultipleVideoPlayerManager_PlayParam
	{
		::System::Boolean isLoop; // 0x10
		::System::String* videoUrl; // 0x18
		::System::Single blendInTime; // 0x20
		::System::Single blendOutTime; // 0x24

		::System::Boolean Equals(::MoleMole::MultipleVideoPlayerManager_PlayParam other)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::MultipleVideoPlayerManager_PlayParam))((::PBYTE)hIl2Cpp + MOLEMOLE_MULTIPLEVIDEOPLAYERMANAGER_PLAYPARAM_EQUALS_OFFSET))(this, other);
		}
	};
}
