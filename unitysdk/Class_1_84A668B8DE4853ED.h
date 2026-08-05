#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_C96DD177C1F2A967.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_84A668B8DE4853ED__CTOR_OFFSET UNITYSDK_OFFSET(0x125AD070)

inline static constexpr unsigned int Class_1_84A668B8DE4853ED_TypeDefinitionIndex = 53825;

class Class_1_84A668B8DE4853ED : public ::System::Object
{
public:
	::Enum_3_C96DD177C1F2A967 Field_1_7; // 0x10
	::System::Int32 Field_1_4; // 0x14
	::System::Boolean Field_1_5; // 0x18
	::System::Boolean Field_1_6; // 0x19
	::System::Boolean Field_1_1; // 0x1A
	::System::UInt32 Field_1_0; // 0x1C

	::System::Void _ctor(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_84A668B8DE4853ED__CTOR_OFFSET))(this, a1);
	}
};
