#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_2CBC78D5C92D43A4;
class Class_3_920D00A4D2C57DD8_8;

#define CLASS_1_2922DAE99E8E84C8_METHOD_1_0DB7D0C3BE3C03AA_OFFSET UNITYSDK_OFFSET(0x105B7D10)
#define CLASS_1_2922DAE99E8E84C8_METHOD_1_6185FED3C99A6893_OFFSET UNITYSDK_OFFSET(0x105B7FD0)
#define CLASS_1_2922DAE99E8E84C8__CTOR_OFFSET UNITYSDK_OFFSET(0x105B7D00)

inline static constexpr unsigned int Class_1_2922DAE99E8E84C8_TypeDefinitionIndex = 67499;

class Class_1_2922DAE99E8E84C8 : public ::System::Object
{
public:
	::Class_2_2CBC78D5C92D43A4* Field_1_1; // 0x10
	::System::Int32 Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2922DAE99E8E84C8__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_0DB7D0C3BE3C03AA(::Class_3_920D00A4D2C57DD8_8*& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_3_920D00A4D2C57DD8_8*&))((::PBYTE)hIl2Cpp + CLASS_1_2922DAE99E8E84C8_METHOD_1_0DB7D0C3BE3C03AA_OFFSET))(this, a1);
	}

	static ::Class_1_2922DAE99E8E84C8* Method_1_6185FED3C99A6893(::Class_2_2CBC78D5C92D43A4*& a1, ::System::Int32& a2)
	{
		return ((::Class_1_2922DAE99E8E84C8*(*)(::Class_2_2CBC78D5C92D43A4*&, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_2922DAE99E8E84C8_METHOD_1_6185FED3C99A6893_OFFSET))(a1, a2);
	}
};
