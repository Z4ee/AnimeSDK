#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_574;
class Class_1_5B1D050D81192A0F;
class Class_1_6CB9D8ECA6D8C71B;

#define CLASS_1_766364A11460DE78_METHOD_1_B248AA2483A0E270_OFFSET UNITYSDK_OFFSET(0x937E540)
#define CLASS_1_766364A11460DE78__CTOR_OFFSET UNITYSDK_OFFSET(0x937E530)

inline static constexpr unsigned int Class_1_766364A11460DE78_TypeDefinitionIndex = 59018;

class Class_1_766364A11460DE78 : public ::System::Object
{
public:
	::Class_1_5B1D050D81192A0F* Field_1_0; // 0x10
	::Class_1_6CB9D8ECA6D8C71B* Field_1_1; // 0x18

	::System::Void _ctor(::Class_1_5B1D050D81192A0F* a1, ::Class_1_6CB9D8ECA6D8C71B* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5B1D050D81192A0F*, ::Class_1_6CB9D8ECA6D8C71B*))((::PBYTE)hIl2Cpp + CLASS_1_766364A11460DE78__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_B248AA2483A0E270(::Class_0_16E4307DCC419505_574* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_574*))((::PBYTE)hIl2Cpp + CLASS_1_766364A11460DE78_METHOD_1_B248AA2483A0E270_OFFSET))(this, a1);
	}
};
