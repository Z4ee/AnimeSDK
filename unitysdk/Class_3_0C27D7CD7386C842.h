#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_855BB6A8CC9E7974.h"

class Class_3_AE02BC8285203464_29;

#define CLASS_3_0C27D7CD7386C842_METHOD_3_3D2B77EBCAE390AB_OFFSET UNITYSDK_OFFSET(0x12E05FD0)
#define CLASS_3_0C27D7CD7386C842_METHOD_3_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x12E05FA0)
#define CLASS_3_0C27D7CD7386C842__CTOR_OFFSET UNITYSDK_OFFSET(0x12E05FB0)

inline static constexpr unsigned int Class_3_0C27D7CD7386C842_TypeDefinitionIndex = 39688;

class Class_3_0C27D7CD7386C842 : public ::Class_2_855BB6A8CC9E7974
{
public:
	::Class_3_AE02BC8285203464_29* Field_3_0; // 0x30

	::System::Void _ctor(::Class_3_AE02BC8285203464_29* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_AE02BC8285203464_29*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_0C27D7CD7386C842__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_3_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0C27D7CD7386C842_METHOD_3_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Void Method_3_3D2B77EBCAE390AB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0C27D7CD7386C842_METHOD_3_3D2B77EBCAE390AB_OFFSET))(this);
	}
};
