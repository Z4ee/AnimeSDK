#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_208.h"

class Class_2_B66C1067C0468FBB;

#define CLASS_2_AD95DD998F7AF291_2_GET_CASTER_OFFSET UNITYSDK_OFFSET(0x1892AC30)
#define CLASS_2_AD95DD998F7AF291_2_SET_CASTER_OFFSET UNITYSDK_OFFSET(0x1892AC40)
#define CLASS_2_AD95DD998F7AF291_2__CTOR_OFFSET UNITYSDK_OFFSET(0x1892AC50)

inline static constexpr unsigned int Class_2_AD95DD998F7AF291_2_TypeDefinitionIndex = 77111;

class Class_2_AD95DD998F7AF291_2 : public ::Class_1_43BD383C98B4C0C5_208
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
