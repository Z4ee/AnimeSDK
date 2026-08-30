#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_47F7C5DA06461F24;

#define CLASS_1_47EB23CB5C4B2615_37_CLEAR_OFFSET UNITYSDK_OFFSET(0x1A9EF5C0)
#define CLASS_1_47EB23CB5C4B2615_37__CTOR_OFFSET UNITYSDK_OFFSET(0x1A9EF640)

inline static constexpr unsigned int Class_1_47EB23CB5C4B2615_37_TypeDefinitionIndex = 41380;

class Class_1_47EB23CB5C4B2615_37 : public ::System::Object
{
public:
	::Class_1_47F7C5DA06461F24* DBCMEECFEBC; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47EB23CB5C4B2615_37__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47EB23CB5C4B2615_37_CLEAR_OFFSET))(this);
	}
};
