#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_855BB6A8CC9E7974.h"

#define CLASS_3_301DB96170A54A53_1_METHOD_3_3D2B77EBCAE390AB_OFFSET UNITYSDK_OFFSET(0x15E1EFC0)
#define CLASS_3_301DB96170A54A53_1_METHOD_3_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x15E1EF90)
#define CLASS_3_301DB96170A54A53_1__CTOR_OFFSET UNITYSDK_OFFSET(0x15E1EFA0)

inline static constexpr unsigned int Class_3_301DB96170A54A53_1_TypeDefinitionIndex = 58953;

class Class_3_301DB96170A54A53_1 : public ::Class_2_855BB6A8CC9E7974
{
public:
	::System::Int32 Field_3_0; // 0x30

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_301DB96170A54A53_1__CTOR_OFFSET))(this, a1);
	}

	::System::Int32 Method_3_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_301DB96170A54A53_1_METHOD_3_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Void Method_3_3D2B77EBCAE390AB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_301DB96170A54A53_1_METHOD_3_3D2B77EBCAE390AB_OFFSET))(this);
	}
};
