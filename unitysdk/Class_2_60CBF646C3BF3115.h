#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Entitas/Systems.h"

class Class_2_E541610CE7338ECE;

#define CLASS_2_60CBF646C3BF3115__CTOR_OFFSET UNITYSDK_OFFSET(0x18A38BC0)

inline static constexpr unsigned int Class_2_60CBF646C3BF3115_TypeDefinitionIndex = 34865;

class Class_2_60CBF646C3BF3115 : public ::Entitas::Systems
{
public:
	::System::Void _ctor(::Class_2_E541610CE7338ECE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_E541610CE7338ECE*))((::PBYTE)hIl2Cpp + CLASS_2_60CBF646C3BF3115__CTOR_OFFSET))(this, a1);
	}
};
