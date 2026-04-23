#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_7AAAC9B25C84E6E4.h"

namespace System { class String; }

#define CLASS_2_6C9B57E0660C13FA_GET_DAMAGECOUNTER_OFFSET UNITYSDK_OFFSET(0x11DBE670)
#define CLASS_2_6C9B57E0660C13FA_METHOD_2_3DBFFDC37289A9D8_OFFSET UNITYSDK_OFFSET(0x11DBE600)
#define CLASS_2_6C9B57E0660C13FA_SET_DAMAGECOUNTER_OFFSET UNITYSDK_OFFSET(0x11DBE680)
#define CLASS_2_6C9B57E0660C13FA__CTOR_OFFSET UNITYSDK_OFFSET(0x11DBE650)

inline static constexpr unsigned int Class_2_6C9B57E0660C13FA_TypeDefinitionIndex = 54402;

class Class_2_6C9B57E0660C13FA : public ::Class_1_7AAAC9B25C84E6E4
{
public:
	::System::UInt32 _DamageCounter_k__BackingField; // 0x10

	::System::Void _ctor(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_6C9B57E0660C13FA__CTOR_OFFSET))(this, a1);
	}

	static ::System::String* Method_2_3DBFFDC37289A9D8(::System::UInt32 a1)
	{
		return ((::System::String*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_6C9B57E0660C13FA_METHOD_2_3DBFFDC37289A9D8_OFFSET))(a1);
	}

	::System::UInt32 get_DamageCounter()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6C9B57E0660C13FA_GET_DAMAGECOUNTER_OFFSET))(this);
	}

	::System::Void set_DamageCounter(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_6C9B57E0660C13FA_SET_DAMAGECOUNTER_OFFSET))(this, value);
	}
};
