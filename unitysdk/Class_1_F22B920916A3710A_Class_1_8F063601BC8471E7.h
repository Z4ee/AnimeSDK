#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_F22B920916A3710A_CLASS_1_8F063601BC8471E7__CTOR_OFFSET UNITYSDK_OFFSET(0x1133EBD0)

inline static constexpr unsigned int Class_1_F22B920916A3710A_Class_1_8F063601BC8471E7_TypeDefinitionIndex = 52581;

class Class_1_F22B920916A3710A_Class_1_8F063601BC8471E7 : public ::System::Object
{
public:
	::System::UInt32 Star; // 0x10
	::System::UInt32 RoleID; // 0x14
	::System::Boolean IsCarry; // 0x18
	::System::UInt32 PosIndex; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F22B920916A3710A_CLASS_1_8F063601BC8471E7__CTOR_OFFSET))(this);
	}
};
