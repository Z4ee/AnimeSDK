#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"

#define CLASS_2_3AE2D6E9BB9BD5BE_1_GET_ISDISKFULL_OFFSET UNITYSDK_OFFSET(0xB7C7900)
#define CLASS_2_3AE2D6E9BB9BD5BE_1_SET_ISDISKFULL_OFFSET UNITYSDK_OFFSET(0xB7C7910)
#define CLASS_2_3AE2D6E9BB9BD5BE_1__CTOR_OFFSET UNITYSDK_OFFSET(0xB7C78A0)

inline static constexpr unsigned int Class_2_3AE2D6E9BB9BD5BE_1_TypeDefinitionIndex = 61366;

class Class_2_3AE2D6E9BB9BD5BE_1 : public ::System::Exception
{
public:
	::System::Boolean _IsDiskFull_k__BackingField; // 0x88

	::System::Void _ctor(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_3AE2D6E9BB9BD5BE_1__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean get_IsDiskFull()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3AE2D6E9BB9BD5BE_1_GET_ISDISKFULL_OFFSET))(this);
	}

	::System::Void set_IsDiskFull(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_3AE2D6E9BB9BD5BE_1_SET_ISDISKFULL_OFFSET))(this, a1);
	}
};
