#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_09CC5D2676B783CA;
class Class_3_D609B2D3033A2054;
namespace System { class String; }

#define CLASS_1_7141F52C32C1D31C_METHOD_1_4E22A18EF530BFA8_OFFSET UNITYSDK_OFFSET(0x171AA220)
#define CLASS_1_7141F52C32C1D31C__CTOR_OFFSET UNITYSDK_OFFSET(0x171AA210)

inline static constexpr unsigned int Class_1_7141F52C32C1D31C_TypeDefinitionIndex = 79604;

class Class_1_7141F52C32C1D31C : public ::System::Object
{
public:
	::Class_3_09CC5D2676B783CA* Field_1_6; // 0x10
	::System::String* Field_1_1; // 0x18
	::System::UInt32 Field_1_7; // 0x20
	::System::UInt32 Field_1_0; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7141F52C32C1D31C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_4E22A18EF530BFA8(::Class_3_D609B2D3033A2054* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_D609B2D3033A2054*))((::PBYTE)hIl2Cpp + CLASS_1_7141F52C32C1D31C_METHOD_1_4E22A18EF530BFA8_OFFSET))(this, a1);
	}
};
