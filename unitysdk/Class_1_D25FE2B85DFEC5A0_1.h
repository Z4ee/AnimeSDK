#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_1000;

#define CLASS_1_D25FE2B85DFEC5A0_1_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x135E0010)
#define CLASS_1_D25FE2B85DFEC5A0_1_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x135E0000)
#define CLASS_1_D25FE2B85DFEC5A0_1_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x135DFFF0)
#define CLASS_1_D25FE2B85DFEC5A0_1__CTOR_OFFSET UNITYSDK_OFFSET(0x135DFFA0)

inline static constexpr unsigned int Class_1_D25FE2B85DFEC5A0_1_TypeDefinitionIndex = 82419;

class Class_1_D25FE2B85DFEC5A0_1 : public ::System::Object
{
public:
	::Class_2_208CC9941471731A_1000* Field_1_1; // 0x10
	::System::Int32 Field_1_0; // 0x18

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D25FE2B85DFEC5A0_1__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D25FE2B85DFEC5A0_1_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D25FE2B85DFEC5A0_1_METHOD_1_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D25FE2B85DFEC5A0_1_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}
};
