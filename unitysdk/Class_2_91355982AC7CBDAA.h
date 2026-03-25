#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Entitas/Systems.h"

class Class_2_E541610CE7338ECE;

#define CLASS_2_91355982AC7CBDAA__CTOR_OFFSET UNITYSDK_OFFSET(0x1660AEA0)

inline static constexpr unsigned int Class_2_91355982AC7CBDAA_TypeDefinitionIndex = 28848;

class Class_2_91355982AC7CBDAA : public ::Entitas::Systems
{
public:
	::System::Void _ctor(::Class_2_E541610CE7338ECE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_E541610CE7338ECE*))((::PBYTE)hIl2Cpp + CLASS_2_91355982AC7CBDAA__CTOR_OFFSET))(this, a1);
	}
};
