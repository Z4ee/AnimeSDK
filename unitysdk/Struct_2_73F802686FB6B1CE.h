#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
#include "unitysdk/System/ValueType.h"

class Class_1_1C30CE192ABE4C54;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameEntityList; }
namespace RPG::GameCore { class RtLifeBindingConfig; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

inline static constexpr unsigned int Struct_2_73F802686FB6B1CE_TypeDefinitionIndex = 51639;

struct alignas(8) Struct_2_73F802686FB6B1CE
{
	::RPG::GameCore::RtLifeBindingConfig* Field_2_0; // 0x10
	::RPG::GameCore::TaskContext* Field_2_1; // 0x18
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* Field_2_2; // 0x20
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* Field_2_3; // 0x28
	::System::Boolean Field_2_4; // 0x30
	::RPG::GameCore::GameEntity* Field_2_5; // 0x38
	::RPG::GameCore::GameEntity* Field_2_6; // 0x40
	::RPG::GameCore::GameEntityList* Field_2_7; // 0x48
	::Class_1_1C30CE192ABE4C54* Field_2_8; // 0x50
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StringHash, ::System::String*>* Field_2_9; // 0x58
};
