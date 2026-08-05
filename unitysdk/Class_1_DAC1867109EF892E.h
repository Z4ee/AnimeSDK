#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_2BDDF3B9890D9994.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_1_DAC1867109EF892E__CTOR_OFFSET UNITYSDK_OFFSET(0x1019A290)

inline static constexpr unsigned int Class_1_DAC1867109EF892E_TypeDefinitionIndex = 51811;

class Class_1_DAC1867109EF892E : public ::System::Object
{
public:
	::System::Action* Field_1_1; // 0x10
	::Enum_3_2BDDF3B9890D9994 Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DAC1867109EF892E__CTOR_OFFSET))(this);
	}
};
