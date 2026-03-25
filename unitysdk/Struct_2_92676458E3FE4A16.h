#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BPDecorateType.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define STRUCT_2_92676458E3FE4A16_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x76710)

inline static constexpr unsigned int Struct_2_92676458E3FE4A16_TypeDefinitionIndex = 45773;

struct alignas(8) Struct_2_92676458E3FE4A16
{
	::RPG::GameCore::TurnBasedModifierInstance* Field_2_0; // 0x10
	::System::Int32 Field_2_1; // 0x18
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_2_2; // 0x20
	::System::Int32 Field_2_3; // 0x28
	::RPG::GameCore::BPDecorateType Field_2_4; // 0x2C

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_92676458E3FE4A16_METHOD_2_9681042564541CD6_OFFSET))(this);
	}
};
