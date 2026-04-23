#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_177.h"

class Class_2_49CAB3DE74280C58;

#define CLASS_2_8CA6B37A399BC08D_GET_CASTER_OFFSET UNITYSDK_OFFSET(0x1234F4F0)
#define CLASS_2_8CA6B37A399BC08D_GET_SKILLID_OFFSET UNITYSDK_OFFSET(0x1234F4D0)
#define CLASS_2_8CA6B37A399BC08D_SET_CASTER_OFFSET UNITYSDK_OFFSET(0x1234F500)
#define CLASS_2_8CA6B37A399BC08D_SET_SKILLID_OFFSET UNITYSDK_OFFSET(0x1234F4E0)
#define CLASS_2_8CA6B37A399BC08D__CTOR_OFFSET UNITYSDK_OFFSET(0x1234F510)

inline static constexpr unsigned int Class_2_8CA6B37A399BC08D_TypeDefinitionIndex = 71165;

class Class_2_8CA6B37A399BC08D : public ::Class_1_43BD383C98B4C0C5_177
{
public:
	::Class_2_49CAB3DE74280C58* _Caster_k__BackingField; // 0x10
	::System::UInt32 _SkillID_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8CA6B37A399BC08D__CTOR_OFFSET))(this);
	}

	::System::UInt32 get_SkillID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8CA6B37A399BC08D_GET_SKILLID_OFFSET))(this);
	}

	::System::Void set_SkillID(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_8CA6B37A399BC08D_SET_SKILLID_OFFSET))(this, value);
	}

	::Class_2_49CAB3DE74280C58* get_Caster()
	{
		return ((::Class_2_49CAB3DE74280C58*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8CA6B37A399BC08D_GET_CASTER_OFFSET))(this);
	}

	::System::Void set_Caster(::Class_2_49CAB3DE74280C58* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_49CAB3DE74280C58*))((::PBYTE)hIl2Cpp + CLASS_2_8CA6B37A399BC08D_SET_CASTER_OFFSET))(this, value);
	}
};
