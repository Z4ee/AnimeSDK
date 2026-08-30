#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Component; }

#define CLASS_1_728E75114071F736___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17C9BAA0)
#define CLASS_1_728E75114071F736___C__DISPLAYCLASS5_0__PLAYSHOW_B__0_OFFSET UNITYSDK_OFFSET(0x17C9C470)

inline static constexpr unsigned int Class_1_728E75114071F736___c__DisplayClass5_0_TypeDefinitionIndex = 48299;

class Class_1_728E75114071F736___c__DisplayClass5_0 : public ::System::Object
{
public:
	::UnityEngine::Component* textComponent; // 0x10
	::System::Int32 motionType; // 0x18
	::System::Single speed; // 0x1C
	::System::Int32 retryLeft; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_728E75114071F736___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
	}

	::System::Void _PlayShow_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_728E75114071F736___C__DISPLAYCLASS5_0__PLAYSHOW_B__0_OFFSET))(this);
	}
};
