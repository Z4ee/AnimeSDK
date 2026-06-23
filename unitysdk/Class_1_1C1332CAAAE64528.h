#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_0_16E4307DCC419505_287;
namespace UnityEngine { class AnimationCurve; }

#define CLASS_1_1C1332CAAAE64528_METHOD_1_66F6D05493E82CD1_OFFSET UNITYSDK_OFFSET(0x17011CF0)
#define CLASS_1_1C1332CAAAE64528__CTOR_OFFSET UNITYSDK_OFFSET(0x17011EA0)

inline static constexpr unsigned int Class_1_1C1332CAAAE64528_TypeDefinitionIndex = 42691;

class Class_1_1C1332CAAAE64528 : public ::System::Object
{
public:
	::UnityEngine::AnimationCurve* Field_1_4; // 0x10
	::UnityEngine::AnimationCurve* Field_1_2; // 0x18
	::System::Single Field_1_1; // 0x20
	::System::Single Field_1_3; // 0x24
	::UnityEngine::Vector2 Field_1_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1C1332CAAAE64528__CTOR_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_287* Method_1_66F6D05493E82CD1()
	{
		return ((::Class_0_16E4307DCC419505_287*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1C1332CAAAE64528_METHOD_1_66F6D05493E82CD1_OFFSET))(this);
	}
};
