#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class AnimationCurve; }

#define CLASS_1_4385C14088733CE3_2__CTOR_OFFSET UNITYSDK_OFFSET(0x118DB840)

inline static constexpr unsigned int Class_1_4385C14088733CE3_2_TypeDefinitionIndex = 68757;

class Class_1_4385C14088733CE3_2 : public ::System::Object
{
public:
	::UnityEngine::AnimationCurve* Field_1_1; // 0x10
	::System::Single Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4385C14088733CE3_2__CTOR_OFFSET))(this);
	}
};
