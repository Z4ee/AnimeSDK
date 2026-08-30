#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_945ACFB1FEBC7A2C_23__CTOR_OFFSET UNITYSDK_OFFSET(0x1286E880)

inline static constexpr unsigned int Class_1_945ACFB1FEBC7A2C_23_TypeDefinitionIndex = 73188;

class Class_1_945ACFB1FEBC7A2C_23 : public ::System::Object
{
public:
	::System::String* AENODINHEMF; // 0x10
	::System::String* AHCPFFKPOMG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_945ACFB1FEBC7A2C_23__CTOR_OFFSET))(this);
	}
};
