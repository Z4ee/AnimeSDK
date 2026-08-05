#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_360B5C80C04E3AB6;
class Class_3_920D00A4D2C57DD8_21;

#define CLASS_1_2922DAE99E8E84C8_METHOD_1_0DB7D0C3BE3C03AA_OFFSET UNITYSDK_OFFSET(0x175DAF50)
#define CLASS_1_2922DAE99E8E84C8_METHOD_1_6185FED3C99A6893_OFFSET UNITYSDK_OFFSET(0x175DB220)
#define CLASS_1_2922DAE99E8E84C8__CTOR_OFFSET UNITYSDK_OFFSET(0x175DAF40)

inline static constexpr unsigned int Class_1_2922DAE99E8E84C8_TypeDefinitionIndex = 74220;

class Class_1_2922DAE99E8E84C8 : public ::System::Object
{
public:
	::Class_2_360B5C80C04E3AB6* Field_1_7; // 0x10
	::System::Int32 Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2922DAE99E8E84C8__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_0DB7D0C3BE3C03AA(::Class_3_920D00A4D2C57DD8_21*& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_3_920D00A4D2C57DD8_21*&))((::PBYTE)hIl2Cpp + CLASS_1_2922DAE99E8E84C8_METHOD_1_0DB7D0C3BE3C03AA_OFFSET))(this, a1);
	}

	static ::Class_1_2922DAE99E8E84C8* Method_1_6185FED3C99A6893(::Class_2_360B5C80C04E3AB6*& a1, ::System::Int32& a2)
	{
		return ((::Class_1_2922DAE99E8E84C8*(*)(::Class_2_360B5C80C04E3AB6*&, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_2922DAE99E8E84C8_METHOD_1_6185FED3C99A6893_OFFSET))(a1, a2);
	}
};
