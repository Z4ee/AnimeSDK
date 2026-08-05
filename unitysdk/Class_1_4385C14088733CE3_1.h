#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class AnimationCurve; }

#define CLASS_1_4385C14088733CE3_1__CTOR_OFFSET UNITYSDK_OFFSET(0x14A841C0)

inline static constexpr unsigned int Class_1_4385C14088733CE3_1_TypeDefinitionIndex = 69361;

class Class_1_4385C14088733CE3_1 : public ::System::Object
{
public:
	::UnityEngine::AnimationCurve* Field_1_0; // 0x10
	::System::Single Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4385C14088733CE3_1__CTOR_OFFSET))(this);
	}
};
