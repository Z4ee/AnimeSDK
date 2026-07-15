#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BPDecorateType.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define STRUCT_2_694E71CCF2E1357D_METHOD_2_EDBE0DAF47EEEEED_OFFSET UNITYSDK_OFFSET(0x3979D50)

inline static constexpr unsigned int Struct_2_694E71CCF2E1357D_TypeDefinitionIndex = 54342;

struct alignas(8) Struct_2_694E71CCF2E1357D
{
	::RPG::GameCore::TurnBasedModifierInstance* Field_2_0; // 0x10
	::System::Int32 Field_2_1; // 0x18
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_2_2; // 0x20
	::System::Int32 Field_2_3; // 0x28
	::RPG::GameCore::BPDecorateType Field_2_4; // 0x2C

	::System::Void Method_2_EDBE0DAF47EEEEED()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_694E71CCF2E1357D_METHOD_2_EDBE0DAF47EEEEED_OFFSET))(this);
	}
};
