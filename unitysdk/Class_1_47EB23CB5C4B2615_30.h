#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_47F7C5DA06461F24;

#define CLASS_1_47EB23CB5C4B2615_30_CLEAR_OFFSET UNITYSDK_OFFSET(0x187A00B0)
#define CLASS_1_47EB23CB5C4B2615_30__CTOR_OFFSET UNITYSDK_OFFSET(0x187A0130)

inline static constexpr unsigned int Class_1_47EB23CB5C4B2615_30_TypeDefinitionIndex = 40442;

class Class_1_47EB23CB5C4B2615_30 : public ::System::Object
{
public:
	::Class_1_47F7C5DA06461F24* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47EB23CB5C4B2615_30__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47EB23CB5C4B2615_30_CLEAR_OFFSET))(this);
	}
};
