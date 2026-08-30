#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BPDecorateType.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define STRUCT_2_694E71CCF2E1357D_METHOD_2_EDBE0DAF47EEEEED_OFFSET UNITYSDK_OFFSET(0x3AE5150)

inline static constexpr unsigned int Struct_2_694E71CCF2E1357D_TypeDefinitionIndex = 57063;

struct alignas(8) Struct_2_694E71CCF2E1357D
{
	::RPG::GameCore::TurnBasedModifierInstance* EKIFBHJOKFH; // 0x10
	::System::Int32 HCDEOKNIGKG; // 0x18
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* LHGDMMAFGNO; // 0x20
	::System::Int32 BJOBFAIMJAE; // 0x28
	::RPG::GameCore::BPDecorateType GMPGDEINODK; // 0x2C

	::System::Void Method_2_EDBE0DAF47EEEEED()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_694E71CCF2E1357D_METHOD_2_EDBE0DAF47EEEEED_OFFSET))(this);
	}
};
