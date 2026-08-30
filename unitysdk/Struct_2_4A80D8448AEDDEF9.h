#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::GameCore::Match3 { class BirdPieceTypeWeightConfig; }
namespace RPG::GameCore::Match3 { class Match3BirdSkillConfig; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

inline static constexpr unsigned int Struct_2_4A80D8448AEDDEF9_TypeDefinitionIndex = 40930;

struct alignas(8) Struct_2_4A80D8448AEDDEF9
{
	::System::UInt32 BOKJJKFCFME; // 0x10
	::RPG::GameCore::Match3::Match3BirdSkillConfig* APOJICIKJPF; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* BALGFKCIADM; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* LFKDGDMCDMD; // 0x28
	::System::Collections::Generic::List_1<::RPG::GameCore::Match3::BirdPieceTypeWeightConfig*>* NJLLIAIBCAK; // 0x30
};
