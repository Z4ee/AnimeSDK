#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::GameCore { class GameEntity; }

#define STRUCT_2_5C51850AEEA325C9_GET_ENTITY_OFFSET UNITYSDK_OFFSET(0x1D30)
#define STRUCT_2_5C51850AEEA325C9_GET_INTERACTIONTAGS_OFFSET UNITYSDK_OFFSET(0x94D0)
#define STRUCT_2_5C51850AEEA325C9_GET_SUMMONUNITID_OFFSET UNITYSDK_OFFSET(0xACE0)
#define STRUCT_2_5C51850AEEA325C9_METHOD_2_B73185B8CBFDF101_OFFSET UNITYSDK_OFFSET(0x25B70)
#define STRUCT_2_5C51850AEEA325C9__CTOR_OFFSET UNITYSDK_OFFSET(0x1C900)

inline static constexpr unsigned int Struct_2_5C51850AEEA325C9_TypeDefinitionIndex = 53516;

struct alignas(8) Struct_2_5C51850AEEA325C9
{
	::RPG::GameCore::GameEntity* _Entity_k__BackingField; // 0x10
	::System::UInt32 _SummonUnitId_k__BackingField; // 0x18
	::Il2CppArray<::RPG::GameCore::StringHash>* _InteractionTags_k__BackingField; // 0x20

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::System::UInt32 a2, ::Il2CppArray<::RPG::GameCore::StringHash>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::UInt32, ::Il2CppArray<::RPG::GameCore::StringHash>*))((::PBYTE)hIl2Cpp + STRUCT_2_5C51850AEEA325C9__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::RPG::GameCore::GameEntity* get_Entity()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_5C51850AEEA325C9_GET_ENTITY_OFFSET))(this);
	}

	::System::UInt32 get_SummonUnitId()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_5C51850AEEA325C9_GET_SUMMONUNITID_OFFSET))(this);
	}

	::Il2CppArray<::RPG::GameCore::StringHash>* get_InteractionTags()
	{
		return ((::Il2CppArray<::RPG::GameCore::StringHash>*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_5C51850AEEA325C9_GET_INTERACTIONTAGS_OFFSET))(this);
	}

	::System::Boolean Method_2_B73185B8CBFDF101(::RPG::GameCore::StringHash a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::StringHash))((::PBYTE)hIl2Cpp + STRUCT_2_5C51850AEEA325C9_METHOD_2_B73185B8CBFDF101_OFFSET))(this, a1);
	}
};
