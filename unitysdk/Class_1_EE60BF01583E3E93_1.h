#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_F31A7EC67A3AEEF7.h"
#include "unitysdk/System/Object.h"

class Class_1_9E4EA1938DE3A3E4;

#define CLASS_1_EE60BF01583E3E93_1_CLEAR_OFFSET UNITYSDK_OFFSET(0x16A3EBD0)
#define CLASS_1_EE60BF01583E3E93_1__CTOR_OFFSET UNITYSDK_OFFSET(0x16A3ED10)

inline static constexpr unsigned int Class_1_EE60BF01583E3E93_1_TypeDefinitionIndex = 33469;

class Class_1_EE60BF01583E3E93_1 : public ::System::Object
{
public:
	::Struct_2_F31A7EC67A3AEEF7 Field_1_0; // 0x10
	::Class_1_9E4EA1938DE3A3E4* Field_1_1; // 0x848

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EE60BF01583E3E93_1__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EE60BF01583E3E93_1_CLEAR_OFFSET))(this);
	}
};
