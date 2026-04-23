#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_177.h"

class Class_2_49CAB3DE74280C58;

#define CLASS_2_328C653BB3C536C0_3_GET_BUFFCONFIG_OFFSET UNITYSDK_OFFSET(0x98897B0)
#define CLASS_2_328C653BB3C536C0_3_GET_CASTER_OFFSET UNITYSDK_OFFSET(0x9889790)
#define CLASS_2_328C653BB3C536C0_3_SET_BUFFCONFIG_OFFSET UNITYSDK_OFFSET(0x98897C0)
#define CLASS_2_328C653BB3C536C0_3_SET_CASTER_OFFSET UNITYSDK_OFFSET(0x98897A0)
#define CLASS_2_328C653BB3C536C0_3__CTOR_OFFSET UNITYSDK_OFFSET(0x98897D0)

inline static constexpr unsigned int Class_2_328C653BB3C536C0_3_TypeDefinitionIndex = 71166;

class Class_2_328C653BB3C536C0_3 : public ::Class_1_43BD383C98B4C0C5_177
{
public:
	::Class_2_49CAB3DE74280C58* _Caster_k__BackingField; // 0x10
	::Class_2_49CAB3DE74280C58* _BuffConfig_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_328C653BB3C536C0_3__CTOR_OFFSET))(this);
	}

	::Class_2_49CAB3DE74280C58* get_Caster()
	{
		return ((::Class_2_49CAB3DE74280C58*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_328C653BB3C536C0_3_GET_CASTER_OFFSET))(this);
	}

	::System::Void set_Caster(::Class_2_49CAB3DE74280C58* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_49CAB3DE74280C58*))((::PBYTE)hIl2Cpp + CLASS_2_328C653BB3C536C0_3_SET_CASTER_OFFSET))(this, value);
	}

	::Class_2_49CAB3DE74280C58* get_BuffConfig()
	{
		return ((::Class_2_49CAB3DE74280C58*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_328C653BB3C536C0_3_GET_BUFFCONFIG_OFFSET))(this);
	}

	::System::Void set_BuffConfig(::Class_2_49CAB3DE74280C58* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_49CAB3DE74280C58*))((::PBYTE)hIl2Cpp + CLASS_2_328C653BB3C536C0_3_SET_BUFFCONFIG_OFFSET))(this, value);
	}
};
