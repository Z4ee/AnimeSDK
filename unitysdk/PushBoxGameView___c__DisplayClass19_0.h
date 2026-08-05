#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowChessboardUID.h"
#include "unitysdk/Struct_2_90E529DB4DCB014F.h"
#include "unitysdk/System/Object.h"

class PushBoxGameView;

#define PUSHBOXGAMEVIEW___C__DISPLAYCLASS19_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC3E870)
#define PUSHBOXGAMEVIEW___C__DISPLAYCLASS19_0__GENCHESSBOARD_B__0_OFFSET UNITYSDK_OFFSET(0x1BC3E880)

inline static constexpr unsigned int PushBoxGameView___c__DisplayClass19_0_TypeDefinitionIndex = 84519;

class PushBoxGameView___c__DisplayClass19_0 : public ::System::Object
{
public:
	::PushBoxGameView* __4__this; // 0x10
	::Struct_2_90E529DB4DCB014F sectionId; // 0x18
	::MoleMole::HollowChessboard::HollowChessboardUID chessboardUid; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PUSHBOXGAMEVIEW___C__DISPLAYCLASS19_0__CTOR_OFFSET))(this);
	}

	::System::Void _GenChessboard_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PUSHBOXGAMEVIEW___C__DISPLAYCLASS19_0__GENCHESSBOARD_B__0_OFFSET))(this);
	}
};
