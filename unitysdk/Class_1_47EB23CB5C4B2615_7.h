#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1F7DEA1B9C573501;

#define CLASS_1_47EB23CB5C4B2615_7_CLEAR_OFFSET UNITYSDK_OFFSET(0x1BAB4DE0)
#define CLASS_1_47EB23CB5C4B2615_7__CTOR_OFFSET UNITYSDK_OFFSET(0x1BAB4E60)

inline static constexpr unsigned int Class_1_47EB23CB5C4B2615_7_TypeDefinitionIndex = 41860;

class Class_1_47EB23CB5C4B2615_7 : public ::System::Object
{
public:
	::Class_1_1F7DEA1B9C573501* BPAPBAFOMCH; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47EB23CB5C4B2615_7__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47EB23CB5C4B2615_7_CLEAR_OFFSET))(this);
	}
};
