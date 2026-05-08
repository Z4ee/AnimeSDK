#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ConfigTempleLevelUpEventType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_CONFIGTEMPLELEVELUPEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x153DFCB0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigTempleLevelUpEvent_TypeDefinitionIndex = 62537;

	class ConfigTempleLevelUpEvent : public ::System::Object
	{
	public:
		::System::Single TriggerTime; // 0x10
		::MoleMole::ConfigTempleLevelUpEventType EventType; // 0x14
		::System::Int32 MainCityObjectTag; // 0x18
		::System::Boolean IsActive; // 0x1C
		::System::String* DitherKey; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGTEMPLELEVELUPEVENT__CTOR_OFFSET))(this);
		}
	};
}
