#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_290F18DE0106AF33_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x180F7560)
#define CLASS_1_290F18DE0106AF33_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x180F7570)
#define CLASS_1_290F18DE0106AF33__CTOR_OFFSET UNITYSDK_OFFSET(0x180F74D0)

inline static constexpr unsigned int Class_1_290F18DE0106AF33_TypeDefinitionIndex = 39482;

class Class_1_290F18DE0106AF33 : public ::System::Object
{
public:
	::System::Single _Value_k__BackingField; // 0x10

	::System::Void _ctor(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_290F18DE0106AF33__CTOR_OFFSET))(this, a1);
	}

	::System::Single get_Value()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_290F18DE0106AF33_GET_VALUE_OFFSET))(this);
	}

	::System::Void set_Value(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_290F18DE0106AF33_SET_VALUE_OFFSET))(this, a1);
	}
};
