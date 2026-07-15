#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_4CD8A1ACD565F336.h"

class Class_1_21DCD4640D389503_17;
namespace System { class String; }

#define CLASS_2_58CFB255DCAE7EDF__CTOR_OFFSET UNITYSDK_OFFSET(0x169CB350)

inline static constexpr unsigned int Class_2_58CFB255DCAE7EDF_TypeDefinitionIndex = 73759;

class Class_2_58CFB255DCAE7EDF : public ::Class_1_4CD8A1ACD565F336
{
public:
	::System::String* Field_2_0; // 0x28
	::System::String* Field_2_1; // 0x30
	::Class_1_21DCD4640D389503_17* Field_2_2; // 0x38
	::System::UInt32 Field_2_3; // 0x40
	::System::UInt32 Field_2_4; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_58CFB255DCAE7EDF__CTOR_OFFSET))(this);
	}
};
