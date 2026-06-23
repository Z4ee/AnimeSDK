#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_655CF136D6E47761.h"
#include "unitysdk/System/Object.h"

class Class_3_3C5ECA5FDADC11D0;

#define CLASS_1_9A44395E1722D35A__CTOR_OFFSET UNITYSDK_OFFSET(0x172705D0)

inline static constexpr unsigned int Class_1_9A44395E1722D35A_TypeDefinitionIndex = 73051;

class Class_1_9A44395E1722D35A : public ::System::Object
{
public:
	::Class_3_3C5ECA5FDADC11D0* Field_1_0; // 0x10
	::Enum_3_655CF136D6E47761 Field_1_3; // 0x18
	::Enum_3_655CF136D6E47761 Field_1_2; // 0x1C
	::System::Int32 Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9A44395E1722D35A__CTOR_OFFSET))(this);
	}
};
