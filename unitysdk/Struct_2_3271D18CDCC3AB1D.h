#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/Struct_2_E03B78B927A9E70C_2.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::GameCore { class TurnBasedAbilityComponent; }
namespace System::Collections::Generic { template <typename T> class List_1; }

inline static constexpr unsigned int Struct_2_3271D18CDCC3AB1D_TypeDefinitionIndex = 57889;

struct alignas(8) Struct_2_3271D18CDCC3AB1D
{
	::RPG::GameCore::TurnBasedAbilityComponent* JEBFODHHNKF; // 0x10
	::RPG::GameCore::TurnBasedAbilityComponent* FDJMGGDGKGG; // 0x18
	::RPG::GameCore::AttackDamageType CPFPFFBFJCE; // 0x20
	::RPG::GameCore::FixPoint OLCFGILNNBD; // 0x28
	::RPG::GameCore::FixPoint BDLKBILKAHL; // 0x30
	::RPG::GameCore::FixPoint EIMIIHEDKFM; // 0x38
	::RPG::GameCore::FixPoint LNLOHDJIFPK; // 0x40
	::System::Boolean EJGBEABMEKE; // 0x48
	::RPG::GameCore::FixPoint NNBGALKKJJE; // 0x50
	::RPG::GameCore::FixPoint AOFEFEDNKDP; // 0x58
	::RPG::GameCore::FixPoint COFGIFJHIDK; // 0x60
	::RPG::GameCore::FixPoint DNKHOABABKJ; // 0x68
	::System::Collections::Generic::List_1<::Struct_2_E03B78B927A9E70C_2>* GPBGMEKOOFH; // 0x70
	::System::Boolean LJNOFOBCHPJ; // 0x78
};
