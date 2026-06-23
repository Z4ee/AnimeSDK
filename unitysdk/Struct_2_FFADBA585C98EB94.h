#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_22BFF0C92AB5E310.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_CDBD32A3192C9856_2;

#define STRUCT_2_FFADBA585C98EB94_METHOD_2_6DCFA2ABCC63E0CC_OFFSET UNITYSDK_OFFSET(0x736E90)
#define STRUCT_2_FFADBA585C98EB94_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x677870)

inline static constexpr unsigned int Struct_2_FFADBA585C98EB94_TypeDefinitionIndex = 73221;

struct alignas(8) Struct_2_FFADBA585C98EB94
{
	::System::UInt32 Field_2_0; // 0x10
	::MoleMole::EntityHandle Field_2_1; // 0x18
	::UnityEngine::Vector3 Field_2_2; // 0x28
	::UnityEngine::Vector3 Field_2_3; // 0x34
	::Enum_3_22BFF0C92AB5E310 Field_2_4; // 0x40
	::System::Boolean Field_2_5; // 0x44

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_FFADBA585C98EB94_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::Class_3_CDBD32A3192C9856_2* Method_2_6DCFA2ABCC63E0CC()
	{
		return ((::Class_3_CDBD32A3192C9856_2*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_FFADBA585C98EB94_METHOD_2_6DCFA2ABCC63E0CC_OFFSET))(this);
	}
};
