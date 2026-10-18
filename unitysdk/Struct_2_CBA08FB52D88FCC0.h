#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0F1B992870941C13_1.h"
#include "unitysdk/RPG/Client/Multiplayer/MPSessionState.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_CBA08FB52D88FCC0_GET_GAMEMODE_OFFSET UNITYSDK_OFFSET(0xE620)
#define STRUCT_2_CBA08FB52D88FCC0_GET_NEWSTATE_OFFSET UNITYSDK_OFFSET(0xACE0)
#define STRUCT_2_CBA08FB52D88FCC0_GET_OLDSTATE_OFFSET UNITYSDK_OFFSET(0xFE70)
#define STRUCT_2_CBA08FB52D88FCC0__CTOR_OFFSET UNITYSDK_OFFSET(0xFE60)

inline static constexpr unsigned int Struct_2_CBA08FB52D88FCC0_TypeDefinitionIndex = 80263;

struct alignas(4) Struct_2_CBA08FB52D88FCC0
{
	::Enum_3_0F1B992870941C13_1 _GameMode_k__BackingField; // 0x10
	::RPG::Client::Multiplayer::MPSessionState _OldState_k__BackingField; // 0x14
	::RPG::Client::Multiplayer::MPSessionState _NewState_k__BackingField; // 0x18

	::System::Void _ctor(::Enum_3_0F1B992870941C13_1 a1, ::RPG::Client::Multiplayer::MPSessionState a2, ::RPG::Client::Multiplayer::MPSessionState a3)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_0F1B992870941C13_1, ::RPG::Client::Multiplayer::MPSessionState, ::RPG::Client::Multiplayer::MPSessionState))((::PBYTE)hIl2Cpp + STRUCT_2_CBA08FB52D88FCC0__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::Enum_3_0F1B992870941C13_1 get_GameMode()
	{
		return ((::Enum_3_0F1B992870941C13_1(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_CBA08FB52D88FCC0_GET_GAMEMODE_OFFSET))(this);
	}

	::RPG::Client::Multiplayer::MPSessionState get_OldState()
	{
		return ((::RPG::Client::Multiplayer::MPSessionState(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_CBA08FB52D88FCC0_GET_OLDSTATE_OFFSET))(this);
	}

	::RPG::Client::Multiplayer::MPSessionState get_NewState()
	{
		return ((::RPG::Client::Multiplayer::MPSessionState(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_CBA08FB52D88FCC0_GET_NEWSTATE_OFFSET))(this);
	}
};
