#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_54897FD7051CEF6A_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1676CB80)
#define CLASS_1_54897FD7051CEF6A_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x1676CB90)
#define CLASS_1_54897FD7051CEF6A__CTOR_OFFSET UNITYSDK_OFFSET(0x1676CB70)

inline static constexpr unsigned int Class_1_54897FD7051CEF6A_TypeDefinitionIndex = 32217;

class Class_1_54897FD7051CEF6A : public ::System::Object
{
public:
	::System::Single _Value_k__BackingField; // 0x10

	::System::Void _ctor(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_54897FD7051CEF6A__CTOR_OFFSET))(this, a1);
	}

	::System::Single get_Value()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54897FD7051CEF6A_GET_VALUE_OFFSET))(this);
	}

	::System::Void set_Value(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_54897FD7051CEF6A_SET_VALUE_OFFSET))(this, value);
	}
};
