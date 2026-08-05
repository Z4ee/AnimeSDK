#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_1A84C744BF703CC0.h"
#include "unitysdk/System/Object.h"

class Class_2_E23E4CB2769CC93F;

#define CLASS_1_781833E24412FAA0_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x1670CA00)
#define CLASS_1_781833E24412FAA0__CTOR_OFFSET UNITYSDK_OFFSET(0x1670C9F0)

inline static constexpr unsigned int Class_1_781833E24412FAA0_TypeDefinitionIndex = 40978;

class Class_1_781833E24412FAA0 : public ::System::Object
{
public:
	::Class_2_E23E4CB2769CC93F* Field_1_1; // 0x10
	::Struct_2_1A84C744BF703CC0 Field_1_5; // 0x18
	::System::Boolean Field_1_0; // 0x28
	::System::Boolean Field_1_7; // 0x29
	::System::Int32 Field_1_6; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_781833E24412FAA0__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_781833E24412FAA0_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}
};
