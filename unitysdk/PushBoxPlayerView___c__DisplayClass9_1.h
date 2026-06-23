#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PushBoxPlayerView_PushBoxPlayerAppearance.h"
#include "unitysdk/System/Object.h"

class PushBoxPlayerView___c__DisplayClass9_0;

#define PUSHBOXPLAYERVIEW___C__DISPLAYCLASS9_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1A514B90)
#define PUSHBOXPLAYERVIEW___C__DISPLAYCLASS9_1__SETAPPEARANCE_B__0_OFFSET UNITYSDK_OFFSET(0x1A514BA0)

inline static constexpr unsigned int PushBoxPlayerView___c__DisplayClass9_1_TypeDefinitionIndex = 41329;

class PushBoxPlayerView___c__DisplayClass9_1 : public ::System::Object
{
public:
	::PushBoxPlayerView___c__DisplayClass9_0* CS___8__locals1; // 0x10
	::PushBoxPlayerView_PushBoxPlayerAppearance appearance; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PUSHBOXPLAYERVIEW___C__DISPLAYCLASS9_1__CTOR_OFFSET))(this);
	}

	::System::Void _SetAppearance_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PUSHBOXPLAYERVIEW___C__DISPLAYCLASS9_1__SETAPPEARANCE_B__0_OFFSET))(this);
	}
};
