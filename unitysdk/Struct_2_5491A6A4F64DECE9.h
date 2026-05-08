#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_22BFF0C92AB5E310.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_CDBD32A3192C9856;

#define STRUCT_2_5491A6A4F64DECE9_METHOD_2_6DCFA2ABCC63E0CC_OFFSET UNITYSDK_OFFSET(0x774DB0)
#define STRUCT_2_5491A6A4F64DECE9_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x5B28F0)

inline static constexpr unsigned int Struct_2_5491A6A4F64DECE9_TypeDefinitionIndex = 42389;

struct alignas(4) Struct_2_5491A6A4F64DECE9
{
	::System::UInt32 Field_2_0; // 0x10
	::UnityEngine::Vector3 Field_2_1; // 0x14
	::UnityEngine::Vector3 Field_2_2; // 0x20
	::Enum_3_22BFF0C92AB5E310 Field_2_3; // 0x2C

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_5491A6A4F64DECE9_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::Class_3_CDBD32A3192C9856* Method_2_6DCFA2ABCC63E0CC()
	{
		return ((::Class_3_CDBD32A3192C9856*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_5491A6A4F64DECE9_METHOD_2_6DCFA2ABCC63E0CC_OFFSET))(this);
	}
};
