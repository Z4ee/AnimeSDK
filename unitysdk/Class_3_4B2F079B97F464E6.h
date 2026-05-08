#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_24E19BC99F801C9C.h"
#include "unitysdk/Enum_3_D09B86E9CCA638EC.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_72C0964EF93AF080;

#define CLASS_3_4B2F079B97F464E6_METHOD_3_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x13122F40)
#define CLASS_3_4B2F079B97F464E6_METHOD_3_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x13122F30)
#define CLASS_3_4B2F079B97F464E6__CTOR_OFFSET UNITYSDK_OFFSET(0x13122F50)

inline static constexpr unsigned int Class_3_4B2F079B97F464E6_TypeDefinitionIndex = 62294;

class Class_3_4B2F079B97F464E6 : public ::Class_2_24E19BC99F801C9C
{
public:
	::Class_1_72C0964EF93AF080* Field_3_7; // 0x28
	::System::Single Field_3_3; // 0x30
	::Enum_3_D09B86E9CCA638EC Field_3_0; // 0x34
	::System::Single Field_3_4; // 0x38
	::UnityEngine::Vector3 Field_3_2; // 0x3C
	::System::Boolean Field_3_6; // 0x48
	::UnityEngine::Vector3 Field_3_5; // 0x4C
	::UnityEngine::Vector3 Field_3_1; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4B2F079B97F464E6__CTOR_OFFSET))(this);
	}

	::Enum_3_D09B86E9CCA638EC Method_3_A96DCA30C6927810()
	{
		return ((::Enum_3_D09B86E9CCA638EC(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4B2F079B97F464E6_METHOD_3_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_3_3DACC45AC8150727(::Enum_3_D09B86E9CCA638EC a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_D09B86E9CCA638EC))((::PBYTE)hIl2Cpp + CLASS_3_4B2F079B97F464E6_METHOD_3_3DACC45AC8150727_OFFSET))(this, a1);
	}
};
