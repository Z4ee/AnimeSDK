#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9EAC6DA0B6CFDD9B.h"
#include "unitysdk/Class_2_541464FDD89713CF_Direction.h"

class Class_1_83665B095F1535B5_24;

#define CLASS_2_541464FDD89713CF_METHOD_2_BF7BA3045EFABAA9_OFFSET UNITYSDK_OFFSET(0xB02EC60)
#define CLASS_2_541464FDD89713CF__CTOR_OFFSET UNITYSDK_OFFSET(0xB02EB40)

inline static constexpr unsigned int Class_2_541464FDD89713CF_TypeDefinitionIndex = 67651;

class Class_2_541464FDD89713CF : public ::Class_1_9EAC6DA0B6CFDD9B
{
public:
	::Class_2_541464FDD89713CF_Direction Field_2_0; // 0x20

	::System::Void _ctor(::Class_2_541464FDD89713CF_Direction a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_541464FDD89713CF_Direction))((::PBYTE)hIl2Cpp + CLASS_2_541464FDD89713CF__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_BF7BA3045EFABAA9(::Class_1_83665B095F1535B5_24* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_83665B095F1535B5_24*))((::PBYTE)hIl2Cpp + CLASS_2_541464FDD89713CF_METHOD_2_BF7BA3045EFABAA9_OFFSET))(this, a1);
	}
};
