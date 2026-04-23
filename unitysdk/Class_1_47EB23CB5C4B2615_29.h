#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_47F7C5DA06461F24;

#define CLASS_1_47EB23CB5C4B2615_29_CLEAR_OFFSET UNITYSDK_OFFSET(0x17EB17C0)
#define CLASS_1_47EB23CB5C4B2615_29__CTOR_OFFSET UNITYSDK_OFFSET(0x17EB1840)

inline static constexpr unsigned int Class_1_47EB23CB5C4B2615_29_TypeDefinitionIndex = 38865;

class Class_1_47EB23CB5C4B2615_29 : public ::System::Object
{
public:
	::Class_1_47F7C5DA06461F24* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47EB23CB5C4B2615_29__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47EB23CB5C4B2615_29_CLEAR_OFFSET))(this);
	}
};
