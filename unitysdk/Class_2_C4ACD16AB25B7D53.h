#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D5DA62FC7DE2D532.h"

class Class_1_64D890C466F37235;

#define CLASS_2_C4ACD16AB25B7D53_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1754E6D0)
#define CLASS_2_C4ACD16AB25B7D53_METHOD_2_0AB718BEE9EA06D7_OFFSET UNITYSDK_OFFSET(0x1754E630)
#define CLASS_2_C4ACD16AB25B7D53_METHOD_2_6E57D3559C10FFA9_OFFSET UNITYSDK_OFFSET(0x1754E720)
#define CLASS_2_C4ACD16AB25B7D53_METHOD_2_EFF827FF4AED81BD_OFFSET UNITYSDK_OFFSET(0x1754E770)
#define CLASS_2_C4ACD16AB25B7D53__CTOR_OFFSET UNITYSDK_OFFSET(0x1754E930)

inline static constexpr unsigned int Class_2_C4ACD16AB25B7D53_TypeDefinitionIndex = 57897;

class Class_2_C4ACD16AB25B7D53 : public ::Class_1_D5DA62FC7DE2D532
{
public:
	::Class_1_64D890C466F37235* Field_2_0; // 0x10
	::System::Single Field_2_1; // 0x18
	::System::Single Field_2_2; // 0x1C
	::System::Single Field_2_3; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C4ACD16AB25B7D53__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_0AB718BEE9EA06D7(::Class_1_64D890C466F37235* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_64D890C466F37235*))((::PBYTE)hIl2Cpp + CLASS_2_C4ACD16AB25B7D53_METHOD_2_0AB718BEE9EA06D7_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C4ACD16AB25B7D53_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_6E57D3559C10FFA9(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_C4ACD16AB25B7D53_METHOD_2_6E57D3559C10FFA9_OFFSET))(this, a1);
	}

	::System::Void Method_2_EFF827FF4AED81BD(::System::Single& a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single&, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C4ACD16AB25B7D53_METHOD_2_EFF827FF4AED81BD_OFFSET))(this, a1, a2, a3);
	}
};
