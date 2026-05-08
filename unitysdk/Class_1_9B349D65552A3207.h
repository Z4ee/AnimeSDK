#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Animations/AnimationClipPlayable.h"

#define CLASS_1_9B349D65552A3207_METHOD_1_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0xFAD9680)
#define CLASS_1_9B349D65552A3207_METHOD_1_4E140453C4B32F06_OFFSET UNITYSDK_OFFSET(0xFAD96E0)
#define CLASS_1_9B349D65552A3207_METHOD_1_9CDF01028060AD77_OFFSET UNITYSDK_OFFSET(0xFAD95F0)
#define CLASS_1_9B349D65552A3207_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0xFAD97A0)
#define CLASS_1_9B349D65552A3207__CTOR_OFFSET UNITYSDK_OFFSET(0xFAD95E0)

inline static constexpr unsigned int Class_1_9B349D65552A3207_TypeDefinitionIndex = 78343;

class Class_1_9B349D65552A3207 : public ::System::Object
{
public:
	::Foundation::AssetRequestHandle Field_1_5; // 0x10
	::System::Single Field_1_1; // 0x30
	::System::Int32 Field_1_4; // 0x34
	::UnityEngine::Animations::AnimationClipPlayable Field_1_0; // 0x38
	::System::Single Field_1_2; // 0x48
	::System::Single Field_1_3; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9B349D65552A3207__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_9CDF01028060AD77(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_9B349D65552A3207_METHOD_1_9CDF01028060AD77_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_9B349D65552A3207_METHOD_1_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_4E140453C4B32F06(::System::Single a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_9B349D65552A3207_METHOD_1_4E140453C4B32F06_OFFSET))(this, a1);
	}

	::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9B349D65552A3207_METHOD_1_B1936CE4DA97AA45_OFFSET))(this);
	}
};
