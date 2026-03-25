#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_3249864BEDFDE88B.h"
#include "unitysdk/Struct_2_EB13E12069AE9879.h"

class Class_3_5B3989A017DD01E5;
class Class_4_25476C0ECCF1BB17;

#define CLASS_3_163A9557988CEBBE__CTOR_OFFSET UNITYSDK_OFFSET(0x113F3030)

inline static constexpr unsigned int Class_3_163A9557988CEBBE_TypeDefinitionIndex = 48893;

class Class_3_163A9557988CEBBE : public ::Class_2_3249864BEDFDE88B
{
public:
	::Struct_2_EB13E12069AE9879 Field_3_1; // 0x30
	::Class_3_5B3989A017DD01E5* Field_3_2; // 0x48
	::Class_4_25476C0ECCF1BB17* Field_3_0; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_163A9557988CEBBE__CTOR_OFFSET))(this);
	}
};
