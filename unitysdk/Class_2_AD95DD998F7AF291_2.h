#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_186.h"

class Class_2_B66C1067C0468FBB;

#define CLASS_2_AD95DD998F7AF291_2_GET_CASTER_OFFSET UNITYSDK_OFFSET(0xE459DD0)
#define CLASS_2_AD95DD998F7AF291_2_SET_CASTER_OFFSET UNITYSDK_OFFSET(0xE459DE0)
#define CLASS_2_AD95DD998F7AF291_2__CTOR_OFFSET UNITYSDK_OFFSET(0xE459DF0)

inline static constexpr unsigned int Class_2_AD95DD998F7AF291_2_TypeDefinitionIndex = 72102;

class Class_2_AD95DD998F7AF291_2 : public ::Class_1_43BD383C98B4C0C5_186
{
public:
	::Class_2_B66C1067C0468FBB* _Caster_k__BackingField; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AD95DD998F7AF291_2__CTOR_OFFSET))(this);
	}

	::Class_2_B66C1067C0468FBB* get_Caster()
	{
		return ((::Class_2_B66C1067C0468FBB*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AD95DD998F7AF291_2_GET_CASTER_OFFSET))(this);
	}

	::System::Void set_Caster(::Class_2_B66C1067C0468FBB* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B66C1067C0468FBB*))((::PBYTE)hIl2Cpp + CLASS_2_AD95DD998F7AF291_2_SET_CASTER_OFFSET))(this, a1);
	}
};
