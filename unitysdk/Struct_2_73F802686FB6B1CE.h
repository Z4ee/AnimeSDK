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

inline static constexpr unsigned int Struct_2_73F802686FB6B1CE_TypeDefinitionIndex = 54323;

struct alignas(8) Struct_2_73F802686FB6B1CE
{
	::RPG::GameCore::RtLifeBindingConfig* IMGOLMNHMGB; // 0x10
	::RPG::GameCore::TaskContext* GPKCGOLOJKC; // 0x18
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* ELGMGKGMCCM; // 0x20
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* AIBLKCJHCCC; // 0x28
	::System::Boolean PIMMBHAKAFF; // 0x30
	::RPG::GameCore::GameEntity* BBOFFGLPHCJ; // 0x38
	::RPG::GameCore::GameEntity* BCJFPLDEDJE; // 0x40
	::RPG::GameCore::GameEntityList* CGNJAJMEKOI; // 0x48
	::Class_1_1C30CE192ABE4C54* NCMDGGHBPFD; // 0x50
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StringHash, ::System::String*>* IGHNLNEHFOI; // 0x58
};
