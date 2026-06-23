#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_855BB6A8CC9E7974.h"

class Class_2_208CC9941471731A_888;
class Class_2_E33C3D8379182471;

#define CLASS_3_60E1D351EE1DEED8_3_METHOD_3_460F8AE6EF9687FD_OFFSET UNITYSDK_OFFSET(0x1278A050)
#define CLASS_3_60E1D351EE1DEED8_3_METHOD_3_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x1278A040)
#define CLASS_3_60E1D351EE1DEED8_3__CTOR_OFFSET UNITYSDK_OFFSET(0x12789F40)

inline static constexpr unsigned int Class_3_60E1D351EE1DEED8_3_TypeDefinitionIndex = 78928;

class Class_3_60E1D351EE1DEED8_3 : public ::Class_2_855BB6A8CC9E7974
{
public:
	::Class_2_E33C3D8379182471* Field_3_0; // 0x30
	::Class_2_208CC9941471731A_888* Field_3_1; // 0x38

	::System::Void _ctor(::Class_2_E33C3D8379182471* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_E33C3D8379182471*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_60E1D351EE1DEED8_3__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_3_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_60E1D351EE1DEED8_3_METHOD_3_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Void Method_3_460F8AE6EF9687FD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_60E1D351EE1DEED8_3_METHOD_3_460F8AE6EF9687FD_OFFSET))(this);
	}
};
