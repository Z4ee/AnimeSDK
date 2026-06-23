#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_E1A0B536F0285137;

#define CLASS_1_21A92C5FAA405415__CTOR_OFFSET UNITYSDK_OFFSET(0x14510190)

inline static constexpr unsigned int Class_1_21A92C5FAA405415_TypeDefinitionIndex = 53492;

class Class_1_21A92C5FAA405415 : public ::System::Object
{
public:
	::System::UInt64 Field_1_1; // 0x10
	::System::Int32 Field_1_3; // 0x18
	::System::Int32 Field_1_4; // 0x1C
	::System::Int32 Field_1_2; // 0x20
	::System::Int32 Field_1_0; // 0x24

	::System::Void _ctor(::Class_3_E1A0B536F0285137* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_E1A0B536F0285137*))((::PBYTE)hIl2Cpp + CLASS_1_21A92C5FAA405415__CTOR_OFFSET))(this, a1);
	}
};
