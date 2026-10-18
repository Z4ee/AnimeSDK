#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Component; }

#define CLASS_1_AD4C41E806442A63___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB0CF2A0)
#define CLASS_1_AD4C41E806442A63___C__DISPLAYCLASS5_0__PLAYSHOW_B__0_OFFSET UNITYSDK_OFFSET(0xB0CFB50)

inline static constexpr unsigned int Class_1_AD4C41E806442A63___c__DisplayClass5_0_TypeDefinitionIndex = 47840;

class Class_1_AD4C41E806442A63___c__DisplayClass5_0 : public ::System::Object
{
public:
	::UnityEngine::Component* textComponent; // 0x10
	::System::Int32 motionType; // 0x18
	::System::Single speed; // 0x1C
	::System::Int32 retryLeft; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AD4C41E806442A63___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
	}

	::System::Void _PlayShow_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AD4C41E806442A63___C__DISPLAYCLASS5_0__PLAYSHOW_B__0_OFFSET))(this);
	}
};
