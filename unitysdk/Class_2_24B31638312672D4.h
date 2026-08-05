#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_7B7970D0E94833DA.h"

class Class_3_06419CA21ECB69E6;
class Class_3_3B42BC0680587011;
class Class_3_C93CC3D2C2AC4067;

#define CLASS_2_24B31638312672D4_METHOD_2_64C97D0209200DBF_OFFSET UNITYSDK_OFFSET(0x1669C320)
#define CLASS_2_24B31638312672D4_METHOD_2_D3129FE8DF635B48_OFFSET UNITYSDK_OFFSET(0x1669BEB0)
#define CLASS_2_24B31638312672D4__CTOR_OFFSET UNITYSDK_OFFSET(0x1669C310)

inline static constexpr unsigned int Class_2_24B31638312672D4_TypeDefinitionIndex = 74392;

class Class_2_24B31638312672D4 : public ::Class_1_7B7970D0E94833DA
{
public:
	::Class_3_3B42BC0680587011* Field_2_7; // 0x28
	::Class_3_C93CC3D2C2AC4067* Field_2_0; // 0x30
	::Class_3_06419CA21ECB69E6* Field_2_1; // 0x38
	::System::Single Field_2_6; // 0x40
	::System::Single Field_2_4; // 0x44
	::System::Single Field_2_5; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_24B31638312672D4__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_D3129FE8DF635B48()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_24B31638312672D4_METHOD_2_D3129FE8DF635B48_OFFSET))(this);
	}

	::System::Void Method_2_64C97D0209200DBF(::Class_3_06419CA21ECB69E6* a1, ::Class_3_C93CC3D2C2AC4067* a2, ::Class_3_3B42BC0680587011* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_06419CA21ECB69E6*, ::Class_3_C93CC3D2C2AC4067*, ::Class_3_3B42BC0680587011*))((::PBYTE)hIl2Cpp + CLASS_2_24B31638312672D4_METHOD_2_64C97D0209200DBF_OFFSET))(this, a1, a2, a3);
	}
};
