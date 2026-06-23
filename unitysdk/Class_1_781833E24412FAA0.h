#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_1A84C744BF703CC0.h"
#include "unitysdk/System/Object.h"

class Class_2_DF2C726EEEEC912D;

#define CLASS_1_781833E24412FAA0_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0xEC1EAB0)
#define CLASS_1_781833E24412FAA0__CTOR_OFFSET UNITYSDK_OFFSET(0xEC1EAA0)

inline static constexpr unsigned int Class_1_781833E24412FAA0_TypeDefinitionIndex = 62155;

class Class_1_781833E24412FAA0 : public ::System::Object
{
public:
	::Class_2_DF2C726EEEEC912D* Field_1_0; // 0x10
	::System::Boolean Field_1_2; // 0x18
	::System::Boolean Field_1_1; // 0x19
	::System::Int32 Field_1_3; // 0x1C
	::Struct_2_1A84C744BF703CC0 Field_1_4; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_781833E24412FAA0__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_781833E24412FAA0_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}
};
