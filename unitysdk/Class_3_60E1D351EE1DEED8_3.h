#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_855BB6A8CC9E7974.h"

class Class_2_112BCAD317CC03C6;
class Class_2_208CC9941471731A_956;

#define CLASS_3_60E1D351EE1DEED8_3_METHOD_3_AE0B725AB77F7E6F_OFFSET UNITYSDK_OFFSET(0x194BE800)
#define CLASS_3_60E1D351EE1DEED8_3_METHOD_3_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x194BE7F0)
#define CLASS_3_60E1D351EE1DEED8_3__CTOR_OFFSET UNITYSDK_OFFSET(0x194BE6F0)

inline static constexpr unsigned int Class_3_60E1D351EE1DEED8_3_TypeDefinitionIndex = 82604;

class Class_3_60E1D351EE1DEED8_3 : public ::Class_2_855BB6A8CC9E7974
{
public:
	::Class_2_208CC9941471731A_956* Field_3_0; // 0x30
	::Class_2_112BCAD317CC03C6* Field_3_1; // 0x38

	::System::Void _ctor(::Class_2_112BCAD317CC03C6* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_112BCAD317CC03C6*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_60E1D351EE1DEED8_3__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_3_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_60E1D351EE1DEED8_3_METHOD_3_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Void Method_3_AE0B725AB77F7E6F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_60E1D351EE1DEED8_3_METHOD_3_AE0B725AB77F7E6F_OFFSET))(this);
	}
};
