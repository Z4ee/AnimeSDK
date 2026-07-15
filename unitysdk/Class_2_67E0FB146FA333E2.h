#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Entitas/Systems.h"

class Class_2_35962C2B7535512E;

#define CLASS_2_67E0FB146FA333E2__CTOR_OFFSET UNITYSDK_OFFSET(0x18D35700)

inline static constexpr unsigned int Class_2_67E0FB146FA333E2_TypeDefinitionIndex = 35597;

class Class_2_67E0FB146FA333E2 : public ::Entitas::Systems
{
public:
	::System::Void _ctor(::Class_2_35962C2B7535512E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_35962C2B7535512E*))((::PBYTE)hIl2Cpp + CLASS_2_67E0FB146FA333E2__CTOR_OFFSET))(this, a1);
	}
};
