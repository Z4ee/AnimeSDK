#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

#define CLASS_1_5A9918A80CE98634_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8ECBE0)

inline static constexpr unsigned int Class_1_5A9918A80CE98634_1_TypeDefinitionIndex = 40054;

class Class_1_5A9918A80CE98634_1 : public ::System::Object
{
public:
	::System::UInt32 Field_1_0; // 0x10
	::System::ValueTuple_2<::System::UInt32, ::System::UInt32> Field_1_1; // 0x14
	::System::UInt32 Field_1_2; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5A9918A80CE98634_1__CTOR_OFFSET))(this);
	}
};
