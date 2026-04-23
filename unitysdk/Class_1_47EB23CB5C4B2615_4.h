#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1906F7D569574D54;

#define CLASS_1_47EB23CB5C4B2615_4_CLEAR_OFFSET UNITYSDK_OFFSET(0x17DF2B40)
#define CLASS_1_47EB23CB5C4B2615_4__CTOR_OFFSET UNITYSDK_OFFSET(0x17DF2BC0)

inline static constexpr unsigned int Class_1_47EB23CB5C4B2615_4_TypeDefinitionIndex = 39221;

class Class_1_47EB23CB5C4B2615_4 : public ::System::Object
{
public:
	::Class_1_1906F7D569574D54* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47EB23CB5C4B2615_4__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47EB23CB5C4B2615_4_CLEAR_OFFSET))(this);
	}
};
