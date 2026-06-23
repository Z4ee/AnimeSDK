#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGTRIGGERCACHE__CTOR_OFFSET UNITYSDK_OFFSET(0x144E8880)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigTriggerCache_TypeDefinitionIndex = 66283;

	class ConfigTriggerCache : public ::System::Object
	{
	public:
		::System::String* triggerName; // 0x10
		::System::Int32 maxCacheFrameCnt; // 0x18
		::System::Boolean isEnableTimeSlowEffect; // 0x1C
		::System::Boolean isEnabelEditorLog; // 0x1D
		::System::Boolean resetWhenBeingHit; // 0x1E

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTRIGGERCACHE__CTOR_OFFSET))(this);
		}
	};
}
