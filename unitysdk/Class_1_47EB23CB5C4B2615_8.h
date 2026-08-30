#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_26E822D022001344;

#define CLASS_1_47EB23CB5C4B2615_8_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C592770)
#define CLASS_1_47EB23CB5C4B2615_8__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5927F0)

inline static constexpr unsigned int Class_1_47EB23CB5C4B2615_8_TypeDefinitionIndex = 41862;

class Class_1_47EB23CB5C4B2615_8 : public ::System::Object
{
public:
	::Class_1_26E822D022001344* BPAPBAFOMCH; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47EB23CB5C4B2615_8__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47EB23CB5C4B2615_8_CLEAR_OFFSET))(this);
	}
};
