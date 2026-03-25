#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_871;

#define CLASS_1_9D40B5B00841EA9D_GET_ISLIVE_OFFSET UNITYSDK_OFFSET(0x11441590)
#define CLASS_1_9D40B5B00841EA9D_METHOD_1_0EF345F8F1CF4181_OFFSET UNITYSDK_OFFSET(0x114415B0)
#define CLASS_1_9D40B5B00841EA9D_SET_ISLIVE_OFFSET UNITYSDK_OFFSET(0x114415A0)
#define CLASS_1_9D40B5B00841EA9D__CTOR_OFFSET UNITYSDK_OFFSET(0x114416A0)

inline static constexpr unsigned int Class_1_9D40B5B00841EA9D_TypeDefinitionIndex = 59343;

class Class_1_9D40B5B00841EA9D : public ::System::Object
{
public:
	::System::Boolean _IsLive_k__BackingField; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9D40B5B00841EA9D__CTOR_OFFSET))(this);
	}

	::System::Boolean get_IsLive()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9D40B5B00841EA9D_GET_ISLIVE_OFFSET))(this);
	}

	::System::Void set_IsLive(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_9D40B5B00841EA9D_SET_ISLIVE_OFFSET))(this, value);
	}

	::System::Void Method_1_0EF345F8F1CF4181(::Class_0_16E4307DCC419505_871* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_871*))((::PBYTE)hIl2Cpp + CLASS_1_9D40B5B00841EA9D_METHOD_1_0EF345F8F1CF4181_OFFSET))(this, a1);
	}
};
