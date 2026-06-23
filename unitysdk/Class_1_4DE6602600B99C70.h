#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class AnimationCurve; }

#define CLASS_1_4DE6602600B99C70_METHOD_1_433C24352BADAAFB_OFFSET UNITYSDK_OFFSET(0x16B15C60)
#define CLASS_1_4DE6602600B99C70_METHOD_1_96F4DD40F689F030_OFFSET UNITYSDK_OFFSET(0x16B15E80)
#define CLASS_1_4DE6602600B99C70__CTOR_OFFSET UNITYSDK_OFFSET(0x16B15C50)

inline static constexpr unsigned int Class_1_4DE6602600B99C70_TypeDefinitionIndex = 50708;

class Class_1_4DE6602600B99C70 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4DE6602600B99C70__CTOR_OFFSET))(this);
	}

	static ::System::Single Method_1_433C24352BADAAFB(::UnityEngine::AnimationCurve* a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5)
	{
		return ((::System::Single(*)(::UnityEngine::AnimationCurve*, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_4DE6602600B99C70_METHOD_1_433C24352BADAAFB_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Single Method_1_96F4DD40F689F030(::UnityEngine::AnimationCurve* a1, ::System::Single a2)
	{
		return ((::System::Single(*)(::UnityEngine::AnimationCurve*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_4DE6602600B99C70_METHOD_1_96F4DD40F689F030_OFFSET))(a1, a2);
	}
};
