#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_177.h"

class Class_2_49CAB3DE74280C58;

#define CLASS_2_328C653BB3C536C0_2_GET_CASTER_OFFSET UNITYSDK_OFFSET(0x11D70300)
#define CLASS_2_328C653BB3C536C0_2_SET_CASTER_OFFSET UNITYSDK_OFFSET(0x11D70310)
#define CLASS_2_328C653BB3C536C0_2__CTOR_OFFSET UNITYSDK_OFFSET(0x11D70320)

inline static constexpr unsigned int Class_2_328C653BB3C536C0_2_TypeDefinitionIndex = 71164;

class Class_2_328C653BB3C536C0_2 : public ::Class_1_43BD383C98B4C0C5_177
{
public:
	::Class_2_49CAB3DE74280C58* _Caster_k__BackingField; // 0x10

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
};
