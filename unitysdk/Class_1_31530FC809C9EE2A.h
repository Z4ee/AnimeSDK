#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_07C3C4D2990C49EE;

#define CLASS_1_31530FC809C9EE2A_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1987F2B0)
#define CLASS_1_31530FC809C9EE2A__CTOR_OFFSET UNITYSDK_OFFSET(0x1987F410)

inline static constexpr unsigned int Class_1_31530FC809C9EE2A_TypeDefinitionIndex = 56094;

class Class_1_31530FC809C9EE2A : public ::System::Object
{
public:
	::Class_3_07C3C4D2990C49EE* FHNFLOPBOAG; // 0x10
	::Class_3_07C3C4D2990C49EE* GEJDEFABOJM; // 0x18
	::System::Boolean FJOJGCGNNOO; // 0x20
	::System::Boolean LAMKDFKBGFA; // 0x21
	::System::Boolean OOPCCJLOGEG; // 0x22
	::System::Int32 GMDBHJKEAEI; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_31530FC809C9EE2A__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_31530FC809C9EE2A_DISPOSE_OFFSET))(this);
	}
};
