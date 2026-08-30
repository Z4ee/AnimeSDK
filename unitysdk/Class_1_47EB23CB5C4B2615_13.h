#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_BB62CC0FD1E45ADE_1;

#define CLASS_1_47EB23CB5C4B2615_13_CLEAR_OFFSET UNITYSDK_OFFSET(0x1D056910)
#define CLASS_1_47EB23CB5C4B2615_13__CTOR_OFFSET UNITYSDK_OFFSET(0x1D056990)

inline static constexpr unsigned int Class_1_47EB23CB5C4B2615_13_TypeDefinitionIndex = 41875;

class Class_1_47EB23CB5C4B2615_13 : public ::System::Object
{
public:
	::Class_1_BB62CC0FD1E45ADE_1* BPAPBAFOMCH; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47EB23CB5C4B2615_13__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47EB23CB5C4B2615_13_CLEAR_OFFSET))(this);
	}
};
