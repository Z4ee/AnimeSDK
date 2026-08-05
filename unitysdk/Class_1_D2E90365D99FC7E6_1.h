#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_032E3093F309FC91.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_D2E90365D99FC7E6_1_METHOD_1_AA0EFBB13088BA5E_OFFSET UNITYSDK_OFFSET(0x13B20BB0)
#define CLASS_1_D2E90365D99FC7E6_1__CTOR_OFFSET UNITYSDK_OFFSET(0x13B20BA0)

inline static constexpr unsigned int Class_1_D2E90365D99FC7E6_1_TypeDefinitionIndex = 53092;

class Class_1_D2E90365D99FC7E6_1 : public ::System::Object
{
public:
	::System::UInt32 Field_1_1; // 0x10
	::System::Int32 Field_1_0; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D2E90365D99FC7E6_1__CTOR_OFFSET))(this);
	}

	::Struct_2_032E3093F309FC91 Method_1_AA0EFBB13088BA5E()
	{
		return ((::Struct_2_032E3093F309FC91(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D2E90365D99FC7E6_1_METHOD_1_AA0EFBB13088BA5E_OFFSET))(this);
	}
};
