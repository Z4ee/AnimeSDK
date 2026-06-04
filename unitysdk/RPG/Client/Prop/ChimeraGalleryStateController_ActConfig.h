#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_PROP_CHIMERAGALLERYSTATECONTROLLER_ACTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xC524030)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraGalleryStateController_ActConfig_TypeDefinitionIndex = 73013;

	class ChimeraGalleryStateController_ActConfig : public ::System::Object
	{
	public:
		::System::UInt32 ActID; // 0x10
		::System::String* ActTriggerName; // 0x18
		::System::Single ActDuration; // 0x20
		::System::Boolean HasBlendIn; // 0x24
		::System::Single ManualBlendOutDuration; // 0x28
		::System::String* BlendOutTriggerName; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAGALLERYSTATECONTROLLER_ACTCONFIG__CTOR_OFFSET))(this);
		}
	};
}
