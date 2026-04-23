#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_87C11F1B598BA500;

#define CLASS_1_29D63C42EA6535E9_METHOD_1_FDB878EE730B6AA4_OFFSET UNITYSDK_OFFSET(0x11840C90)
#define CLASS_1_29D63C42EA6535E9__CTOR_OFFSET UNITYSDK_OFFSET(0x11840DA0)

inline static constexpr unsigned int Class_1_29D63C42EA6535E9_TypeDefinitionIndex = 57761;

class Class_1_29D63C42EA6535E9 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_29D63C42EA6535E9__CTOR_OFFSET))(this);
	}

	::Class_1_87C11F1B598BA500* Method_1_FDB878EE730B6AA4(::System::UInt32& a1)
	{
		return ((::Class_1_87C11F1B598BA500*(*)(::PVOID, ::System::UInt32&))((::PBYTE)hIl2Cpp + CLASS_1_29D63C42EA6535E9_METHOD_1_FDB878EE730B6AA4_OFFSET))(this, a1);
	}
};
