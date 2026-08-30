#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_107.h"

#define CLASS_2_44CAFB3A09178D38_CLEAR_OFFSET UNITYSDK_OFFSET(0x1A9FA1A0)
#define CLASS_2_44CAFB3A09178D38__CTOR_OFFSET UNITYSDK_OFFSET(0x1A9FA1F0)

inline static constexpr unsigned int Class_2_44CAFB3A09178D38_TypeDefinitionIndex = 41845;

class Class_2_44CAFB3A09178D38 : public ::Class_1_43BD383C98B4C0C5_107
{
public:
	::System::Int32 BGCALJDKEDM; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_44CAFB3A09178D38__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_44CAFB3A09178D38_CLEAR_OFFSET))(this);
	}
};
