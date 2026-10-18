#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8A6989C352B0F0F0.h"

#define CLASS_2_A48F3719AA1CF200_38_CLEAR_OFFSET UNITYSDK_OFFSET(0x15B9DDB0)
#define CLASS_2_A48F3719AA1CF200_38__CTOR_OFFSET UNITYSDK_OFFSET(0x15B9DEB0)

inline static constexpr unsigned int Class_2_A48F3719AA1CF200_38_TypeDefinitionIndex = 73801;

class Class_2_A48F3719AA1CF200_38 : public ::Class_1_8A6989C352B0F0F0
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A48F3719AA1CF200_38__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A48F3719AA1CF200_38_CLEAR_OFFSET))(this);
	}
};
