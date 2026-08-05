#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_855BB6A8CC9E7974.h"

class Class_2_208CC9941471731A_956;
class Class_2_544292CE70D394DF;

#define CLASS_3_60E1D351EE1DEED8_1_METHOD_3_460F8AE6EF9687FD_OFFSET UNITYSDK_OFFSET(0x141DD890)
#define CLASS_3_60E1D351EE1DEED8_1_METHOD_3_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x141DD880)
#define CLASS_3_60E1D351EE1DEED8_1__CTOR_OFFSET UNITYSDK_OFFSET(0x141DD780)

inline static constexpr unsigned int Class_3_60E1D351EE1DEED8_1_TypeDefinitionIndex = 53969;

class Class_3_60E1D351EE1DEED8_1 : public ::Class_2_855BB6A8CC9E7974
{
public:
	::Class_2_208CC9941471731A_956* Field_3_7; // 0x30
	::Class_2_544292CE70D394DF* Field_3_0; // 0x38

	::System::Void _ctor(::Class_2_544292CE70D394DF* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_544292CE70D394DF*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_60E1D351EE1DEED8_1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_3_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_60E1D351EE1DEED8_1_METHOD_3_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Void Method_3_460F8AE6EF9687FD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_60E1D351EE1DEED8_1_METHOD_3_460F8AE6EF9687FD_OFFSET))(this);
	}
};
