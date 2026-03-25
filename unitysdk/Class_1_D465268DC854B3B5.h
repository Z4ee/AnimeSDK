#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_F22B920916A3710A_Class_1_93CDA5C33880619D;

#define CLASS_1_D465268DC854B3B5_METHOD_1_3091BBD11FD1CB39_OFFSET UNITYSDK_OFFSET(0xA1F2B80)
#define CLASS_1_D465268DC854B3B5_METHOD_1_AB0986A9B00DCDE3_OFFSET UNITYSDK_OFFSET(0xA1F2BE0)
#define CLASS_1_D465268DC854B3B5__CTOR_1_OFFSET UNITYSDK_OFFSET(0xA1F3120)
#define CLASS_1_D465268DC854B3B5__CTOR_OFFSET UNITYSDK_OFFSET(0xA1F3110)

inline static constexpr unsigned int Class_1_D465268DC854B3B5_TypeDefinitionIndex = 52606;

class Class_1_D465268DC854B3B5 : public ::System::Object
{
public:
	::Class_1_F22B920916A3710A_Class_1_93CDA5C33880619D* Field_1_3; // 0x10
	::System::Int32 Field_1_1; // 0x18
	::System::Int32 Field_1_2; // 0x1C
	::System::Int32 Field_1_0; // 0x20

	::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D465268DC854B3B5__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _ctor_1(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D465268DC854B3B5__CTOR_1_OFFSET))(this, a1);
	}

	::Class_1_F22B920916A3710A_Class_1_93CDA5C33880619D* Method_1_3091BBD11FD1CB39()
	{
		return ((::Class_1_F22B920916A3710A_Class_1_93CDA5C33880619D*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D465268DC854B3B5_METHOD_1_3091BBD11FD1CB39_OFFSET))(this);
	}

	::Class_1_F22B920916A3710A_Class_1_93CDA5C33880619D* Method_1_AB0986A9B00DCDE3()
	{
		return ((::Class_1_F22B920916A3710A_Class_1_93CDA5C33880619D*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D465268DC854B3B5_METHOD_1_AB0986A9B00DCDE3_OFFSET))(this);
	}
};
