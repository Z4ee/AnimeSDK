#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PushBoxPlayerView_PushBoxPlayerAppearance.h"
#include "unitysdk/System/Object.h"

class PushBoxPlayerView___c__DisplayClass9_0;

#define PUSHBOXPLAYERVIEW___C__DISPLAYCLASS9_1__CTOR_OFFSET UNITYSDK_OFFSET(0xF2A7630)
#define PUSHBOXPLAYERVIEW___C__DISPLAYCLASS9_1__SETAPPEARANCE_B__0_OFFSET UNITYSDK_OFFSET(0xF2A7640)

inline static constexpr unsigned int PushBoxPlayerView___c__DisplayClass9_1_TypeDefinitionIndex = 52953;

class PushBoxPlayerView___c__DisplayClass9_1 : public ::System::Object
{
public:
	::PushBoxPlayerView_PushBoxPlayerAppearance appearance; // 0x10
	::PushBoxPlayerView___c__DisplayClass9_0* CS___8__locals1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PUSHBOXPLAYERVIEW___C__DISPLAYCLASS9_1__CTOR_OFFSET))(this);
	}

	::System::Void _SetAppearance_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PUSHBOXPLAYERVIEW___C__DISPLAYCLASS9_1__SETAPPEARANCE_B__0_OFFSET))(this);
	}
};
