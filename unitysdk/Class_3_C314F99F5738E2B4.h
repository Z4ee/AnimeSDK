#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/B51RacingDisplayCarType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_3_C314F99F5738E2B4_METHOD_3_237DE7154300C94D_OFFSET UNITYSDK_OFFSET(0x1CC29B20)
#define CLASS_3_C314F99F5738E2B4_METHOD_3_4EB4DD7CBD5AE076_OFFSET UNITYSDK_OFFSET(0x1CC29B60)
#define CLASS_3_C314F99F5738E2B4__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC29B50)

inline static constexpr unsigned int Class_3_C314F99F5738E2B4_TypeDefinitionIndex = 21496;

class Class_3_C314F99F5738E2B4 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::B51RacingDisplayCarType JLMOJLLKPDI; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C314F99F5738E2B4__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_237DE7154300C94D(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_C314F99F5738E2B4*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_C314F99F5738E2B4*&))((::PBYTE)hIl2Cpp + CLASS_3_C314F99F5738E2B4_METHOD_3_237DE7154300C94D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_4EB4DD7CBD5AE076(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_C314F99F5738E2B4* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_C314F99F5738E2B4*))((::PBYTE)hIl2Cpp + CLASS_3_C314F99F5738E2B4_METHOD_3_4EB4DD7CBD5AE076_OFFSET))(a1, a2);
	}
};
