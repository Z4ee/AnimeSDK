#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Component; }

#define CLASS_1_728E75114071F736___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB40E6D0)
#define CLASS_1_728E75114071F736___C__DISPLAYCLASS7_0__PLAYSHOWDEFERRED_B__0_OFFSET UNITYSDK_OFFSET(0xB40EB90)
#define CLASS_1_728E75114071F736___C__DISPLAYCLASS7_0__PLAYSHOWDEFERRED_B__1_OFFSET UNITYSDK_OFFSET(0xB40EBA0)

inline static constexpr unsigned int Class_1_728E75114071F736___c__DisplayClass7_0_TypeDefinitionIndex = 48300;

class Class_1_728E75114071F736___c__DisplayClass7_0 : public ::System::Object
{
public:
	::UnityEngine::Component* textComponent; // 0x10
	::System::Int32 motionType; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_728E75114071F736___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
	}

	::System::Void _PlayShowDeferred_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_728E75114071F736___C__DISPLAYCLASS7_0__PLAYSHOWDEFERRED_B__0_OFFSET))(this);
	}

	::System::Void _PlayShowDeferred_b__1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_728E75114071F736___C__DISPLAYCLASS7_0__PLAYSHOWDEFERRED_B__1_OFFSET))(this);
	}
};
