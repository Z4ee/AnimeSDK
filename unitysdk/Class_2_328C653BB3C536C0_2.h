#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_171.h"

class Class_2_49CAB3DE74280C58;

#define CLASS_2_328C653BB3C536C0_2_GET_BUFFCONFIG_OFFSET UNITYSDK_OFFSET(0x8BB30E0)
#define CLASS_2_328C653BB3C536C0_2_GET_CASTER_OFFSET UNITYSDK_OFFSET(0x8BB30C0)
#define CLASS_2_328C653BB3C536C0_2_SET_BUFFCONFIG_OFFSET UNITYSDK_OFFSET(0x8BB30F0)
#define CLASS_2_328C653BB3C536C0_2_SET_CASTER_OFFSET UNITYSDK_OFFSET(0x8BB30D0)
#define CLASS_2_328C653BB3C536C0_2__CTOR_OFFSET UNITYSDK_OFFSET(0x8BB3100)

inline static constexpr unsigned int Class_2_328C653BB3C536C0_2_TypeDefinitionIndex = 63126;

class Class_2_328C653BB3C536C0_2 : public ::Class_1_43BD383C98B4C0C5_171
{
public:
	::Class_2_49CAB3DE74280C58* _BuffConfig_k__BackingField; // 0x10
	::Class_2_49CAB3DE74280C58* _Caster_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_328C653BB3C536C0_2__CTOR_OFFSET))(this);
	}

	::Class_2_49CAB3DE74280C58* get_Caster()
	{
		return ((::Class_2_49CAB3DE74280C58*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_328C653BB3C536C0_2_GET_CASTER_OFFSET))(this);
	}

	::System::Void set_Caster(::Class_2_49CAB3DE74280C58* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_49CAB3DE74280C58*))((::PBYTE)hIl2Cpp + CLASS_2_328C653BB3C536C0_2_SET_CASTER_OFFSET))(this, value);
	}

	::Class_2_49CAB3DE74280C58* get_BuffConfig()
	{
		return ((::Class_2_49CAB3DE74280C58*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_328C653BB3C536C0_2_GET_BUFFCONFIG_OFFSET))(this);
	}

	::System::Void set_BuffConfig(::Class_2_49CAB3DE74280C58* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_49CAB3DE74280C58*))((::PBYTE)hIl2Cpp + CLASS_2_328C653BB3C536C0_2_SET_BUFFCONFIG_OFFSET))(this, value);
	}
};
