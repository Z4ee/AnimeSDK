#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_47F7C5DA06461F24;

#define CLASS_1_47EB23CB5C4B2615_17_CLEAR_OFFSET UNITYSDK_OFFSET(0x1CA66510)
#define CLASS_1_47EB23CB5C4B2615_17__CTOR_OFFSET UNITYSDK_OFFSET(0x1CA66590)

inline static constexpr unsigned int Class_1_47EB23CB5C4B2615_17_TypeDefinitionIndex = 42992;

class Class_1_47EB23CB5C4B2615_17 : public ::System::Object
{
public:
	::Class_1_47F7C5DA06461F24* DBCMEECFEBC; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47EB23CB5C4B2615_17__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47EB23CB5C4B2615_17_CLEAR_OFFSET))(this);
	}
};
