#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/System/Object.h"

class PushBoxGameView;
namespace System { template <typename T1, typename T2> class Action_2; }

#define PUSHBOXGAMEVIEW___C__DISPLAYCLASS67_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0E37F0)
#define PUSHBOXGAMEVIEW___C__DISPLAYCLASS67_0__TRYENTITYMOVE_B__0_OFFSET UNITYSDK_OFFSET(0x1A0E3800)

inline static constexpr unsigned int PushBoxGameView___c__DisplayClass67_0_TypeDefinitionIndex = 42719;

class PushBoxGameView___c__DisplayClass67_0 : public ::System::Object
{
public:
	::System::Action_2<::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell>* onMoveSuccess; // 0x10
	::PushBoxGameView* __4__this; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PUSHBOXGAMEVIEW___C__DISPLAYCLASS67_0__CTOR_OFFSET))(this);
	}

	::System::Void _TryEntityMove_b__0(::MoleMole::HollowChessboard::HollowCell target, ::MoleMole::HollowChessboard::HollowCell b, ::MoleMole::HollowChessboard::HollowCell rawTarget, ::MoleMole::HollowChessboard::HollowCell netTarget)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + PUSHBOXGAMEVIEW___C__DISPLAYCLASS67_0__TRYENTITYMOVE_B__0_OFFSET))(this, target, b, rawTarget, netTarget);
	}
};
