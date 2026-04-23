#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_634284739E90CAFA;

#define CLASS_1_5E0E949FD7F7BB0B___C__DISPLAYCLASS4_0__ADDORSTACKBUFF_B__0_OFFSET UNITYSDK_OFFSET(0xAFEB6D0)
#define CLASS_1_5E0E949FD7F7BB0B___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0xAFEADA0)

inline static constexpr unsigned int Class_1_5E0E949FD7F7BB0B___c__DisplayClass4_0_TypeDefinitionIndex = 71301;

class Class_1_5E0E949FD7F7BB0B___c__DisplayClass4_0 : public ::System::Object
{
public:
	::Class_1_634284739E90CAFA* buffToAdd; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5E0E949FD7F7BB0B___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _AddOrStackBuff_b__0(::Class_1_634284739E90CAFA* b)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_634284739E90CAFA*))((::PBYTE)hIl2Cpp + CLASS_1_5E0E949FD7F7BB0B___C__DISPLAYCLASS4_0__ADDORSTACKBUFF_B__0_OFFSET))(this, b);
	}
};
