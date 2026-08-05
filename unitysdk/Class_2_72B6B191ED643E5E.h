#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_84F790F6B4BFF34E.h"
#include "unitysdk/System/Attribute.h"

#define CLASS_2_72B6B191ED643E5E__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FC65860)
#define CLASS_2_72B6B191ED643E5E__CTOR_OFFSET UNITYSDK_OFFSET(0x1FC65850)

inline static constexpr unsigned int Class_2_72B6B191ED643E5E_TypeDefinitionIndex = 6963;

class Class_2_72B6B191ED643E5E : public ::System::Attribute
{
public:
	::Enum_3_84F790F6B4BFF34E Field_2_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_72B6B191ED643E5E__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Enum_3_84F790F6B4BFF34E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_84F790F6B4BFF34E))((::PBYTE)hIl2Cpp + CLASS_2_72B6B191ED643E5E__CTOR_1_OFFSET))(this, a1);
	}
};
