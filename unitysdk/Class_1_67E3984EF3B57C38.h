#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_67E3984EF3B57C38_COMPARE_OFFSET UNITYSDK_OFFSET(0x12898B20)
#define CLASS_1_67E3984EF3B57C38__CTOR_OFFSET UNITYSDK_OFFSET(0x12898E30)

inline static constexpr unsigned int Class_1_67E3984EF3B57C38_TypeDefinitionIndex = 61327;

class Class_1_67E3984EF3B57C38 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_67E3984EF3B57C38__CTOR_OFFSET))(this);
	}

	::System::Int32 Compare(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_67E3984EF3B57C38_COMPARE_OFFSET))(this, a1, a2);
	}
};
