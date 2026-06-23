#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B24306FC54525936.h"
#include "unitysdk/Struct_2_DB31062B5932CACE_4.h"

#define CLASS_2_F7FC7B8C5C05C207_METHOD_2_4BCD12BD91B791EF_OFFSET UNITYSDK_OFFSET(0x114E82D0)
#define CLASS_2_F7FC7B8C5C05C207_METHOD_2_D910F4D36FEA1766_OFFSET UNITYSDK_OFFSET(0x114E8370)
#define CLASS_2_F7FC7B8C5C05C207__CTOR_OFFSET UNITYSDK_OFFSET(0x114E8420)

inline static constexpr unsigned int Class_2_F7FC7B8C5C05C207_TypeDefinitionIndex = 68338;

class Class_2_F7FC7B8C5C05C207 : public ::Class_1_B24306FC54525936
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F7FC7B8C5C05C207__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_4BCD12BD91B791EF(::System::Int32 a1, ::Struct_2_DB31062B5932CACE_4 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Struct_2_DB31062B5932CACE_4))((::PBYTE)hIl2Cpp + CLASS_2_F7FC7B8C5C05C207_METHOD_2_4BCD12BD91B791EF_OFFSET))(this, a1, a2);
	}

	::Struct_2_DB31062B5932CACE_4 Method_2_D910F4D36FEA1766(::System::Int32 a1)
	{
		return ((::Struct_2_DB31062B5932CACE_4(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_F7FC7B8C5C05C207_METHOD_2_D910F4D36FEA1766_OFFSET))(this, a1);
	}
};
