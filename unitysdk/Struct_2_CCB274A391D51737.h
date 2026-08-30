#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/ModifierBehaviorFlag.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class JsonEnum; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

inline static constexpr unsigned int Struct_2_CCB274A391D51737_TypeDefinitionIndex = 56237;

struct alignas(8) Struct_2_CCB274A391D51737
{
	::RPG::GameCore::GameEntity* GDCCJFKJGPD; // 0x10
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* MCLLALGABAB; // 0x18
	::RPG::GameCore::FixPoint CKLLHFKPACB; // 0x20
	::RPG::GameCore::JsonEnum* PPLIJIOLFNL; // 0x28
	::System::String* MAGLCBLICBG; // 0x30
	::System::String* BCKBHPNAMKJ; // 0x38
	::Il2CppArray<::RPG::GameCore::ModifierBehaviorFlag>* HACPIPNNFGJ; // 0x40
	::System::String* GEIGNKLEOBD; // 0x48
};
