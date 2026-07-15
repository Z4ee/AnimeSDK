#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_194.h"

class Class_2_B66C1067C0468FBB;

#define CLASS_2_11C9E8916C5FDD80_GET_CASTER_OFFSET UNITYSDK_OFFSET(0x15DF66B0)
#define CLASS_2_11C9E8916C5FDD80_GET_SKILLID_OFFSET UNITYSDK_OFFSET(0x15DF6690)
#define CLASS_2_11C9E8916C5FDD80_SET_CASTER_OFFSET UNITYSDK_OFFSET(0x15DF66C0)
#define CLASS_2_11C9E8916C5FDD80_SET_SKILLID_OFFSET UNITYSDK_OFFSET(0x15DF66A0)
#define CLASS_2_11C9E8916C5FDD80__CTOR_OFFSET UNITYSDK_OFFSET(0x15DF66D0)

inline static constexpr unsigned int Class_2_11C9E8916C5FDD80_TypeDefinitionIndex = 73628;

class Class_2_11C9E8916C5FDD80 : public ::Class_1_43BD383C98B4C0C5_194
{
public:
	::Class_2_B66C1067C0468FBB* _Caster_k__BackingField; // 0x10
	::System::UInt32 _SkillID_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_11C9E8916C5FDD80__CTOR_OFFSET))(this);
	}

	::System::UInt32 get_SkillID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_11C9E8916C5FDD80_GET_SKILLID_OFFSET))(this);
	}

	::System::Void set_SkillID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_11C9E8916C5FDD80_SET_SKILLID_OFFSET))(this, a1);
	}

	::Class_2_B66C1067C0468FBB* get_Caster()
	{
		return ((::Class_2_B66C1067C0468FBB*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_11C9E8916C5FDD80_GET_CASTER_OFFSET))(this);
	}

	::System::Void set_Caster(::Class_2_B66C1067C0468FBB* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B66C1067C0468FBB*))((::PBYTE)hIl2Cpp + CLASS_2_11C9E8916C5FDD80_SET_CASTER_OFFSET))(this, a1);
	}
};
