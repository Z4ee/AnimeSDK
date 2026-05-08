#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_308;
namespace UnityEngine { class AnimationCurve; }

#define CLASS_1_4385C14088733CE3_1_METHOD_1_FA290394C46B1A04_OFFSET UNITYSDK_OFFSET(0x135CB930)
#define CLASS_1_4385C14088733CE3_1__CTOR_OFFSET UNITYSDK_OFFSET(0x135CB9E0)

inline static constexpr unsigned int Class_1_4385C14088733CE3_1_TypeDefinitionIndex = 63906;

class Class_1_4385C14088733CE3_1 : public ::System::Object
{
public:
	::UnityEngine::AnimationCurve* Field_1_1; // 0x10
	::UnityEngine::AnimationCurve* Field_1_3; // 0x18
	::UnityEngine::AnimationCurve* Field_1_7; // 0x20
	::UnityEngine::AnimationCurve* Field_1_5; // 0x28
	::System::Single Field_1_4; // 0x30
	::System::Single Field_1_6; // 0x34
	::System::Single Field_1_2; // 0x38
	::System::Single Field_1_0; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4385C14088733CE3_1__CTOR_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_308* Method_1_FA290394C46B1A04()
	{
		return ((::Class_0_16E4307DCC419505_308*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4385C14088733CE3_1_METHOD_1_FA290394C46B1A04_OFFSET))(this);
	}
};
