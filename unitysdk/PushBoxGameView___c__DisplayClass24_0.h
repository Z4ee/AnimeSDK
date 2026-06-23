#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class PushBoxTileView;

#define PUSHBOXGAMEVIEW___C__DISPLAYCLASS24_0__CTOR_OFFSET UNITYSDK_OFFSET(0x11EAD380)
#define PUSHBOXGAMEVIEW___C__DISPLAYCLASS24_0__PLAYINITANIM_B__2_OFFSET UNITYSDK_OFFSET(0x11EAD390)
#define PUSHBOXGAMEVIEW___C__DISPLAYCLASS24_0__PLAYINITANIM_B__3_OFFSET UNITYSDK_OFFSET(0x11EAD3B0)

inline static constexpr unsigned int PushBoxGameView___c__DisplayClass24_0_TypeDefinitionIndex = 42712;

class PushBoxGameView___c__DisplayClass24_0 : public ::System::Object
{
public:
	::PushBoxTileView* tile; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PUSHBOXGAMEVIEW___C__DISPLAYCLASS24_0__CTOR_OFFSET))(this);
	}

	::System::Void _PlayInitAnim_b__2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PUSHBOXGAMEVIEW___C__DISPLAYCLASS24_0__PLAYINITANIM_B__2_OFFSET))(this);
	}

	::System::Void _PlayInitAnim_b__3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PUSHBOXGAMEVIEW___C__DISPLAYCLASS24_0__PLAYINITANIM_B__3_OFFSET))(this);
	}
};
