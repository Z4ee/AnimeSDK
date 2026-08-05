#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/MoleMole/HollowChessboard/RenderDataHandle.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_F6A6667BD36A97A9__CTOR_OFFSET UNITYSDK_OFFSET(0x41E7E0)

inline static constexpr unsigned int Struct_2_F6A6667BD36A97A9_TypeDefinitionIndex = 74470;

struct alignas(8) Struct_2_F6A6667BD36A97A9
{
	::MoleMole::HollowChessboard::HollowCell Field_2_1; // 0x10
	::MoleMole::HollowChessboard::RenderDataHandle Field_2_0; // 0x20

	::System::Void _ctor(::MoleMole::HollowChessboard::HollowCell a1, ::MoleMole::HollowChessboard::RenderDataHandle a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::RenderDataHandle))((::PBYTE)hIl2Cpp + STRUCT_2_F6A6667BD36A97A9__CTOR_OFFSET))(this, a1, a2);
	}
};
