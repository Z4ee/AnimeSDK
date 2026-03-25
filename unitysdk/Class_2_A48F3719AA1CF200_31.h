#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8A6989C352B0F0F0.h"

#define CLASS_2_A48F3719AA1CF200_31_CLEAR_OFFSET UNITYSDK_OFFSET(0x9C411F0)
#define CLASS_2_A48F3719AA1CF200_31__CTOR_OFFSET UNITYSDK_OFFSET(0x9C412E0)

inline static constexpr unsigned int Class_2_A48F3719AA1CF200_31_TypeDefinitionIndex = 60501;

class Class_2_A48F3719AA1CF200_31 : public ::Class_1_8A6989C352B0F0F0
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A48F3719AA1CF200_31__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A48F3719AA1CF200_31_CLEAR_OFFSET))(this);
	}
};
