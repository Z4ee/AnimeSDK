#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F4299CC27263318B.h"

class Class_2_BD3091CEC7111000;

#define CLASS_2_02B33F6AE45D31FF_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x13A5A0C0)
#define CLASS_2_02B33F6AE45D31FF__CTOR_OFFSET UNITYSDK_OFFSET(0x13A5A100)

inline static constexpr unsigned int Class_2_02B33F6AE45D31FF_TypeDefinitionIndex = 52718;

class Class_2_02B33F6AE45D31FF : public ::Class_1_F4299CC27263318B
{
public:
	::Class_2_BD3091CEC7111000* Field_2_0; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_02B33F6AE45D31FF__CTOR_OFFSET))(this);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_02B33F6AE45D31FF_ONCREATEPROPERTY_OFFSET))(this);
	}
};
