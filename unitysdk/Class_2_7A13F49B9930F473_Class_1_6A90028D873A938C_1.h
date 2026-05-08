#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_7A13F49B9930F473_Enum_3_5F55AD85534EEC41.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }
namespace MoleMole::MiniGame::BangbooPartyGame { class MonoBangbooPartyAIPathPoint; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::AI { class NavMeshPath; }

#define CLASS_2_7A13F49B9930F473_CLASS_1_6A90028D873A938C_1__CTOR_OFFSET UNITYSDK_OFFSET(0x12A49F60)

inline static constexpr unsigned int Class_2_7A13F49B9930F473_Class_1_6A90028D873A938C_1_TypeDefinitionIndex = 70228;

class Class_2_7A13F49B9930F473_Class_1_6A90028D873A938C_1 : public ::System::Object
{
public:
	::UnityEngine::AI::NavMeshPath* Field_1_2; // 0x10
	::MoleMole::MiniGame::BangbooPartyGame::MonoBangbooPartyAIPathPoint* Field_1_9; // 0x18
	::MoleMole::Battle::Entity* Field_1_0; // 0x20
	::MoleMole::MiniGame::BangbooPartyGame::MonoBangbooPartyAIPathPoint* Field_1_1; // 0x28
	::System::Collections::Generic::List_1<::MoleMole::MiniGame::BangbooPartyGame::MonoBangbooPartyAIPathPoint*>* Field_1_10; // 0x30
	::System::Single Field_1_12; // 0x38
	::System::Single Field_1_16; // 0x3C
	::System::Boolean Field_1_6; // 0x40
	::System::Boolean Field_1_14; // 0x41
	::System::Boolean Field_1_15; // 0x42
	::Class_2_7A13F49B9930F473_Enum_3_5F55AD85534EEC41 Field_1_4; // 0x44
	::System::Int32 Field_1_11; // 0x48
	::System::Single Field_1_19; // 0x4C
	::System::Single Field_1_8; // 0x50
	::System::Single Field_1_7; // 0x54
	::System::Single Field_1_17; // 0x58
	::System::Int32 Field_1_3; // 0x5C
	::System::Single Field_1_5; // 0x60
	::System::Single Field_1_13; // 0x64
	::System::Single Field_1_18; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7A13F49B9930F473_CLASS_1_6A90028D873A938C_1__CTOR_OFFSET))(this);
	}
};
