#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_5DA2E7556103D5A3_86;
class Class_3_67103607A6A39393_1;

#define CLASS_1_6535CE33BDD95E74_METHOD_1_7AB43846B3DE249D_OFFSET UNITYSDK_OFFSET(0x150A0C30)
#define CLASS_1_6535CE33BDD95E74__CTOR_1_OFFSET UNITYSDK_OFFSET(0x150A0B30)
#define CLASS_1_6535CE33BDD95E74__CTOR_OFFSET UNITYSDK_OFFSET(0x150A0B20)

inline static constexpr unsigned int Class_1_6535CE33BDD95E74_TypeDefinitionIndex = 89242;

class Class_1_6535CE33BDD95E74 : public ::System::Object
{
public:
	::Class_1_5DA2E7556103D5A3_86* Field_1_0; // 0x10

	::System::Void _ctor(::Class_1_5DA2E7556103D5A3_86* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5DA2E7556103D5A3_86*))((::PBYTE)hIl2Cpp + CLASS_1_6535CE33BDD95E74__CTOR_OFFSET))(this, a1);
	}

	::System::Void _ctor_1(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_6535CE33BDD95E74__CTOR_1_OFFSET))(this, a1);
	}

	::Class_3_67103607A6A39393_1* Method_1_7AB43846B3DE249D()
	{
		return ((::Class_3_67103607A6A39393_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6535CE33BDD95E74_METHOD_1_7AB43846B3DE249D_OFFSET))(this);
	}
};
