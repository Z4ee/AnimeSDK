#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_FD611945730E269E.h"

class Class_2_42607554D92F855D;

#define CLASS_2_A93EC97B86D238CC_METHOD_2_479759059E440327_OFFSET UNITYSDK_OFFSET(0x160B32B0)
#define CLASS_2_A93EC97B86D238CC_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x160B3260)
#define CLASS_2_A93EC97B86D238CC__CTOR_OFFSET UNITYSDK_OFFSET(0x160B3250)

inline static constexpr unsigned int Class_2_A93EC97B86D238CC_TypeDefinitionIndex = 74312;

class Class_2_A93EC97B86D238CC : public ::Class_1_FD611945730E269E
{
public:
	::Class_2_42607554D92F855D* Field_2_0; // 0x18
	::System::Single Field_2_1; // 0x20

	::System::Void _ctor(::Class_2_42607554D92F855D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_42607554D92F855D*))((::PBYTE)hIl2Cpp + CLASS_2_A93EC97B86D238CC__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A93EC97B86D238CC_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_479759059E440327(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_A93EC97B86D238CC_METHOD_2_479759059E440327_OFFSET))(this, a1);
	}
};
