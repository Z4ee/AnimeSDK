#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigEntityTimeSlowBase.h"

namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGENTITYTIMESLOW_GET_DURATION_OFFSET UNITYSDK_OFFSET(0x16C3EF30)
#define MOLEMOLE_CONFIG_CONFIGENTITYTIMESLOW_METHOD_2_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x16C3EFA0)
#define MOLEMOLE_CONFIG_CONFIGENTITYTIMESLOW__CTOR_OFFSET UNITYSDK_OFFSET(0x16C3EF80)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigEntityTimeSlow_TypeDefinitionIndex = 63370;

	class ConfigEntityTimeSlow : public ::MoleMole::Config::ConfigEntityTimeSlowBase
	{
	public:
		::System::Single speedStart; // 0x20
		::System::Single speedMin; // 0x24
		::System::Single accSpeedDurationBegin; // 0x28
		::System::Single speedMinTime; // 0x2C
		::System::Single accSpeedDurationEnd; // 0x30
		::System::Boolean ignorePriorityAtEnd; // 0x34
		::System::String* accSpeedCurveKeyBeginWithLibrary; // 0x38
		::System::String* accSpeedCurveKeyEndWithLibrary; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYTIMESLOW__CTOR_OFFSET))(this);
		}

		::System::Single get_Duration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYTIMESLOW_GET_DURATION_OFFSET))(this);
		}

		::System::Single Method_2_5323F2DF46A044DA()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYTIMESLOW_METHOD_2_5323F2DF46A044DA_OFFSET))(this);
		}
	};
}
