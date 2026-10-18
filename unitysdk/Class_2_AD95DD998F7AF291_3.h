#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_210.h"

class Class_2_B66C1067C0468FBB;

#define CLASS_2_AD95DD998F7AF291_3_GET_BUFFCONFIG_OFFSET UNITYSDK_OFFSET(0xBB17400)
#define CLASS_2_AD95DD998F7AF291_3_GET_CASTER_OFFSET UNITYSDK_OFFSET(0xBB173E0)
#define CLASS_2_AD95DD998F7AF291_3_SET_BUFFCONFIG_OFFSET UNITYSDK_OFFSET(0xBB17410)
#define CLASS_2_AD95DD998F7AF291_3_SET_CASTER_OFFSET UNITYSDK_OFFSET(0xBB173F0)
#define CLASS_2_AD95DD998F7AF291_3__CTOR_OFFSET UNITYSDK_OFFSET(0xBB17420)

inline static constexpr unsigned int Class_2_AD95DD998F7AF291_3_TypeDefinitionIndex = 77585;

class Class_2_AD95DD998F7AF291_3 : public ::Class_1_43BD383C98B4C0C5_210
{
public:
	::Class_2_B66C1067C0468FBB* _BuffConfig_k__BackingField; // 0x10
	::Class_2_B66C1067C0468FBB* _Caster_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AD95DD998F7AF291_3__CTOR_OFFSET))(this);
	}

	::Class_2_B66C1067C0468FBB* get_Caster()
	{
		return ((::Class_2_B66C1067C0468FBB*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AD95DD998F7AF291_3_GET_CASTER_OFFSET))(this);
	}

	::System::Void set_Caster(::Class_2_B66C1067C0468FBB* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B66C1067C0468FBB*))((::PBYTE)hIl2Cpp + CLASS_2_AD95DD998F7AF291_3_SET_CASTER_OFFSET))(this, a1);
	}

	::Class_2_B66C1067C0468FBB* get_BuffConfig()
	{
		return ((::Class_2_B66C1067C0468FBB*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AD95DD998F7AF291_3_GET_BUFFCONFIG_OFFSET))(this);
	}

	::System::Void set_BuffConfig(::Class_2_B66C1067C0468FBB* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B66C1067C0468FBB*))((::PBYTE)hIl2Cpp + CLASS_2_AD95DD998F7AF291_3_SET_BUFFCONFIG_OFFSET))(this, a1);
	}
};
