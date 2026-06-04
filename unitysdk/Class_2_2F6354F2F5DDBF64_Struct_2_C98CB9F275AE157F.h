#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::GameCore { class MapRotationEntityEffect; }
namespace System { class String; }

#define CLASS_2_2F6354F2F5DDBF64_STRUCT_2_C98CB9F275AE157F__CTOR_OFFSET UNITYSDK_OFFSET(0x80F20)

inline static constexpr unsigned int Class_2_2F6354F2F5DDBF64_Struct_2_C98CB9F275AE157F_TypeDefinitionIndex = 56634;

struct alignas(8) Class_2_2F6354F2F5DDBF64_Struct_2_C98CB9F275AE157F
{
	::RPG::GameCore::MapRotationEntityEffect* Field_2_0; // 0x10
	::System::String* Field_2_1; // 0x18

	::System::Void _ctor(::RPG::GameCore::MapRotationEntityEffect* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MapRotationEntityEffect*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_STRUCT_2_C98CB9F275AE157F__CTOR_OFFSET))(this, a1, a2);
	}
};
