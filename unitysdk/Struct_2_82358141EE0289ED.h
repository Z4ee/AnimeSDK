#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define STRUCT_2_82358141EE0289ED__CTOR_OFFSET UNITYSDK_OFFSET(0x74820)

inline static constexpr unsigned int Struct_2_82358141EE0289ED_TypeDefinitionIndex = 45837;

struct alignas(8) Struct_2_82358141EE0289ED
{
	::RPG::GameCore::GameEntity* Field_2_0; // 0x10
	::System::String* Field_2_1; // 0x18
	::System::Boolean Field_2_2; // 0x20
	::System::Boolean Field_2_3; // 0x21
	::System::Collections::Generic::Dictionary_2<::System::Single, ::System::Single>* Field_2_4; // 0x28

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + STRUCT_2_82358141EE0289ED__CTOR_OFFSET))(this, a1);
	}
};
