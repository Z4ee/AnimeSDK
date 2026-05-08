#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/RenderDataHandle.h"
#include "unitysdk/System/ValueType.h"

class Class_1_FD31E4216DD30F97;

#define STRUCT_2_F85FE3BBCD81BA32__CTOR_OFFSET UNITYSDK_OFFSET(0x2FE550)

inline static constexpr unsigned int Struct_2_F85FE3BBCD81BA32_TypeDefinitionIndex = 52691;

struct alignas(8) Struct_2_F85FE3BBCD81BA32
{
	::MoleMole::HollowChessboard::RenderDataHandle Field_2_0; // 0x10
	::Class_1_FD31E4216DD30F97* Field_2_1; // 0x20

	::System::Void _ctor(::MoleMole::HollowChessboard::RenderDataHandle a1, ::Class_1_FD31E4216DD30F97* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::RenderDataHandle, ::Class_1_FD31E4216DD30F97*))((::PBYTE)hIl2Cpp + STRUCT_2_F85FE3BBCD81BA32__CTOR_OFFSET))(this, a1, a2);
	}
};
