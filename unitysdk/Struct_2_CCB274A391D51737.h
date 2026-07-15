#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/ModifierBehaviorFlag.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class JsonEnum; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

inline static constexpr unsigned int Struct_2_CCB274A391D51737_TypeDefinitionIndex = 53523;

struct alignas(8) Struct_2_CCB274A391D51737
{
	::RPG::GameCore::GameEntity* Field_2_0; // 0x10
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_2_1; // 0x18
	::RPG::GameCore::FixPoint Field_2_2; // 0x20
	::RPG::GameCore::JsonEnum* Field_2_3; // 0x28
	::System::String* Field_2_4; // 0x30
	::System::String* Field_2_5; // 0x38
	::Il2CppArray<::RPG::GameCore::ModifierBehaviorFlag>* Field_2_6; // 0x40
	::System::String* Field_2_7; // 0x48
};
