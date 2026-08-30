#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Dest/Math/IntersectionTypes.h"
#include "unitysdk/RPG/MVector2.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_EEEFC82E256132DE_METHOD_2_863B40A7020B7A2D_OFFSET UNITYSDK_OFFSET(0x3B904B0)
#define STRUCT_2_EEEFC82E256132DE_METHOD_2_922D947E1DC424C4_OFFSET UNITYSDK_OFFSET(0x3B90440)

inline static constexpr unsigned int Struct_2_EEEFC82E256132DE_TypeDefinitionIndex = 6213;

struct alignas(4) Struct_2_EEEFC82E256132DE
{
	::Dest::Math::IntersectionTypes DLMLMAGCHJK; // 0x10
	::System::Int32 LLAODKFHDOD; // 0x14
	::RPG::MVector2 CPFJGMEMLGM; // 0x18
	::RPG::MVector2 BOHPLLMNCHE; // 0x20
	::RPG::MVector2 FJIOOLKFJPL; // 0x28
	::RPG::MVector2 NDNEOOIPNAC; // 0x30
	::RPG::MVector2 IKOJENBMLGO; // 0x38
	::RPG::MVector2 MOOIFDBKPOD; // 0x40

	::RPG::MVector2 Method_2_922D947E1DC424C4(::System::Int32 a1)
	{
		return ((::RPG::MVector2(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_EEEFC82E256132DE_METHOD_2_922D947E1DC424C4_OFFSET))(this, a1);
	}

	::System::Void Method_2_863B40A7020B7A2D(::System::Int32 a1, ::RPG::MVector2 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::MVector2))((::PBYTE)hIl2Cpp + STRUCT_2_EEEFC82E256132DE_METHOD_2_863B40A7020B7A2D_OFFSET))(this, a1, a2);
	}
};
