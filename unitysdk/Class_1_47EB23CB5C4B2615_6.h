#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_562CFB3355018A26;

#define CLASS_1_47EB23CB5C4B2615_6_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C76A220)
#define CLASS_1_47EB23CB5C4B2615_6__CTOR_OFFSET UNITYSDK_OFFSET(0x1C76A2A0)

inline static constexpr unsigned int Class_1_47EB23CB5C4B2615_6_TypeDefinitionIndex = 41856;

class Class_1_47EB23CB5C4B2615_6 : public ::System::Object
{
public:
	::Class_1_562CFB3355018A26* BPAPBAFOMCH; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47EB23CB5C4B2615_6__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47EB23CB5C4B2615_6_CLEAR_OFFSET))(this);
	}
};
