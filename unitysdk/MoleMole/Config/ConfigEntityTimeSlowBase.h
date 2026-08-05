#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_CONFIG_CONFIGENTITYTIMESLOWBASE_GET_DURATION_OFFSET UNITYSDK_OFFSET(0x148627A0)
#define MOLEMOLE_CONFIG_CONFIGENTITYTIMESLOWBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x148627B0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigEntityTimeSlowBase_TypeDefinitionIndex = 48555;

	class ConfigEntityTimeSlowBase : public ::System::Object
	{
	public:
		::System::Int32 priority; // 0x10
		::System::Single delayTime; // 0x14
		::System::Single _Duration_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYTIMESLOWBASE__CTOR_OFFSET))(this);
		}

		::System::Single get_Duration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYTIMESLOWBASE_GET_DURATION_OFFSET))(this);
		}
	};
}
