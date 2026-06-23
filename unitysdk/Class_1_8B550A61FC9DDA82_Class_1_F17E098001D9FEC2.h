#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_F3B35B60B7BAFCAF_1.h"
#include "unitysdk/System/Object.h"

class Class_1_57F7F2BF8C55D6B6;
class Class_2_D02DABCF41CDA271;
class Class_2_DF2C726EEEEC912D;

#define CLASS_1_8B550A61FC9DDA82_CLASS_1_F17E098001D9FEC2_METHOD_1_EBBBED89F4A42AC6_OFFSET UNITYSDK_OFFSET(0x16FDFB50)
#define CLASS_1_8B550A61FC9DDA82_CLASS_1_F17E098001D9FEC2__CTOR_OFFSET UNITYSDK_OFFSET(0x16FDFB40)

inline static constexpr unsigned int Class_1_8B550A61FC9DDA82_Class_1_F17E098001D9FEC2_TypeDefinitionIndex = 82199;

class Class_1_8B550A61FC9DDA82_Class_1_F17E098001D9FEC2 : public ::System::Object
{
public:
	::Class_2_DF2C726EEEEC912D* Field_1_2; // 0x10
	::Class_2_D02DABCF41CDA271* Field_1_3; // 0x18
	::Enum_3_F3B35B60B7BAFCAF_1 Field_1_1; // 0x20
	::System::Int32 Field_1_0; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8B550A61FC9DDA82_CLASS_1_F17E098001D9FEC2__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_EBBBED89F4A42AC6(::Class_1_57F7F2BF8C55D6B6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_57F7F2BF8C55D6B6*))((::PBYTE)hIl2Cpp + CLASS_1_8B550A61FC9DDA82_CLASS_1_F17E098001D9FEC2_METHOD_1_EBBBED89F4A42AC6_OFFSET))(this, a1);
	}
};
