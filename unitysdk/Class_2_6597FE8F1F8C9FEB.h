#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8377BAB19A574A40.h"
#include "unitysdk/UnityEngine/Keyframe.h"

class Class_3_883E597458B91E77;

#define CLASS_2_6597FE8F1F8C9FEB_METHOD_2_15F4E4F86182D646_OFFSET UNITYSDK_OFFSET(0x14620550)
#define CLASS_2_6597FE8F1F8C9FEB_METHOD_2_502E4F13BFB605D5_OFFSET UNITYSDK_OFFSET(0x14620650)
#define CLASS_2_6597FE8F1F8C9FEB__CTOR_OFFSET UNITYSDK_OFFSET(0x146205E0)

inline static constexpr unsigned int Class_2_6597FE8F1F8C9FEB_TypeDefinitionIndex = 61045;

class Class_2_6597FE8F1F8C9FEB : public ::Class_1_8377BAB19A574A40
{
public:
	::Class_3_883E597458B91E77* Field_2_0; // 0x80
	::UnityEngine::Keyframe Field_2_2; // 0x88
	::UnityEngine::Keyframe Field_2_1; // 0xA4

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6597FE8F1F8C9FEB__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_15F4E4F86182D646()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6597FE8F1F8C9FEB_METHOD_2_15F4E4F86182D646_OFFSET))(this);
	}

	::System::Void Method_2_502E4F13BFB605D5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6597FE8F1F8C9FEB_METHOD_2_502E4F13BFB605D5_OFFSET))(this);
	}
};
