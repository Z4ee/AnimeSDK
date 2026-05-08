#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/System/ValueType.h"

#define CLASS_5_0DB196DE3B98F87A_STRUCT_2_B220AA7EE952473A_METHOD_2_9311E3D5615A8705_OFFSET UNITYSDK_OFFSET(0x18263BD0)
#define CLASS_5_0DB196DE3B98F87A_STRUCT_2_B220AA7EE952473A__CTOR_OFFSET UNITYSDK_OFFSET(0x317F00)

inline static constexpr unsigned int Class_5_0DB196DE3B98F87A_Struct_2_B220AA7EE952473A_TypeDefinitionIndex = 56818;

struct alignas(4) Class_5_0DB196DE3B98F87A_Struct_2_B220AA7EE952473A
{
	::MoleMole::HollowChessboard::HollowCell Field_2_0; // 0x10
	::MoleMole::HollowChessboard::HollowCell Field_2_1; // 0x1C

	::System::Void _ctor(::MoleMole::HollowChessboard::HollowCell a1, ::MoleMole::HollowChessboard::HollowCell a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_5_0DB196DE3B98F87A_STRUCT_2_B220AA7EE952473A__CTOR_OFFSET))(this, a1, a2);
	}

	static ::Class_5_0DB196DE3B98F87A_Struct_2_B220AA7EE952473A Method_2_9311E3D5615A8705()
	{
		return ((::Class_5_0DB196DE3B98F87A_Struct_2_B220AA7EE952473A(*)())((::PBYTE)hIl2Cpp + CLASS_5_0DB196DE3B98F87A_STRUCT_2_B220AA7EE952473A_METHOD_2_9311E3D5615A8705_OFFSET))();
	}
};
