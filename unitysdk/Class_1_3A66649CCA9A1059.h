#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_1BB8CA1042AACD99;

#define CLASS_1_3A66649CCA9A1059_METHOD_1_097468641FDED14E_OFFSET UNITYSDK_OFFSET(0x17DBBB00)
#define CLASS_1_3A66649CCA9A1059__CTOR_OFFSET UNITYSDK_OFFSET(0x17DBBB60)

inline static constexpr unsigned int Class_1_3A66649CCA9A1059_TypeDefinitionIndex = 33987;

class Class_1_3A66649CCA9A1059 : public ::System::Object
{
public:
	::Class_2_1BB8CA1042AACD99* Field_1_0; // 0x10
	::System::Int32 Field_1_3; // 0x18
	::System::Int32 Field_1_2; // 0x1C
	::System::Boolean Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3A66649CCA9A1059__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_097468641FDED14E(::Class_1_3A66649CCA9A1059* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3A66649CCA9A1059*))((::PBYTE)hIl2Cpp + CLASS_1_3A66649CCA9A1059_METHOD_1_097468641FDED14E_OFFSET))(this, a1);
	}
};
