#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_PROP_TIMEREWINDPARTERREPUZZLECONTAINERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xA171250)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int TimeRewindParterrePuzzleContainerConfig_TypeDefinitionIndex = 64356;

	class TimeRewindParterrePuzzleContainerConfig : public ::System::Object
	{
	public:
		::System::UInt32 ContainerInstanceID; // 0x10
		::System::String* ContainerStateName; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TIMEREWINDPARTERREPUZZLECONTAINERCONFIG__CTOR_OFFSET))(this);
		}
	};
}
