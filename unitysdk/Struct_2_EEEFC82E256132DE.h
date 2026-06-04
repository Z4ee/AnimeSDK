#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Dest/Math/IntersectionTypes.h"
#include "unitysdk/RPG/MVector2.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_EEEFC82E256132DE_METHOD_2_863B40A7020B7A2D_OFFSET UNITYSDK_OFFSET(0x3859B60)
#define STRUCT_2_EEEFC82E256132DE_METHOD_2_922D947E1DC424C4_OFFSET UNITYSDK_OFFSET(0x3859AF0)

inline static constexpr unsigned int Struct_2_EEEFC82E256132DE_TypeDefinitionIndex = 6596;

struct alignas(4) Struct_2_EEEFC82E256132DE
{
	::Dest::Math::IntersectionTypes Field_2_0; // 0x10
	::System::Int32 Field_2_1; // 0x14
	::RPG::MVector2 Field_2_2; // 0x18
	::RPG::MVector2 Field_2_3; // 0x20
	::RPG::MVector2 Field_2_4; // 0x28
	::RPG::MVector2 Field_2_5; // 0x30
	::RPG::MVector2 Field_2_6; // 0x38
	::RPG::MVector2 Field_2_7; // 0x40

	::RPG::MVector2 Method_2_922D947E1DC424C4(::System::Int32 a1)
	{
		return ((::RPG::MVector2(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_EEEFC82E256132DE_METHOD_2_922D947E1DC424C4_OFFSET))(this, a1);
	}

	::System::Void Method_2_863B40A7020B7A2D(::System::Int32 a1, ::RPG::MVector2 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::MVector2))((::PBYTE)hIl2Cpp + STRUCT_2_EEEFC82E256132DE_METHOD_2_863B40A7020B7A2D_OFFSET))(this, a1, a2);
	}
};
