#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::GameCore { class MapRotationEntityEffect; }
namespace System { class String; }

#define CLASS_2_B105BEE67D1C2502_STRUCT_2_C98CB9F275AE157F__CTOR_OFFSET UNITYSDK_OFFSET(0x80380)

inline static constexpr unsigned int Class_2_B105BEE67D1C2502_Struct_2_C98CB9F275AE157F_TypeDefinitionIndex = 60701;

struct alignas(8) Class_2_B105BEE67D1C2502_Struct_2_C98CB9F275AE157F
{
	::RPG::GameCore::MapRotationEntityEffect* HPBAMMEFDMK; // 0x10
	::System::String* GFNAPNFFGPJ; // 0x18

	::System::Void _ctor(::RPG::GameCore::MapRotationEntityEffect* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MapRotationEntityEffect*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_B105BEE67D1C2502_STRUCT_2_C98CB9F275AE157F__CTOR_OFFSET))(this, a1, a2);
	}
};
