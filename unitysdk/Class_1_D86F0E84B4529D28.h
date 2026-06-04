#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_D86F0E84B4529D28_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x18C2E930)
#define CLASS_1_D86F0E84B4529D28_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x18C2E940)
#define CLASS_1_D86F0E84B4529D28__CTOR_OFFSET UNITYSDK_OFFSET(0x18C2E920)

inline static constexpr unsigned int Class_1_D86F0E84B4529D28_TypeDefinitionIndex = 38674;

class Class_1_D86F0E84B4529D28 : public ::System::Object
{
public:
	::System::Single _Value_k__BackingField; // 0x10

	::System::Void _ctor(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_D86F0E84B4529D28__CTOR_OFFSET))(this, a1);
	}

	::System::Single get_Value()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D86F0E84B4529D28_GET_VALUE_OFFSET))(this);
	}

	::System::Void set_Value(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_D86F0E84B4529D28_SET_VALUE_OFFSET))(this, a1);
	}
};
