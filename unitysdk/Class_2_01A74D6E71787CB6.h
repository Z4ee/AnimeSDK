#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Entitas/Systems.h"

class Class_2_E541610CE7338ECE;

#define CLASS_2_01A74D6E71787CB6__CTOR_OFFSET UNITYSDK_OFFSET(0x17D96360)

inline static constexpr unsigned int Class_2_01A74D6E71787CB6_TypeDefinitionIndex = 34582;

class Class_2_01A74D6E71787CB6 : public ::Entitas::Systems
{
public:
	::System::Void _ctor(::Class_2_E541610CE7338ECE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_E541610CE7338ECE*))((::PBYTE)hIl2Cpp + CLASS_2_01A74D6E71787CB6__CTOR_OFFSET))(this, a1);
	}
};
