#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_DCC4A220F5A3F1EE;

#define CLASS_1_47EB23CB5C4B2615_5_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C424E40)
#define CLASS_1_47EB23CB5C4B2615_5__CTOR_OFFSET UNITYSDK_OFFSET(0x1C424EC0)

inline static constexpr unsigned int Class_1_47EB23CB5C4B2615_5_TypeDefinitionIndex = 41853;

class Class_1_47EB23CB5C4B2615_5 : public ::System::Object
{
public:
	::Class_1_DCC4A220F5A3F1EE* BPAPBAFOMCH; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47EB23CB5C4B2615_5__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47EB23CB5C4B2615_5_CLEAR_OFFSET))(this);
	}
};
