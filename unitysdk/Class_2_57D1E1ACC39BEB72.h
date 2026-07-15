#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_7AAAC9B25C84E6E4.h"

namespace System { class String; }

#define CLASS_2_57D1E1ACC39BEB72_GET_DAMAGECOUNTER_OFFSET UNITYSDK_OFFSET(0x183E15B0)
#define CLASS_2_57D1E1ACC39BEB72_METHOD_2_3DBFFDC37289A9D8_OFFSET UNITYSDK_OFFSET(0x183E1540)
#define CLASS_2_57D1E1ACC39BEB72_SET_DAMAGECOUNTER_OFFSET UNITYSDK_OFFSET(0x183E15C0)
#define CLASS_2_57D1E1ACC39BEB72__CTOR_OFFSET UNITYSDK_OFFSET(0x183E1590)

inline static constexpr unsigned int Class_2_57D1E1ACC39BEB72_TypeDefinitionIndex = 56362;

class Class_2_57D1E1ACC39BEB72 : public ::Class_1_7AAAC9B25C84E6E4
{
public:
	::System::UInt32 _DamageCounter_k__BackingField; // 0x10

	::System::Void _ctor(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_57D1E1ACC39BEB72__CTOR_OFFSET))(this, a1);
	}

	static ::System::String* Method_2_3DBFFDC37289A9D8(::System::UInt32 a1)
	{
		return ((::System::String*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_57D1E1ACC39BEB72_METHOD_2_3DBFFDC37289A9D8_OFFSET))(a1);
	}

	::System::UInt32 get_DamageCounter()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_57D1E1ACC39BEB72_GET_DAMAGECOUNTER_OFFSET))(this);
	}

	::System::Void set_DamageCounter(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_57D1E1ACC39BEB72_SET_DAMAGECOUNTER_OFFSET))(this, a1);
	}
};
